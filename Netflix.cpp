#include <iostream>
#include <stdlib.h>
using namespace std;

class Netflix
{
private:
    string uName, uPassword;
    string correctDetails;
    Welcome();
    // genera
    tvShow();
    horror();
    sciFi();
    comedy();
    drama();
    anime();
    sports();
    Documentery();
    // Netflix shows
    // TV Shows
    Dp();
    theSilentSea();
    // Episodes
    theSilentSeaE1();
    theSilentSeaE2();
    // Horror
    sweetHome();
    Slasher();
    // Sci-Fi
    projectPower();
    Awake();
    // Comedy
    redNotice();
    spencerConfidential();
    // Drama
    guilty();
    Joker();
    // Anime
    theWindRises();
    aWiskerAwake();
    // Sports
    theWayBack();
    homeTeam();
    // Documentory
    tigerKing();
    cheer();

public:
    Login();
};
Netflix::Login()
{
    system("cls");
    cout << correctDetails;
    cout << "\t\tWelcome to Netflix";
    cout << "\nEnter your Details";
    cout << "\nEnter Name : ";
    cin >> uName;
    cout << "Enter password : ";
    cin >> uPassword;
    if (uPassword == "abcd123")
    {
        correctDetails = "";
        Welcome();
    }
    else
    {
        correctDetails = "\nEnter Correct Details\n";
        Login();
    }
    return 0;
}
Netflix::Welcome()
{

    system("cls");
    int genreChoice;
    cout << "\n\t\tWelcome " << uName;
    cout << "";
    cout << "\nPlease Select Genre";
    cout << "\nPress 1 for TV Show";
    cout << "\nPress 2 for Horror";
    cout << "\nPress 3 for Sci-Fi";
    cout << "\nPress 4 for Comedy";
    cout << "\nPress 5 for Drama";
    cout << "\nPress 6 for Anime";
    cout << "\nPress 7 for Sports";
    cout << "\nPress 8 for Documentaries";
    cout << "\nPress 9 to Exit";
    cout << "\nChoice ";
    cin >> genreChoice;
    switch (genreChoice)
    {
    case 1:
    {
        tvShow();
        break;
    }
    case 2:
    {
        horror();
        break;
    }
    case 3:
    {
        sciFi();
        break;
    }
    case 4:
    {
        comedy();
        break;
    }
    case 5:
    {
        drama();
        break;
    }
    case 6:
    {
        anime();
        break;
    }
    case 7:
    {
        sports();
        break;
    }
    case 8:
    {
        Documentery();
        break;
    }
    case 9:
    {
        break;
    }
    default:
    {
        break;
    }
    }
    return 0;
}
// genera category
Netflix::tvShow()
{
    system("cls");
    int Choice;
    cout << "\nGenre => TV Shows";
    cout << "";
    cout << "\n\t\tWhat would you like to watch ??";
    cout << "\nPress 0 to return";
    cout << "\nPress 1 for D.P";
    cout << "\nPress 2 for The Silent Sea";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        Welcome();
        break;
    }
    case 1:
    {
        Dp();
        break;
    }
    case 2:
    {
        theSilentSea();
        break;
    }
    }
    return 0;
}
Netflix::horror()
{
    system("cls");
    int Choice;
    cout << "\nGenre => Horror";
    cout << "";
    cout << "\n\t\tWhat would you like to watch ??";
    cout << "\nPress 0 to return";
    cout << "\nPress 1 for sweetHome";
    cout << "\nPress 2 for Slasher";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        Welcome();
        break;
    }
    case 1:
    {
        sweetHome();
        break;
    }
    case 2:
    {
        Slasher();
        break;
    }
    }
    return 0;
}
Netflix::sciFi()
{
    system("cls");
    int Choice;
    cout << "\nGenre => Sci-Fi";
    cout << "";
    cout << "\n\t\tWhat would you like to watch ??";
    cout << "\nPress 0 to return";
    cout << "\nPress 1 for Project Power";
    cout << "\nPress 2 for Awake";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {

    case 0:
    {
        Welcome();
        break;
    }
    case 1:
    {
        projectPower();
        break;
    }
    case 2:
    {
        Awake();
        break;
    }
    }
    return 0;
}
Netflix::comedy()
{
    system("cls");
    int Choice;
    cout << "\nGenre => Comedy";
    cout << "";
    cout << "\n\t\tWhat would you like to watch ??";
    cout << "\nPress 0 to return";
    cout << "\nPress 1 for Red Notice";
    cout << "\nPress 2 for Spencer Confidencial";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {

    case 0:
    {
        Welcome();
        break;
    }
    case 1:
    {
        redNotice();
        break;
    }
    case 2:
    {
        spencerConfidential();
        break;
    }
    }
    return 0;
}
Netflix::drama()
{
    system("cls");
    int Choice;
    cout << "\nGenre => Drama";
    cout << "";
    cout << "\n\t\tWhat would you like to watch ??";
    cout << "\nPress 0 to return";
    cout << "\nPress 1 for guilty";
    cout << "\nPress 2 for Joker";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {

    case 0:
    {
        Welcome();
        break;
    }
    case 1:
    {
        guilty();
        break;
    }
    case 2:
    {
        Joker();
        break;
    }
    }
    return 0;
}
Netflix::anime()
{
    system("cls");
    int Choice;
    cout << "\nGenre => Anime";
    cout << "";
    cout << "\n\t\tWhat would you like to watch ??";
    cout << "\nPress 0 to return";
    cout << "\nPress 1 for A Wisker Awake";
    cout << "\nPress 2 for The Wind Rises";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {

    case 0:
    {
        Welcome();
        break;
    }
    case 1:
    {

        aWiskerAwake();
        break;
    }
    case 2:
    {
        theWindRises();
        break;
    }
    }
    return 0;
}
Netflix::sports()
{
    system("cls");
    int Choice;
    cout << "\nGenre => Sports";
    cout << "";
    cout << "\n\t\tWhat would you like to watch ??";
    cout << "\nPress 0 to return";
    cout << "\nPress 1 for Home Team";
    cout << "\nPress 2 for The Way Back";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {

    case 0:
    {
        Welcome();
        break;
    }
    case 1:
    {

        homeTeam();
        break;
    }
    case 2:
    {
        theWayBack();
        break;
    }
    }
    return 0;
}
Netflix::Documentery()
{
    system("cls");
    int Choice;
    cout << "\nGenre => Documentory ";
    cout << "";
    cout << "\n\t\tWhat would you like to watch ??";
    cout << "\nPress 0 to return";
    cout << "\nPress 1 for Cheer";
    cout << "\nPress 2 for Tiger King";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {

    case 0:
    {
        Welcome();
        break;
    }
    case 1:
    {

        cheer();
        break;
    }
    case 2:
    {
        tigerKing();
        break;
    }
    }
    return 0;
}
// Shows
Netflix::Dp()
{
    system("cls");
    int Choice;
    cout << "\n\t\tD.P ";
    cout << "";
    cout << "\nPlease Select Episode";
    cout << "\nPress 0 to return";
    cout << "\n 1. A Man Holding Flowers, 50 min";
    cout << "\n 2. Daydream , 51 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        tvShow();
        break;
    }
    }
    return 0;
}
Netflix::theSilentSea()
{
    system("cls");
    int Choice;
    cout << "\n\t\t The Silent Sea ";
    cout << "";
    cout << "\nPlease Select Episode";
    cout << "\nPress 0 to return";
    cout << "\n 1. Balhae Lunar Research Station , 51 min";
    cout << "\n 2. Three Storages , 47 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        tvShow();
        break;
    }
    }
    return 0;
}
// Horror
Netflix::sweetHome()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Sweet Home ";
    cout << "";
    cout << "\nPlease Select Episode";
    cout << "\nPress 0 to return";
    cout << "\n 1. Episode 1 , 50 min";
    cout << "\n 2. Episode 2 , 57 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        horror();
        break;
    }
    }
    return 0;
}
Netflix::Slasher()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Slasher ";
    cout << "";
    cout << "\nPlease Select Episode";
    cout << "\nPress 0 to return";
    cout << "\n 1. An Eye for an Eye , 52 min";
    cout << "\n 2. Digging Your Grave with Your Teeth , 50 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        horror();
        break;
    }
    }
    return 0;
}
// Sci-Fi
Netflix::projectPower()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Project Power ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play Project Power, 1:52 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        sciFi();
        break;
    }
    }
    return 0;
}
Netflix::Awake()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Awake ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play Awake, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        sciFi();
        break;
    }
    }
    return 0;
}
// Comedy
Netflix::redNotice()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Red Notice ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play Red Notice, 1:58 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        comedy();
        break;
    }
    }
    return 0;
}
Netflix::spencerConfidential()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Spencer Confidential ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play Spencer Confidential, 1:51 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        comedy();
        break;
    }
    }
    return 0;
}
// Drama
Netflix::guilty()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Guilty ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play Guilty, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        drama();
        break;
    }
    }
    return 0;
}
Netflix::Joker()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Joker ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play Joker, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        drama();
        break;
    }
    }
    return 0;
}
// Anime
Netflix::theWindRises()
{
    system("cls");
    int Choice;
    cout << "\n\t\t The Wind Rises ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play The Wind Rises, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        anime();
        break;
    }
    }
    return 0;
}
Netflix::aWiskerAwake()
{
    system("cls");
    int Choice;
    cout << "\n\t\t A Wisker Awake ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play A Wisker Awake, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        anime();
        break;
    }
    }
    return 0;
}
// Sports
Netflix::theWayBack()
{
    system("cls");
    int Choice;
    cout << "\n\t\t The Way Back ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play The Way Back, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        sports();
        break;
    }
    }
    return 0;
}
Netflix::homeTeam()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Home Team ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play Home Team, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        sports();
        break;
    }
    }
    return 0;
}
// Documentory
Netflix::tigerKing()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Tiger King ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play Tiger King, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        Documentery();
        break;
    }
    }
    return 0;
}
Netflix::cheer()
{
    system("cls");
    int Choice;
    cout << "\n\t\t Cheer ";
    cout << "";
    cout << "\nPress 0 to return";
    cout << "\n 1. Play cheer, 1:36 min";
    cout << "\nChoice ";
    cin >> Choice;
    switch (Choice)
    {
    case 0:
    {
        Documentery();
        break;
    }
    }
    return 0;
}

main()
{
    Netflix ntflx;
    ntflx.Login();
}