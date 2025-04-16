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
}





int main()
{
   loadSuperherodata();   //load my superheros 
   displayMenu();           // me options for the user
   return 0;
}