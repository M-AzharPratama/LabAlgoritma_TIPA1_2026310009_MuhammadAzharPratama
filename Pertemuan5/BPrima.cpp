#include <iostream>
using namespace std;

int main(){
    int pilihan,awal,akhir,nilai;

    cout << "anda ingin melakukan perulangan(0) atau penentuan(1)";
    cin >> pilihan;

    if (pilihan == 0){
        cout << "anda ingin melakukan penentuan bilangan prima dari = ";
        cin >> awal;
        cout << "anda ingin melakukan penentuan bilangan prima sampai = ";
        cin >> akhir;

        for (int i=awal;i <= akhir; i++){
            bool bilPrima = true;
            if (i < 2){
                bilPrima = false;
            }
            else {
                for(int n = 2; n<i; n++){
                    if(i%n ==0){
                        bilPrima = false;
                        break;
                    }
                }
            }
            if (bilPrima)
            {
                cout << i << " Merupakan bilangan prima" <<endl;
            }
            else{
                cout << i << " Bukan merupakan bilangan prima" <<endl;

            }
            
    }
       
    }
    else {
        cout << "Masukan bilangan = ";
        cin >> nilai;

        bool bilPrima = true;
        if (nilai < 2)
        {
            bilPrima = false;
        }
        

        for (int n = 2; n < nilai; n++) {
            if (nilai % n == 0) {
                bilPrima = false;
                break;
            }
        }
            if (bilPrima)
            {
                cout << nilai << " Merupakan bilangan prima" <<endl;
            }
            else{
                cout << nilai << " Bukan merupakan bilangan prima" <<endl;

            }
    }


}