#include <iostream>
using namespace std;
unsigned a, b, c,n;

void schimb(){
    cout << "\napasa 1 pentru a schiimba valorile";
    cin >> n;
                if (n==1)
            {
                c=a;
                a=b;
                b=c;

                cout << "\na= " << a;
                cout << "\nb= "<< b;
            }else schimb();
}

int main(){
system("title schimb");
    cout << "a= "; cin >> a;
    cout << "\nb= "; cin >> b;

        schimb();



system("pause");
return 0;
}