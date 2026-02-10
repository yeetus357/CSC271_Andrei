//
// Created by Andrei Brillantes on 2/9/2026.
//

#include <iostream>
#include <cassert>
using namespace std;

int main () {
    int record1 = 1, record2 = 2, record3 = 1, record4 = 3, record5 = 2, record6 = 2;
    int phoneCount = 0, chargerCount = 0, headphoneCount = 0;


    for (int i = 1; i <= 6; i++) {
        int saleType = 0;
        if (i == 1)
            saleType = record1;
        else if (i == 2)
            saleType = record2;
        else if (i == 3)
            saleType = record3;
        else if (i == 4)
            saleType = record4;
        else if (i == 5)
            saleType = record5;
        else if (i == 6)
            saleType = record6;

        switch (saleType) {
                case 1:phoneCount++;
                break;
                case 2:chargerCount++;
                break;
                case 3:headphoneCount++;
                break;
                default:
                cout << "Unknown task!" << endl;
        }

    }
    cout <<"===Daily Sales Summary===" << endl;
    cout << "Phone:" << phoneCount << endl;
    cout << "Headphone:" << headphoneCount << endl;
    cout << "charger:" << chargerCount << endl;


    return 0;
}
