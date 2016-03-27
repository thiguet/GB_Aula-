#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    for(int j = 0 ; (((n*j) + 2) < 10000) ; j++) {
          printf("%i\n", ((n*j) + 2));
    }
    getch();
    return 0;
}

