#include <iostream>
using namespace std;

int main() {
    int irtifakodu;
    int durum;

    cout << "Irtifayi giriniz = ";
    cin >> irtifakodu;

    if (irtifakodu < 15) {
        durum = 2;
    }
    else if (irtifakodu >= 15 && irtifakodu < 30) {
        durum = 0;
    }
    else if (irtifakodu >= 30 && irtifakodu < 120) {
        durum = 1;
    }
    else {
        durum = 3;
    }

    switch(durum) {
        case 0:
            cout << "Irtifa dusuk lutfen yukselin" << endl;
            break;
        case 1:
            cout << "Irtifa guvenli seviyede, iyi ucuslar" << endl;
            break;
        case 2:
            cout << "Irtifa cok dusuk seviyede! ACIL DURUM" << endl;
            break;
        default:
            cout << "Irtifa kontrol disinda!" << endl;
    }

    return 0;
}
