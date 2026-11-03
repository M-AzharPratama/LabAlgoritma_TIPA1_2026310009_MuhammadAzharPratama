#include <iostream>
using namespace std;
#include <conio.h>
int main () {
    int a,b;
    char lagi;

    atas:
    system("cls");

    cout << "masukan bilangan = ";
    cin >> a;

    b=a%2;

    cout << "nilai "<<b<<" merupakan hasil dari nilai "<<a<<"modulus 2\n\n"<<"ingin hitung lagi [y/t] : ";
    lagi = getche();
    if (lagi == 'Y' || lagi =='y')
    goto atas;
    getch();
    
}