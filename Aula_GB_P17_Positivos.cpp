#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    double n;
    int positivos = 0, i = 0;
    
    while(i < 6) {
          cin >> n;
          if(n > 0) {
              positivos++;
          }    
          i++;
    }
    cout << positivos << " valores positivos\n";
    getch();    
    return 0;
}
