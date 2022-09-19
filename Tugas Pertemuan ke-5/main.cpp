#include <iostream>
#include <stdio.h>
#define pi 3.14
using namespace std;

int main()
{
    cout << "Muhammad Rizal" << endl;
    cout << "NIM : A11.2022.14127" << endl;
    cout << "Kelompok : A11.4104" << endl;
    cout << "Tugas : Dasar Pemograman" << endl;


    // 1.)Luas Lingkaran

    double jari;
    double luas;

    // Input Jari-Jari

    printf("Masukkan jari-jari lingkaran : ");
    scanf("%lf", &jari);

    // Rumus Menghitung Luas

    luas = pi * jari * jari;

    // Hasil Luas Lingkaran

    printf("Luas lingkarannya adalah %.2f cm2", luas);
    cout << endl;
//=============================================================================================//

    // 2.) Luas Segitiga

   float p;
   float l;
   float Luas;

    //Input Panjang dan Lebar

    cout << "Masukkan Panjang Persegi Panjang : "; cin >> p;
    cout << "Masukkan Lebar Persegi Panjang : "; cin >> l;

    // Rumus Persegi Panjang

    Luas = p * l ;

    //Hasil Luas Persegi Panjang

    cout << "hasilnya adalah : ";
    cout << "Panjang "<<p<<" cm, dan lebar "<<l<<" cm"<<" = "<<Luas<<" cm2" << endl;
//=============================================================================================//


    return 0;
}
