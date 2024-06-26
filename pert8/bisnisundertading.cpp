#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string namaPembeli;
    int pilihan, totalPaket, banyak, hasil = 0;
    char yesNo;
    int pajak = 10; // Pajak 10%
    int x = 0;
    int totalSeluruhPesanan[100]; // Ukuran tetap array untuk menyimpan total setiap pesanan

    // Meminta pengguna memasukkan nama pembeli
    cout << "Masukkan Nama Pembeli: ";
    getline(cin, namaPembeli);

    // Menampilkan menu
    cout << "=================================================================================================================" << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><>>>>>>>> GORENGAN DOA IBU <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "=================================================================================================================" << endl;
    cout << "                                                   PILIH MENU                                                    " << endl;
    cout << "                                                                                                                 " << endl;
    cout << "------------------------------------------------ ANEKA GORENGAN -------------------------------------------------" << endl;
    cout << "1. Bakwan         : Rp.2.000" << endl;
    cout << "2. Pisang Goreng  : Rp.3.000" << endl;
    cout << "3. Tahu Isi       : Rp.2.500" << endl;
    cout << "4. Tempe Goreng   : Rp.2.000" << endl;
    cout << "5. Risol          : Rp.3.500" << endl;

    do {
        // Meminta pengguna memasukkan pilihan menu
        cout << "Masukkan Menu Yang Dipilih : ";
        cin >> pilihan;

        // Menentukan harga berdasarkan pilihan
        switch (pilihan) {
            case 1:
                totalPaket = 2000;
                break;
            case 2:
                totalPaket = 3000;
                break;
            case 3:
                totalPaket = 2500;
                break;
            case 4:
                totalPaket = 2000;
                break;
            case 5:
                totalPaket = 3500;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                continue;
        }

        // Meminta jumlah pesanan
        cout << "Berapa Banyak Pesanan? ";
        cin >> banyak;

        // Menyimpan total pesanan ke dalam array
        totalSeluruhPesanan[x] = totalPaket * banyak;
        x++;

        // Menanyakan apakah ada pesanan lain
        cout << "Apakah Ada Pesanan Lainnya (Y/N)? ";
        cin >> yesNo;
    } while (yesNo == 'Y' || yesNo == 'y'); // Mengulangi jika masih ada pesanan

    // Menampilkan total pembayaran
    cout << "============================================ PEMBAYARAN =========================================================" << endl;
    cout << "Nama Pembeli: " << namaPembeli << endl;

    // Menghitung total pesanan
    for (int i = 0; i < x; i++) {
        hasil = hasil + totalSeluruhPesanan[i];
    }

    // Menampilkan total pesanan, pajak, dan total bayar
    cout << "Total Pesanan  : Rp." << hasil << endl;
    cout << "Pajak 10%      : Rp." << hasil * pajak / 100 << endl;
    cout << "Total Bayar    : Rp." << hasil + (hasil * pajak / 100) << endl;
}
