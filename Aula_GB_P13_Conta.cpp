#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n, val;
    
    cin >> n;
    
    while (n > 0) {
          cin >> val;
          (val%2) == 0 ? printf("%i\n", 0) : printf("%i\n", 1);
          n--;
    }
    getch();    
    return 0;
}
