#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 2 ; i <= n ; i+=2) {
            printf("%d^2 = %d\n", i, i * i);
    }
    getch();
    return 0;
}
