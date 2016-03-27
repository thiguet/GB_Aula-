#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int x, y, aux;
    int res = 0;
    
    cin >> x >> y;
    
    if(x > y) {
         aux = y;
         y = x;
         x = aux; 
    }
    for(int i = x ; i <= y ; i++ ) {
         if(!(i%13) == 0) {
             res += i;                   
         }  
    }      
    
    cout << res << endl;
    getch();    
    return 0;
}
