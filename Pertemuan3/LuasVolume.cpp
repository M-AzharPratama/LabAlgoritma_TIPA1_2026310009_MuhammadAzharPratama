#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double jariJari, tinggi;
    double luasLingkaran, volumeTabung;
    int luasLingkaranB, volumeTabungB;
    const double phi = 3.14;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;

    cout << jariJari << "cm" << endl;

    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;

    cout << tinggi << "cm" << endl;

    luasLingkaran = phi * jariJari * jariJari;

    volumeTabung = phi * jariJari * jariJari * tinggi;

    luasLingkaranB = luasLingkaran;

    volumeTabungB = volumeTabung;

    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Luas Lingkaran = " << luasLingkaran << "cm Dibulatkan menjadi = " << round(luasLingkaran) << "cm" << endl;
    cout << "Volume Tabung = " << volumeTabung << "cm Dibulatkan menjadi = " << round(volumeTabung) << "cm" << endl;

    return 0;
}