#include <iostream>

using namespace std;

int main() {
    int tahun_lahir, tahun_sekarang, usia;
    
    // Meminta input tahun lahir dari pengguna
    cout << "Masukkan tahun lahir kamu: ";
    cin >> tahun_lahir;
    
    // Meminta input tahun sekarang dari pengguna
    cout << "Masukkan tahun sekarang: ";
    cin >> tahun_sekarang;
    
    // Menghitung usia pengguna
    usia = tahun_sekarang - tahun_lahir;
    
    // Menampilkan hasil
    cout << "Usia kamu sekarang " << usia << " tahun." << endl;
    
    return 0;
}