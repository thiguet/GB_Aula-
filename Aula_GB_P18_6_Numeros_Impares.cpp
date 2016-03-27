#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int i = 0, n;
    
    cin >> n;
    
    while(i < 6) {
         if((n % 2) == 0) {   
                cout << ((n + 1) + (2 * i)) << endl;   
         }  else {
                cout << (n + (2 * i)) << endl;         
         }   
         i++;
    }
    getch();    
    return 0;
}
