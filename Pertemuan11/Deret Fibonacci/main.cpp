#include <iostream>

using namespace std;
int main()
{
    cout << "<======================================================>" << endl;
    cout << " Nama      : Muhammad Rizal " << endl;
    cout << " NIM       : A11.2022.14127 " << endl;
    cout << " Kelompok  : A11.4104 " << endl;
    cout << " Tugas     : Dasar Pemograman --Deret Fibonacci--" << endl;
    cout << "<======================================================>" << endl;
    cout << " Deret fibonacci yaitu : 0,1,1,2,3,5,8,13,21...dst"<< endl;
    cout << " Rumus Fibonacci => F(n)=F(n-1)+F(n-2)" << endl;
    cout << "<======================================================>"<< endl;

    int a;
    int b;//<=> F(n)
    int c=0;//<=> F(n-1)
    int d=1;//<=> F(n-2)
    b=c+d;//<=> F(n)=F(n-1)+Fn-2)

    cout << " Program mencari Deret Fibonacci" << endl;
    cout << " Masukkan nilai/angka : ";cin >> a;
    cout << "Jadi,Deret Fibonaccinya adalah :" << endl;
    cout << c << endl;
    for(int i = 1;i < a && b <= 100; i++){
        b=c+d;
        d=c;
        c=b;
        cout << b << endl;
    }
    cout << "<======================================================>"<< endl;



    return 0;
}









