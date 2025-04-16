//***********************************************************
//Authur.....: Sean Kelly
//assignment.: 2-1
//discription: This program will display the following output
//************************************************************

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

const int arraySize = 10;  //size is set to 10 

string name[arraySize];              //Parallel arrays 
string power[arraySize];
string weakness[arraySize];

string yearUni[arraySize][2];     //multidimensinoal array for the year and universe 

void loadSuperherodata();
void displayMenu();

string converttolower(string heroname)
{
    transform(heroname.begin(), heroname.end(), heroname.begin(), ::tolower);
    return heroname;
}

void loadSuperherodata()
{
    name[0] = "Squirrel Girl"; power[0] = "Control Squirrels"; weakness[0] = "Time Limits"; yearUni[0][0] = "1992"; yearUni[0][1] = "Marvel";
    name[1] = "Zeitgeist"; power[1] = "Acidic Vomit"; weakness[1] = "His Own Acid"; yearUni[1][0] = "2001"; yearUni[1][1] = "Marvel";
    name[2] = "Ragman"; power[2] = "Absorbs Souls"; weakness[2] = "Evil Soul Overload"; yearUni[2][0] = "1976"; yearUni[2][1] = "DC";
    name[3] = "Matter-Eater Lad"; power[3] = "Can Eat Anything"; weakness[3] = "Stomach Aches"; yearUni[3][0] = "1962"; yearUni[3][1] = "DC";
    name[4] = "Zan"; power[4] = "Transforms into Water"; weakness[4] = "Dry Environments"; yearUni[4][0] = "1977"; yearUni[4][1] = "DC";
    name[5] = "Color Kid"; power[5] = "Changes Object Colors"; weakness[5] = "Color Blindness"; yearUni[5][0] = "1966"; yearUni[5][1] = "DC";
    name[6] = "Doorman"; power[6] = "Create Doorways"; weakness[6] = "Needs a Wall"; yearUni[6][0] = "1989"; yearUni[6][1] = "Marvel";
    name[7] = "Bouncing Boy"; power[7] = "Inflates and Bounces"; weakness[7] = "Sharp Objects"; yearUni[7][0] = "1961"; yearUni[7][1] = "DC";
    name[8] = "Dogwelder"; power[8] = "Welds Dogs to Faces"; weakness[8] = "Dog Shortage"; yearUni[8][0] = "1996"; yearUni[8][1] = "DC";
    name[9] = "Ruby Thursday"; power[9] = "Morphing Head"; weakness[9] = "Head Damage"; yearUni[9][0] = "1976"; yearUni[9][1] = "Marvel";
}

void searchbyName()
{
    string userInput;
    cout << "Enter a superhero name to search: ";
    getline(cin, userInput);
    userInput = converttolower(userInput);
    bool found = false;

    for (int i = 0; i < arraySize; i++)
    {
        if (converttolower(name[i]) == userInput)
        {
            cout << "\nFound: " << name[i] << endl;
            cout << "Power: " << power[i] << endl;
            cout << "Weakness: " << weakness[i] << endl;
            cout << "Year Introduced: " << yearUni[i][0] << endl;
            cout << "Universe: " << yearUni[i][1] << endl;
            found = true;
            break;
        }
    }






int main()
{
   loadSuperherodata();   //load my superheros 
   displayMenu();           // me options for the user
   return 0;
}