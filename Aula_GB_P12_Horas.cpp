#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

int main() {
    int hrs, min, resp = -420;
    char ch;
    cin >> hrs >> ch >> min; 
    while(!cin.eof()) {
          (resp + (min + (hrs * 60)) > 0) ? cout << "Atraso maximo: " << ( (min + (hrs * 60)) + resp) << endl : cout << "Atraso maximo: 0\n";
          cin >> hrs >> ch >> min; 
    }    
    getch();    
    return 0;
}
