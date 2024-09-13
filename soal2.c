#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h> 

int main() {
    char str1[100], str2[100];

    // Input dua string
    scanf("%s", str1);
    scanf("%s", str2);

    // Cek apakah string identik
    if (strcmp(str1, str2) == 0) {
        printf("IDENTIK\n");
    }
    // Cek apakah panjang string sama dan huruf mirip tanpa sensitif huruf besar/kecil
    else {
        int mirip = 1;
        if (strlen(str1) == strlen(str2)) {
            for (int i = 0; str1[i] != '\0'; i++) {
                if (tolower(str1[i]) != tolower(str2[i])) {
                    mirip = 0;
                    break;
                }
            }
        } else {
            mirip = 0;
        }
        if (mirip) {
            printf("MIRIP\n");
        } else {
            printf("BERBEDA\n");
        }
    }

    return 0;
}
