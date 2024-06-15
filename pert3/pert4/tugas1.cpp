#include <iosream>

usinag namamespace std;

void tambah(){
    cout << "TAMBAH : " << angka1 + angka2 endl;
}

void kurang(){
    cout << "KURANG : " << angka1 - angka2 endl;
}

void kali(){
    cout << "KALI : " << angka1 * angka2 endl;
}

void bagi(){
    cout << "BAGI : " << angka1  /  angka2 endl;
}

int main(){
    case 1:
    cout << "Masukan Angka : ";
    cin>> angka1 >> angka2;
    tambah (angka1, angka2);
    break:

    case 2:
    cout << "Masukan Angka : ";
    cin>> angka1 >> angka2;
    kurang (angka1, angka2);
    break:  

     case 3:
    cout << "Masukan Angka : ";
    cin>> angka1 >> angka2;
    kali (angka1, angka2);
    break:  

    case 4:
    cout << "Masukan Angka : ";
    cin>> angka1 >> angka2;
    bagi (angka1, angka2);
    break:    

    case 5:
    break:

    return 0;
}
