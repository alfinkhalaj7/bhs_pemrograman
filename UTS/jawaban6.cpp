#include <iostream>

using namespace std;

// Deklarasi fungsi-fungsi
void tambah() {
    int a, b;
    cout << "Masukkan dua angka untuk penjumlahan: ";
    cin >> a >> b;
    cout << "Hasil penjumlahan: " << a + b << endl;
}

void kurang() {
    int a, b;
    cout << "Masukkan dua angka untuk pengurangan: ";
    cin >> a >> b;
    cout << "Hasil pengurangan: " << a - b << endl;
}

void kali() {
    int a, b;
    cout << "Masukkan dua angka untuk perkalian: ";
    cin >> a >> b;
    cout << "Hasil perkalian: " << a * b << endl;
}

void bagi() {
    float a, b;
    cout << "Masukkan dua angka untuk pembagian: ";
    cin >> a >> b;
    if (b != 0) {
        cout << "Hasil pembagian: " << a / b << endl;
    } else {
        cout << "Error: Tidak dapat melakukan pembagian oleh 0.\n";
    }
}

int main() {
    int pilihan;

    // Menampilkan menu operasi matematika
    cout << "Pilih operasi matematika:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";

    // Meminta input pilihan operasi
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    // Memilih operasi menggunakan switch case
    switch (pilihan) {
        case 1:
            tambah();
            break;
        case 2:
            kurang();
            break;
        case 3:
            kali();
            break;
        case 4:
            bagi();
            break;
        default:
            cout << "Pilihan tidak valid!\n";
    }

    return 0;
}