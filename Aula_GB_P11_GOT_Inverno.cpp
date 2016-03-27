#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int A, B, C;
    int dia1, dia2;
    string out;
    
    cin >> A >> B >> C;
    
    dia1 = B-A;
    dia2 = C-B;
    
    if(dia1 > 0) {
            if(dia2 <= 0) {
                    out = ":(";
            } else {
                   if(dia1 <= dia2) {
                           out = ":)";
                   } else {
                           out = ":(";       
                   }
            }
    } else if(dia1 == 0) {        
            if(dia2 > 0) {
                    out = ":)";
            } else {
                    out = ":(";
            }
    
    } else if(dia1 < 0){
            if(dia2 <= 0) {
                    if(dia2 > dia1) {
                            out = ":)";
                    } else {
                            out = ":(";       
                    }       
            } else {
                    out = ":)";
            }

    }
    cout << out << endl;
    getch();
    return 0;
}
