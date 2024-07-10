//1.16 APLICATII
/*Fie r un numar real citit la tastatura, care reprezinta lungimea razei unui cerc. Sa se srie un program care sa calculeze aria si perimetrul discului de raza r.*/

#include <iostream>
#include <cmath>
using namespace std;
float r, A, P;
int main(){
system("title A si P cerc");
    
    cout <<"r= "; cin >> r;
    A = M_PI*r*r;
    P = 2*M_PI*r;

cout << "Aria cercului este " << A << " cm"<<  endl;
cout << "Perimetrul cercului este "<< P <<" cm"<< endl;
    
system("pause");
return 0;
}
