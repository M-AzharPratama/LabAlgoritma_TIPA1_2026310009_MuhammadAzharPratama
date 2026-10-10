#include <iostream>
#include <string>
using namespace std;
int main() {

    string npm,nama;
    cout << "masukan NPM : 262031";
    cin >> npm;
    cin.ignore();
    cout << "masukan NAMA : ";
    // cin >> nama;
    getline(cin, nama);
    cout << "NPM : 262031" << npm << endl ;
    cout << "NAMA : " << nama << endl ;
}