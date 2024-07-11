#include <iostream>
using namespace std;


float v1, v2, t1, x;

int main(){

    cout << "viteza iepure(m/s): "; cin >> v1;
    cout << "viteza leu(m/s): "; cin >> v2;
    cout << "timpul dupa carea apare leul(s): "; cin >> t1;

         if(v2>v1){

            x= v1*t1/(v2-v1);
            cout << x;

        }else cout <<"-1";

    system("pause");
    return 0;
}