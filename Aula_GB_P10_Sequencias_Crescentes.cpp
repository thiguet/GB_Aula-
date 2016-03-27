#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n > 0) {
          for(int i = 1 ; i <= n ; i++ ) {
                  if(!(i == n)) {
                       cout << i << " ";
                  } else {     
                       cout << i << endl;
                  }
          }
          cin >> n;
    }
    getch();    
    return 0;
}
