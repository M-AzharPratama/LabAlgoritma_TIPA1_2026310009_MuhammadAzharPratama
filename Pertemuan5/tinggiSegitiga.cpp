#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Masukan tinggi Segitiga: ";
    cin >> a;

    for (int i=1;i<=a;i++){
        cout << endl;
        for (int b=1;b<=i;b++){
            cout << "* ";
        }
    }
}