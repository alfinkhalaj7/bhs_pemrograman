#include <iostream>

using namespace std;

int main() {
    int angka_pertama, angka_kedua;
    
    // Meminta input angka pertama dari pengguna
    cout << "Masukkan angka pertama: ";
    cin >> angka_pertama;
    
    // Meminta input angka kedua dari pengguna
    cout << "Masukkan angka kedua: ";
    cin >> angka_kedua;
    
    // Menghitung dan menampilkan hasil penjumlahan
    cout << "Penjumlahan: " << angka_pertama + angka_kedua << endl;
    
    // Menghitung dan menampilkan hasil pengurangan
    cout << "Pengurangan: " << angka_pertama - angka_kedua << endl;
    
    // Menghitung dan menampilkan hasil perkalian
    cout << "Perkalian: " << angka_pertama * angka_kedua << endl;
    
    // Menghitung dan menampilkan hasil pembagian (dengan casting ke float untuk hasil float)
    cout << "Pembagian: " << static_cast<float>(angka_pertama) / angka_kedua << endl;
    
    return 0;
}

