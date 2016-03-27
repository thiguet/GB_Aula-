#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    long long TA, TB;
    int n, anos = 0; 
    double GA, GB;
    
    cin >> n;
    while (n > 0) {
          cin >> TA >> TB;
          cin >> GA >> GB;
          
          while(TA <= TB) {
                    TA += TA*GA/100;                
                    TB += TB*GB/100;                
                    anos++;
                    if(anos > 100) 
                            break;
          }
          (anos <= 100) ? cout << anos << " anos.\n" : cout << "Mais de 1 seculo.\n";
          anos = 0;          
          n--;
    }      
    getch();
    return 0;
}
/*#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    int casos, anos;
    int PA, PB, TA, TB;
    double GA, GB;
    
    cin >> casos;
    while (casos > 0) {
          anos = 0;
          cin >> PA >> PB;
          cin >> GA >> GB;
          TA = PA;
          TB = PB;
          while (TA <= TB) {
                TA += (int)(((int)(TA*GA))/100);
                TB += (int)(((int)(TB*GB))/100);     
                anos++;
                if(anos > 100) {
                        break;
                }    
          }
          if(anos > 100) {
               cout << "Mais de 1 seculo.\n";       
          }    
          else {          
               cout << anos << " anos.\n";
          }
          casos--;
    }      
    getch();    
    return 0;
}
*/
