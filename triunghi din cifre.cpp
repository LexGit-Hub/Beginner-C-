#include <iostream>
using namespace std;

unsigned n, n1,n2,n3,n4,n0;

int main(){
system("title triunghi cifre");
cout << "n= "; cin >> n;


    n0 = n%10;
    n1 = (n/10)%10;
    n2 = (n/100)%10;
    n3 = (n/1000)%10;
    n4 = n/10000;

cout <<" " <<" "<< n2 << " "<< " "<< endl;
cout <<" " << n3 << n2 << n1 << " "<< endl;
cout  << n << endl;;

    system("pause");
    return 0;
}