#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int i;
    string A, B, C;
    string palavras[10];
    string respostas[8];
    
    cin >> A >> B >> C;
    
    palavras[0] = "vertebrado";
    palavras[1] = "invertebrado";
    palavras[2] = "ave";
    palavras[3] = "mamifero";
    palavras[4] = "inseto";
    palavras[5] = "anelideo";
    palavras[6] = "hematofago";
    palavras[7] = "herbivoro";
    palavras[8] = "onivoro";
    palavras[9] = "carnivoro";
    
    respostas[0] = "aguia\n";
    respostas[1] = "pomba\n";
    respostas[2] = "homem\n";
    respostas[3] = "vaca\n";
    respostas[4] = "pulga\n";
    respostas[5] = "lagarta\n";
    respostas[6] = "sanguessuga\n";
    respostas[7] = "minhoca\n";
    
    if(palavras[0] == A) {
        if(palavras[2] == B) {
            if(palavras[9] == C) {
                i = 0;                             
            }  else if (palavras[8] == C) {
                i = 1;          
            }                     
        }  else if (palavras[3] == B) {
            if(palavras[8] == C) {
                 i = 2;               
            }  else if (palavras[7] == C) {
                 i = 3;         
            }
        }                                   
         
    }  else if (palavras[1] == A) {
        if(palavras[4] == B) {
            if(palavras[6] == C) {
                 i = 4;               
            }  else if (palavras[7] == C) {
                 i = 5;         
            }                     
        }  else if (palavras[5] == B) {
            if(palavras[6] == C) {
                 i = 6;              
            }  else if (palavras[8] == C) {
                 i = 7;         
            }
        }              
    }             
    cout << respostas[i];
    getch();    
    return 0;
}
