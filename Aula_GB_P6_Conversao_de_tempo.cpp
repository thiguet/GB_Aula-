#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n;
    int min, seg, hr;
    
    cin >> n;
    seg = n;
    min = seg/60;
    seg = seg%60;
    hr = min/60;
    min = min%60;
    
    printf("%i:%i:%i\n", hr, min, seg);
          
    getch();    
    return 0;
}
