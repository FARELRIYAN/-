#include <iostream>
using namespace std;

int main() {
    string nama;
    char jenisKelamin;
    int usia, nilaiLari, nilaiPushUp, nilaiSitUp;
    double nilaiKebugaran;
    string kriteriaKesehatan;

    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);

    cout << "Masukkan Jenis Kelamin (L/P): ";
    cin >> jenisKelamin;

    if (jenisKelamin != 'L' && jenisKelamin != 'P') {
        cout << "Maaf, jenis kelamin yang Anda masukkan tidak valid." << endl;
        return 0;
    }

    cout << "Masukkan Usia Anda: ";
    cin >> usia;

    if (jenisKelamin == 'L') {
        if (usia >= 18 && usia <= 25) {
            cout << "Masukkan Nilai Lari (dalam menit): ";
            cin >> nilaiLari;

            cout << "Masukkan Nilai Push Up: ";
            cin >> nilaiPushUp;

            cout << "Masukkan Nilai Sit Up: ";
            cin >> nilaiSitUp;

            nilaiKebugaran = (nilaiLari * 1.5) + (nilaiPushUp * 2.0) + (nilaiSitUp * 1.5);
        } else if (usia >= 26 && usia <= 35) {
            cout << "Masukkan Nilai Lari (dalam menit): ";
            cin >> nilaiLari;

            cout << "Masukkan Nilai Push Up: ";
            cin >> nilaiPushUp;

            cout << "Masukkan Nilai Sit Up: ";
            cin >> nilaiSitUp;

            nilaiKebugaran = (nilaiLari * 2.0) + (nilaiPushUp * 1.8) + (nilaiSitUp * 1.3);
        } else if (usia >= 36 && usia <= 45) {
            cout << "Masukkan Nilai Lari (dalam menit): ";
            cin >> nilaiLari;

            cout << "Masukkan Nilai Push Up: ";
            cin >> nilaiPushUp;

            cout << "Masukkan Nilai Sit Up: ";
            cin >> nilaiSitUp;

            nilaiKebugaran = (nilaiLari * 3.0) + (nilaiPushUp * 1.5) + (nilaiSitUp * 1.0);
        } else {
            cout << "Usia Anda tidak sesuai dengan kondisi." << endl;
            nilaiKebugaran = 0;
        }
    } else if (jenisKelamin == 'P') {
        if (usia >= 18 && usia <= 25) {
            cout << "Masukkan Nilai Lari (dalam menit): ";
            cin >> nilaiLari;

            cout << "Masukkan Nilai Push Up: ";
            cin >> nilaiPushUp;

            cout << "Masukkan Nilai Sit Up: ";
            cin >> nilaiSitUp;

            nilaiKebugaran = (nilaiLari * 1.0) + (nilaiPushUp * 2.5) + (nilaiSitUp * 2.0);
        } else if (usia >= 26 && usia <= 35) {
            cout << "Masukkan Nilai Lari (dalam menit): ";
            cin >> nilaiLari;

            cout << "Masukkan Nilai Push Up: ";
            cin >> nilaiPushUp;

            cout << "Masukkan Nilai Sit Up: ";
            cin >> nilaiSitUp;

            nilaiKebugaran = (nilaiLari * 1.8) + (nilaiPushUp * 2.0) + (nilaiSitUp * 1.5);
        } else if (usia >= 36 && usia <= 45) {
            cout << "Masukkan Nilai Lari (dalam menit): ";
            cin >> nilaiLari;

            cout << "Masukkan Nilai Push Up: ";
            cin >> nilaiPushUp;

            cout << "Masukkan Nilai Sit Up: ";
            cin >> nilaiSitUp;

            nilaiKebugaran = (nilaiLari * 2.8) + (nilaiPushUp * 1.5) + (nilaiSitUp * 1.0);
        } else {
            cout << "Usia Anda tidak sesuai dengan kondisi." << endl;
            nilaiKebugaran = 0;
        }
    } else {
        cout << "Jenis kelamin tidak sesuai dengan kondisi." << endl;
        nilaiKebugaran = 0;
    }

    if (nilaiKebugaran > 150) {
        kriteriaKesehatan = "Sehat";
    } else if (nilaiKebugaran > 100) {
        kriteriaKesehatan = "Kurang Sehat";
    } else {
        kriteriaKesehatan = "Tidak Sehat";
    }

    cout << "=> Nilai Kebugaran " << nama << " adalah " << nilaiKebugaran << endl;
    cout << "=> Kategori Kebugaran " << nama << " adalah " << kriteriaKesehatan << endl;


    return 0;
}
