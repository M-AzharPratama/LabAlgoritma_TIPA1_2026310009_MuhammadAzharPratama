#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int p;

    ulang:

    cout << "======= Selamat Datang =======\n 1. Tentukan Bilangan Genap/Ganjil\n 2. Tentukan Bilangan Prima\n 0. Hentikan Program\n";
    cin >> p;

    if (p == 2){
        int n;
        cout << "======= Menu Bilangan Prima =======\n Masukan bilangan ";
        cin >> n;

        bool bilPrima = true;
        if (n < 2)
        {
            bilPrima = false;
        }
        

        for (int a = 2; a < n; a++) {
            if (n % a == 0) {
                bilPrima = false;
                break;
            }
        }
            if (bilPrima)
            {
                cout << n << " Merupakan bilangan prima\n" <<endl;
            }
            else{
                cout << n << " Bukan merupakan bilangan prima\n" <<endl;
            }
            goto ulang;

    };
    if (p == 1){
        int n;
        cout << "======= Menu Bilangan Ganjil/Genap =======\n Masukan bilangan ";
        cin >> n;

        if (n % 2 ==0){
            cout << n << " Merupakan bilangan Genap\n"<<endl; 
        }
        else {
            cout << n << " Merupakan bilangan Ganjil\n"<<endl;
        }
        goto ulang;
    };
    if (p == 0){}
    else {
        cout << p << " Angka anda diluar pilihan\n";
        goto ulang;
    }

}