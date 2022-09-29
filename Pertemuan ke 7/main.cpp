#include <iostream>
#include <stdio.h>


using namespace std;

int main()

{
    int a;
    int b;

    cout << "===== Daftar Jurusan =====" << endl;
    cout << " 1. Teknik Informatika " << endl;
    cout << " 2. Sistem Informasi " << endl;
    cout << " 3. Desain Komunikasi Visual" << endl;

    cout << "===== Kategori Mahasiswa =====" << endl;
    cout << " 1. Semester 1-2 = Freshman" << endl;
    cout << " 2. Semester 3-4 = Sophomore" << endl;
    cout << " 3. Semester 5-6 = Junior" << endl;
    cout << " 4. Semester 7-8 = Senior" << endl;

    cout << "Masukkan Jurusan Anda = "; cin>>a;
     cout << "Masukkan Semester Anda = "; cin >>b;

    if (a==1){
        cout<< " \"Jurusan Anda Adalah Teknik Informatika\" " << endl;
    }
    if (a==2) {
        cout << " \"Jurusan Anda Adalah Sistem Informasi\" " << endl;
    }
    if (a==3) {
        cout << " \"Jurusan Anda Adalah Desain Komunikasi Visual\" " << endl;

    }


    if(b<= 2){
        cout << " \"Anda Dalam Kategori fresmen Year\" " << endl;
    }

    if(b>=3 && b<5 && b>2) {
        cout << " \"Anda Dalam Kategori Sophomore Year\" " << endl;
    }

    if(b>=5 && b<7 && b>4) {
        cout << " \"Anda Dalam Kategori Junior Year\" " << endl;
    }

    if(b>=7 && b<9 && b>6) {
        cout << " \"Anda Dalam Kategori Senior Year\" " << endl;
    }

    return 0;
}
