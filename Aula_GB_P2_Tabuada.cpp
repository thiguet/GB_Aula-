#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    for(int i = 1 ; i < 11 ; i++ ) {
          cout << i << " x " << n << " = " << (i*n) << endl;
    }      
    getch();    
    return 0;
}
