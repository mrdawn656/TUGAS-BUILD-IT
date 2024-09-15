#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



// Fungsi untuk memeriksa apakah angka adalah bilangan prima
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Bukan bilangan prima
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // Bukan bilangan prima
        }
    }
    return 1; // Bilangan prima
}

int main() {
    int n;

    // Membaca input
    scanf("%d", &n);

    // Memeriksa dan mencetak hasil
    if (isPrime(n)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
