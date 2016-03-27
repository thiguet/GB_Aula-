#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int A, B, aux;
    
    cin >> A >> B;
    
    if(A > B) {
         aux = B;
         B = A;
         A = aux;
    }     
    (B%A == 0) ? cout << "Sao Multiplos\n" : cout << "Nao sao Multiplos\n" ;
    
    
    getch();    
    return 0;
}
