#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int cod, qntd;
    double val;
    
    cin >> cod >> qntd;
    
    switch(cod) {
                case 1:
                     val = ((double)qntd) * 4.00;
                     break;
                case 2:
                     val = ((double)qntd) * 4.50;
                     break;
                case 3:
                     val = ((double)qntd) * 5.00;
                     break;
                case 4:
                     val = ((double)qntd) * 2.00;
                     break;
                case 5:            
                     val = ((double)qntd) * 1.50;
                     break;
    }            
    printf("Total: R$ %.2f\n", val);
          
    getch();    
    return 0;
}
