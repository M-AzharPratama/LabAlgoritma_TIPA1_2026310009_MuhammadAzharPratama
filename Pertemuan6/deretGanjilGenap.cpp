#include <iostream>
using namespace std;

int main() {
    int i=0;
    bool ganjil,genap,g1,g2;

    g1 = false;
    g2 = false;

    while (i<=1){
        i++;

        int jumlah=0;
        
        ganjil = (i %2 != 0);
        genap = (i %2 == 0);


        if (ganjil){
            cout<<"Ganjil : ";
            for (int b=1,i=1;b<=10;b++){
                cout<<i;

                jumlah +=i;

                if (b < 10){
                    cout<<" + ";
                }

                i=i+2;
            }
            cout << " = " <<jumlah;
            g1 = true;
        }
        
        cout<<endl;
        
        if (genap){
            cout<<"Genap : ";
            for (int b=1,i=2;b<=10;b++){
                cout<<i;

                jumlah +=i;
                
                if (b < 10){
                    cout<<" + ";
                }
                
                i=i+2;
            }
            cout << " = " <<jumlah;
            g2 = true;
        }
        if (g1 && g2 == true){
            break;
        }
    }
}