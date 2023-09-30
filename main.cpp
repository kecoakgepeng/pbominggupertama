#include <iostream>

using namespace std;

int main() {
    // Variabel dan tipe data
    int angka = 5; // Contoh variabel integer
    double angka_desimal = 3.14; // Contoh variabel double
    char karakter = 'A'; // Contoh variabel char
    
    // Array satu dimensi
    int arr_satu_dimensi[5] = {1, 2, 3, 4, 5}; // Contoh array satu dimensi
    
    // Array multidimensi
    int arr_multi_dimensi[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Contoh array multidimensi
    
    // Input
    int input_angka;
    cout << "Masukkan angka: ";
    cin >> input_angka;
    
    // Output
    cout << "Angka yang Anda masukkan adalah: " << input_angka << endl;
    
    // Perulangan for
    for (int i = 0; i < 5; i++) {
        cout << "Ini adalah iterasi ke-" << i + 1 << " dari perulangan for" << endl;
    }
    
    // Pernyataan if
    if (angka > 3) {
        cout << "Ini adalah pernyataan if" << endl;
    } else {
        cout << "Ini adalah bagian else dari pernyataan if" << endl;
    }
    
    // Perulangan while
    int j = 0;
    while (j < 3) {
        cout << "Ini adalah iterasi ke-" << j + 1 << " dari perulangan while" << endl;
        j++;
    }
    
    // Perulangan do-while
    int k = 0;
    do {
        cout << "Ini adalah iterasi ke-" << k + 1 << " dari perulangan do-while" << endl;
        k++;
    } while (k < 3);
    
    // Komentar
    // Ini adalah contoh program C++ dengan berbagai elemen dasar.
    
    return 0;
}