#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    double A, B, C, Delta, X1, X2;
    
    cin >> A >> B >> C;
    
    Delta = sqrt((B*B) - (4*A*C));
    if((Delta > 0.0) && (A != 0.0)) {
         X1 = (((B*(-1)) + (Delta)) / (2 * A) );
         X2 = (((B*(-1)) + ((Delta)*(-1)) ) / (2 * A) );
         printf("R1 = %.5f\n", X1);
         printf("R2 = %.5f\n", X2);
    } else {
           printf("%s\n","Impossivel calcular");
    }
          
    getch();    
    return 0;
}
