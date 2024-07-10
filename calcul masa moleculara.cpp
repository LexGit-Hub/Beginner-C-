//1.16 APLICATII
/*Molecula formata din nC, nO, oH calculatii masa Moleculara.*/

#include <iostream>
#include <cmath>
using namespace std;

unsigned o, h, c, M, O=16, C=12, H=1;

int main(){
    system("title Calcul Masa moleculara");
    cout<< "(atomi de carbon)c ="; cin >> c;
    cout<< "(atomi de oxigen)o ="; cin >> o;
    cout<< "(atomi de hidrogen)h ="; cin >> h;

    M = c*C + o*O + h*H;

cout <<"\nMasa moleculara este egala cu " << M << endl;

    system("pause");
    return 0;
}