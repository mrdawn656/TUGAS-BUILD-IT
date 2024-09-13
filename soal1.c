#include <stdio.h>

int main() {
    int n;

    // Input jumlah elemen
    scanf("%d", &n);

    int arr[n];

    // Input nilai elemen
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Mengurutkan elemen menggunakan selection sort
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                // Tukar elemen
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output hasil pengurutan
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
