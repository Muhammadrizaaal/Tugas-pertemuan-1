#include <iostream>

using namespace std;

int main()
{

    int x;
    int y;
    int z;
    int a;
    int b;
    int hasil;
    int c;

    cout << "<============================================================================>"<< endl;
    //Ke-1
    cout << "Mau Beli Berapa? Rp";cin>> x;

    for(int x = 500; x<= 5000; x+=500 ){
        cout << "Kalau Beli Rp"<< x << endl;
        if(x>=500 && x<=5000 &&x){
            a=x*5/500;
            cout << "kamu dapet "<<a<<" buah permen"<<endl;
        }
    }
    a=x*5/500;
    cout << "Jadi Intinya Kamu Dapat " << a <<" Buah permen"<< endl;
    /* Karena harga satuan permennya adalah Rp500 dapat 5,maka kalau ingin membeli permen dengan uang Rp5000 yaitu=
    (Rp5000 x 5) : Rp500,sehingga dapat 50 buah permen.*/
    cout << "<============================================================================>"<< endl;


    // Ke-2
    cout << "Mau Beli Berapa? Rp";cin>> z;
    for(int z = 1000; z<= 5000; z+=1000 ){
        cout << "Kalau Beli Rp"<< z << endl;
        if(z>=1000 && z<=5000 &&z){
            b=z/1000;
            cout << "kamu dapet "<<b<<" buah permen"<<endl;
        }
    }
    b=z/1000;
    cout << "Jadi Intinya Kamu Dapat " << b <<" Buah permen"<< endl;
    /*karena harga satuan permennya Rp1000,dan Dito ingin membeli hingga uangnya habis,maka permen yang didapat oleh dito yaitu=Rp5000 : Rp1000
    = 5 buah permen.*/
    cout << "<============================================================================>"<< endl;

    //Ke-3
    cout << "Mau Beli Berapa? Rp";cin>>y;
    for(int y = 300; y<= 5000; y+=300 ){
        cout << "Kalau Beli Rp"<< y << endl;
        hasil=y*1/300;
        cout << "kamu dapet "<<hasil<<" Buah permen"<<endl;
    }
    hasil=y*1/300;
    cout << "Jadi Intinya Kamu Dapet "<<hasil<<" Buah permen"<<endl;
    /*karena harga satuan permennya adalah 300 dito harus menghitung terlebih dahulu uang yang dimiliki dalam kelipatan 300 hingga maksimal uang
    yang dimiliki oleh dito,Jadi permen yang didapat oleh dito yaitu= -) paling kecil Rp300 dan paling besar Rp4800,sehingga untuk harga 1
    permennya yaitu Rp300,Jadi permen yang dimiliki dito yaitu Rp4800 : Rp 300=16 buah permen.*/
    cout << "<============================================================================>"<< endl;
    c=a+b+hasil;
    cout << "Jadi jumlah Permen Yang Dimiliki Oleh Dito Adalah: "<< a << "+"<< b << "+"<< hasil<< ": "<< c << " Buah Permen" << endl;

    return 0;
}
