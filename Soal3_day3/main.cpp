#include <iostream>
#include <unistd.h>

using namespace std;

void operasi_mata()
{
    int pilih_2311102051;
    string katarak = "Rp. 7.500.000";
    string pm = "Rp. 5.000.000";
    string silinder = "Rp. 4.000.000";

    cout <<"Jenis Penyakit Mata : "<<endl;
    cout << "1. Katarak"<<endl;
    cout << "2. Plus/Minus"<<endl;
    cout << "3. Silinder"<<endl;

    cout << "\nMasukkan Jenis Penyakit Mata : ";
    cin >> pilih_2311102051;

    switch(pilih_2311102051)
    {
        case 1:
            cout << "\nBiaya Operasi Mata Katarak = "<<katarak<<endl;
            break;
        case 2:
            cout << "\nBiaya Operasi Mata Plus/Minus = "<<pm<<endl;
            break;
        case 3:
            cout << "\nBiaya Operasi Mata Silinder = "<<silinder<<endl;
        default :
            cout << "GA ADA LISTNYA BANGGGGGGGGGG";
    }
}

void operasi_jantung()
{
    int pilih_2311102051;
    string jk = "Rp. 500.000.000";
    string kj = "Rp. 350.000.000";
    string oj = "Rp. 450.000.000";

    cout <<"Jenis Penyakit Jantung : "<<endl;
    cout << "1. Jantung Koroner"<<endl;
    cout << "2. Katup Jantung"<<endl;
    cout << "3. Otot Jantung"<<endl;

    cout << "\nMasukkan Jenis Penyakit Jantung : ";
    cin >> pilih_2311102051;

    switch(pilih_2311102051)
    {
        case 1:
            cout << "\nBiaya Operasi Jantung Koroner = "<<jk<<endl;
            break;
        case 2:
            cout << "\nBiaya Operasi Katup Jantung = "<<kj<<endl;
            break;
        case 3:
            cout << "\nBiaya Operasi Otot Jantung = "<<oj<<endl;
        default :
            cout << "GA ADA LISTNYA BANGGGGGGGGGG";
    }
}

int main()
{
    int iff;

    while (true){
        cout << "<<< MENGHITUNG BIAYA OPERASI >>>"<<endl;
        cout << "1. Hitung Biaya Operasi Mata"<<endl;
        cout << "2. Hitung Biaya Operasi Jantung"<<endl;
        cout << "\nMasukkan Pilihan Anda : ";
        cin >> iff;

        if (iff == 1){
            system ("cls");
            cout << "\nAnda Memilih Operasi Mata\n\n"<<endl;
        if (iff == 1){
            operasi_mata();
        } else {
            cin.ignore();
        }
        return 1;
        } else if (iff == 2){
            system ("cls");
            cout << "\nAnda Memilih Operasi Jantung\n\n"<<endl;
        if (iff == 2){
            operasi_jantung();
        } else {
            cin.ignore();
        }
        return 2;
        } else {
            cout << "Pilih 1 atau 2"<< endl;
            sleep (2);
            system ("cls");
        }
    }

    cout << "\nMAKASIH MAS/MBA";

    return 0;
}
