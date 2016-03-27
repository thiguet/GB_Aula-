#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int x, y, aux;
    
    cin >> x >> y;
    if(y < x) {
         aux = y;
         y = x;
         x = aux;
    }
    
    for(int i = (x+1) ; i < y ; i++ )  {     
            if( ((((i%5)-2) == 0) || (((i%5)-3)) == 0)) { 
                cout << i << endl;     
            }    
    }
    getch();
    return 0;
        
    
}
