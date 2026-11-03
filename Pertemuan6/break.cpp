#include <iostream>
using namespace std;
#include <conio.h>
int main () {
    int a=3,b=2,c=1,bil;

    cout << "Bil-A("<<a<<") | Bil-B("<<b<<") | Bil-C("<<c<<")\n"<<"-----------------------------\n";

    for (bil = 1;bil<=10;bil++){
        a+=b;
        b+=c;
        c+=2;
        cout << "Bil-A("<<a<<") | Bil-B("<<b<<") | Bil-C("<<c<<")\n";

        if (c == 13){
            break;
        }
    }
    getch();
    
}