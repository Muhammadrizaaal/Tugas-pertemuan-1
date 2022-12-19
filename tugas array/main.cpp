#include <iostream>

using namespace std;

int main()
{
    cout << "<==================================================================>"<< endl;
    cout << " Nama : Muhammad Rizal"<< endl;
    cout << " Nim : A11.2022.14127"<< endl;
    cout << " Kelas : A11.4104" <<endl;
    cout << "<==================================================================>"<< endl;
    cout << " "<< endl;
    int a = 0, b = 1, c = 0, d = 0;
    int x[3][2][2];
    float rata_rata;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2;j++){
            for(int k = 0; k < 2;k++){
            x[i][j][k] = d;
            d +=4;
            cout << d << " ";
            c += d;
            a += b;
            rata_rata = (float)c / a;
        }
    }
}
    cout << "\n";
    cout << "sum Kelipatan 4 adalah = " << c << endl;
    cout << "Rata-rata sum kelipatan 4 adalah = " << rata_rata << endl;

    return 0;
}
