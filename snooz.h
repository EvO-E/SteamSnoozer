#ifndef SNOOZ_H
#define SNOOZ_H


#define STEAMWORKS_CLIENT_INTERFACES
#include "mainwindow.h"
#include <QApplication>
#include "Steamworks.h"
#include <time.h>
#include "Interface_OSW.h"
#include <conio.h>
using namespace std;
IClientEngine *pClientEngine;
IClientUser *pClientUser;

HSteamPipe hPipe = -1;
HSteamUser hUser;

CSteamAPILoader loader;

class snooz
{
    void ReleaseSteam()
{
    pClientEngine->ReleaseUser(hPipe, hUser);
    pClientEngine->BReleaseSteamPipe(hPipe);
}

public:int Snoozer(int Status)
{
    CreateInterfaceFn factory = loader.GetSteam3Factory();

    if (!factory)
    {
        fprintf(stderr, "Unable to load steamclient factory.\n");
        return 1;
    }

    IClientEngine *pClientEngine = (IClientEngine *)factory(CLIENTENGINE_INTERFACE_VERSION, NULL);
    if (!pClientEngine)
    {
        fprintf(stderr, "Unable to get the client engine.\n");
        return 1;
    }

    HSteamPipe hPipe;
    HSteamUser hUser = pClientEngine->CreateLocalUser(&hPipe, k_EAccountTypeIndividual);
    if (!hUser || !hPipe)
    {
        fprintf(stderr, "Unable to create the global user.\n");
        return 1;
    }

    IClientUser *pClientUser = (IClientUser *)pClientEngine->GetIClientUser(hUser, hPipe, CLIENTUSER_INTERFACE_VERSION);
    if (!pClientUser)
    {
        fprintf(stderr, "Unable to get the client user interface.\n");
        pClientEngine->ReleaseUser(hPipe, hUser);
        pClientEngine->BReleaseSteamPipe(hPipe);
        pClientEngine->BShutdownIfAllPipesClosed();
        return 1;
    }

    IClientFriends *pClientFriends = (IClientFriends *)pClientEngine->GetIClientFriends(hUser, hPipe, CLIENTFRIENDS_INTERFACE_VERSION);
    if (!pClientFriends)
    {
        fprintf(stderr, "Unable to get the client friends interface.\n");
        pClientEngine->ReleaseUser(hPipe, hUser);
        pClientEngine->BReleaseSteamPipe(hPipe);
        pClientEngine->BShutdownIfAllPipesClosed();
        return 1;
    }



hPipe = pClientEngine->CreateSteamPipe();
if (!hPipe || hPipe == -1)
{
    fprintf(stderr, "Unable to create pipe.\n");
    return false;
}

hUser = pClientEngine->ConnectToGlobalUser(hPipe);
if (!hUser)
{
    fprintf(stderr, "Unable to create the global user.\n");
    return false;
}

pClientUser = (IClientUser *)pClientEngine->GetIClientUser(hUser, hPipe, CLIENTUSER_INTERFACE_VERSION);
if (!pClientUser)
{
    fprintf(stderr, "Unable to get the client user interface.\n");
    ReleaseSteam();
    return false;
}
ISteamClient006 *pSteamClient = (ISteamClient006 *)factory(STEAMCLIENT_INTERFACE_VERSION_006, NULL);

ISteamFriends001 *pSteamFriends001 = (ISteamFriends001 *)pSteamClient->GetISteamFriends(hUser, hPipe, STEAMFRIENDS_INTERFACE_VERSION_001);

if(Status==1)
{
pSteamFriends001->SetPersonaState(k_EPersonaStateSnooze);
}
else
    if(Status==2)
    {
        pSteamFriends001->SetPersonaState(k_EPersonaStateOnline);
    }
return 0;
}
};
#endif // SNOOZ_H
