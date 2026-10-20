#include <iostream> //File header standar pada C++ adalah <iostream>
using namespace std; //untuk memberitahukan kepada kompiler bahwa akan
//menggunakan semua fungsi/clas/file pada memori namespace.std

int main() { //fungsi utama yang wajib dicantumkan
    //inisialisasi variabel

    int x=50; //nilai 50 dimasukan ke dalam x

    int a,b,c,d,e; //Membuat 5 wadah int


    a=x>5+5; //sebuah proses untuk mengolah variabel a
    // jika x>5+5 atau x>10 maka nilainya Benar atau Salah (1)atau(0)
    b=x>100;//sebuah proses untuk mengolah variabel b
    // jika x>100 maka nilainya Benar atau Salah (1)atau(0)
    c=a&&b;//sebuah proses untuk mengolah variabel c
    // jika a dan b bernilai benar sama (1)(1)
    d=a||b;//sebuah proses untuk mengolah variabel c
    // jika a atau b salah satunya bernilai benar (1)(0) atau (0)(1)
    e=!(c);//sebuah proses untuk mengolah variabel e
    // dimana nilainya kebalikan dari c

    //output berupa 1(Benar) dan 0(Salah)
    cout<<"\nNilai a=x>5+5= "<<a<<endl;
    cout<<"\nNilai b=x>100= "<<b<<endl;
    cout<<"\nNilai c=a && b= "<<c<<endl;
    cout<<"\nNilai d=a || b= "<<d<<endl;
    cout<<"\nNilai e=!(c)= "<<e<<endl;
    //fungsi diatas merupakan perintah untuk menampilkan teks dan hasilnya
    getchar(); //Menunggu pengguna menekan tombol Enter untuk mengakhiri program
} //akhir dari fungsi yang dijalankan