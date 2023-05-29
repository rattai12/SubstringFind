#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;


void SetWestern() {
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
}
int main()
{
    SetWestern();
  
    

    //ifstream MinFil(filnamn); //läser in filen
    string fageltyp;
    string svenskfagel;
    string latinfagel;
    string observationer;
   // "B,Björktrast,Turdus pilaris,2913"
    
    string readfrom ="HJ,Mazda,Zoom ZOom,2003" ;
    //while (getline (MinFil, line)) { // läser varje rad        
        int firstComma = readfrom.find(",");
         fageltyp = readfrom.substr(0, firstComma);
        // cout << fageltyp;
         cout << firstComma << endl;
         int secondComma = readfrom.find(",", firstComma+1);
         svenskfagel = readfrom.substr(firstComma+1, (secondComma-firstComma)-1);
        // cout << svenskfagel;
         cout << secondComma << endl;
         int thirdComma = readfrom.find(",", secondComma+1);
         latinfagel = readfrom.substr(secondComma+1, (thirdComma-secondComma)-1); 
         cout << thirdComma << endl;
         
         observationer = readfrom.substr(thirdComma+1);
         // cout << observationer << endl;
         

         cout << fageltyp << endl << svenskfagel << endl << latinfagel << endl << observationer << "\n";
       // break;


   }


