#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    string senha;
    
    cin >> senha;
    while(senha != "2002") {
         cout << "Senha Invalida\n";
         cin >> senha;
    }
    cout << "Acesso Permitido\n";    
    getch();    
    return 0;
}
