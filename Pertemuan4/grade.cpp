#include<iostream>
#include <string>
using namespace std;

int main()
{
    float NR;
    int N1,N2,N3;
    string nama;
    cout << "Masukan nama siswa : ";
    getline(cin, nama);

    cout << "Masukan Nilai pertandingan 1 : ";
    cin >> N1;
    cout << "Masukan Nilai pertandingan 2 : ";
    cin >> N2;
    cout << "Masukan Nilai pertandingan 3 : ";
    cin >> N3;

    NR = (N1 + N2 + N3) /3;

    if (NR >= 85){
        cout <<"siswa yang bernama : " << nama << endl;
        cout <<"Memperoleh nilai rata-rata : " << NR << " dari hasil perlombaan yang di ikuti"<< endl;
        cout <<"hadiah yang di dapat adalah : komputer Core I5";
    }
    else if (NR >= 70){
        cout <<"siswa yang bernama : " << nama << endl;
        cout <<"Memperoleh nilai rata-rata : " << NR << " dari hasil perlombaan yang di ikuti"<< endl;
        cout <<"hadiah yang di dapat adalah : Uang sebesar Rp.2.500.000";
    }
    else {
        cout <<"siswa yang bernama : " << nama << endl;
        cout <<"Memperoleh nilai rata-rata : " << NR << " dari hasil perlombaan yang di ikuti"<< endl;
        cout <<"hadiah yang di dapat adalah : Liburan";
    }

    return 0;
    
}