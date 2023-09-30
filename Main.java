import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Variabel dan tipe data
        int angka = 5; // Contoh variabel integer
        double angka_desimal = 3.14; // Contoh variabel double
        char karakter = 'A'; // Contoh variabel char

        // Array satu dimensi
        int[] arr_satu_dimensi = {1, 2, 3, 4, 5}; // Contoh array satu dimensi

        // Array multidimensi
        int[][] arr_multi_dimensi = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Contoh array multidimensi

        // Input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Masukkan angka: ");
        int input_angka = scanner.nextInt();

        // Output
        System.out.println("Angka yang Anda masukkan adalah: " + input_angka);

        // Perulangan for
        for (int i = 0; i < 5; i++) {
            System.out.println("Ini adalah iterasi ke-" + (i + 1) + " dari perulangan for");
        }

        // Pernyataan if
        if (angka > 3) {
            System.out.println("Ini adalah pernyataan if");
        } else {
            System.out.println("Ini adalah bagian else dari pernyataan if");
        }

        // Perulangan while
        int j = 0;
        while (j < 3) {
            System.out.println("Ini adalah iterasi ke-" + (j + 1) + " dari perulangan while");
            j++;
        }

        // Perulangan do-while
        int k = 0;
        do {
            System.out.println("Ini adalah iterasi ke-" + (k + 1) + " dari perulangan do-while");
            k++;
        } while (k < 3);

        // Komentar
        // Ini adalah contoh program Java dengan berbagai elemen dasar.
    }
}