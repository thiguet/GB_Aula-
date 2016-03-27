#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    for(int i = 1 ; i <= n ; i++ ) {
          cout << i << " " << i*i << " " << (i*i*i) << endl;
    }      
    getch();    
    return 0;
}
