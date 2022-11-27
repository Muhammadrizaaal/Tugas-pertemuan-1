#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    cout << "<========================================================================================>"<<endl;
    cout << " Nama : Muhammad Rizal"<< endl;
    cout << " NIM : A11.2022.14127" << endl;
    cout << " Kelas : A11.4104" << endl;
    cout << " Tugas : Dasar Pemograman" << endl;
    cout << "<========================================================================================>"<<endl;
    cout << ""<< endl;
    cout << "<========================================================================================>"<<endl;
    cout << "SOAL 1"<< endl;
    cout << "<========================================================================================>"<<endl;
    //soal 1
    int i;
    int j;
    for(i=100 ,j=1; i>=1 && j<=100; i--, j++){
        cout << i << " dan "<< j<< endl;
    }

     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 2"<< endl;
     cout << "<========================================================================================>"<<endl;

     //soal 2
     int a;
     for(a=1; a<=100; a++){
        if(a%2==1){
            continue;
        }
        cout << "Nilai Genap Adalah "<< a << endl;
     }

     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 3"<< endl;
     cout << "<========================================================================================>"<<endl;

    //soal 3
     int b;
     for(b=100;b>=1;b--){
        cout << b << endl;
        if(b==55){
            break;
        }
     }

     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 4"<< endl;
     cout << "<========================================================================================>"<<endl;

     //soal 4
     int c;
     float rata;
     float jumlah;

     for(int c=1;c<=20;c++){
        cout << c << endl;
        jumlah=jumlah+c;
        rata=jumlah/c;
     }
     cout << "Jumlah= " << jumlah << endl;
     cout << "Rata-Rata= "<< rata << endl;

     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 5"<< endl;
     cout << "<========================================================================================>"<<endl;

     //soal 5
     int d;
     cout << "Program Ini Akan Berhenti Jika Anda Menginputkan Nilai -99"<< endl;
     for(int i=1; ; i++){
        cout << " masukkan nilai anda : ";cin>>d;
        if(d==-99){
            break;
        }
     }cout << ""<< endl;
         cout << "keluar karena break"<< endl;



     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 6" << endl;
     cout << "<========================================================================================>"<<endl;

     //soal 6
     int e;
     int maxx;
     int minn;

     for(int i=1; ;i++){
        cout << "masukkan nilai yang anda inginkan : ";cin>>e;
        if(e==-99){
            break;
        }
        if( i==1){
            minn=e;
            maxx=e;
        }else{if(e>maxx){
            maxx=e;
        }if(e<minn){
            minn=e;
        }
     }
     }
     cout << "" << endl;
     cout << "max = "<< maxx << endl;
     cout << "min = "<< minn << endl;

     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 7" << endl;
     cout << "<========================================================================================>"<<endl;

     //soal 7
     int g;
     int jmlh=0;

     for(int i=1; ;i++){
        cout << "Input Bilangan : ";cin>>g;
        if(g==9999){
            break;
        }cout << g << endl;
        jmlh=jmlh+g;
     }cout << "jumlah angka : "<< jmlh <<endl;


     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 8" << endl;
     cout << "<========================================================================================>"<<endl;

     //soal 8
     int h;
     int k;
     int jum=0;

     for(k=0; ; k++){
        cout << "Input bilangan : ";cin>>h;
        if(h==9999){
            break;
        }
        cout << h << endl;
        jum+=k;
     }
     cout << "jumlah angka : "<< k << endl;

     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 9" << endl;
     cout << "<========================================================================================>"<<endl;

     //soal 9
     int l;
     int sum=0;
     int m=0;

     for(int i=0; ; i++){
        cout << "masukkan input : ";cin>>l;
        cout << l << endl;
        if(l==9999){
            break;

        }else if(l != 9999){
            sum+=l;
        }
        m+=1;
     }
     cout << "jumlah angka : "<< sum << endl;
     cout << "jumlah cacah angka : "<< m << endl;



     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 10" << endl;
     cout << "<========================================================================================>"<<endl;

     //soal 10
     for(int i=1;i<=10;i++){
            cout << "Looping yang ke- " << i << endl;
        for(int j=1;j<=10;j++){
            cout << "angka ke- " << j << endl;


        }
     }

     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 11" << endl;
     cout << "<========================================================================================>"<<endl;

     //soal 11
     int t;
     cout << "masukkan input : ";cin>>t;
     for(int i=1;i<=t;i++){
        for(int j=1;j<=10;j++){
            cout << j << " x " << i << " = "<<j*i<< endl;
        }
     }

     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 12" << endl;
     cout << "<========================================================================================>"<<endl;

     //soal 12
     float fahrenheit;
     int q;
     cout << "-------------------------"<< endl;
     cout << "Celcius      Fahrenheit"<< endl;
     cout << "-------------------------"<< endl;
     for( q= 0; q <= 100; q++) {
     fahrenheit = ((9.0/5)*q)+32;
     printf("%d \t|\t %.1f |\n",q, fahrenheit);
    }


     cout << "<========================================================================================>"<<endl;
     cout << " SOAL 13" << endl;
     cout << "<========================================================================================>"<<endl;

    //soal 13
    float f;
    int u;
    cout << "\n------------------" << endl;
    cout << "Soal no. 13" << endl;
    cout << "------------------" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Celcius \t Fahremheit \t Keterangan" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    for(u = 100; u >= -45; u--) {
    f = ((9.0/5)*u)+32;
    if(u == 100) {
    printf("%d \t\t %.1f \t\t Air Mendidih \n",u, f);
    } else if(u == 40) {
    printf("%d \t\t %.1f \t\t Air Mandi Panas \n",u, f);
    } else if(u == 37) {
    printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",u, f);
    } else if(u == 30) {
    printf("%d \t\t %.1f \t\t Cuaca Pantai\n",u, f);
    } else if(u == 21) {
    printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",u, f);
    } else if(u == 10) {
    printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",u, f);
    } else if(u == 0) {
    printf("%d \t\t %.1f \t\t Titik Beku Air \n",u, f);
    } else if(u == -18) {
    printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",u, f);
    } else if(u == -40) {
    printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",u, f);
    cout << "------------------------------------------------------------------------------" << endl;
    }
    }


    return 0;
}
