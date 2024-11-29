#include <stdio.h>

int main() {
    int number[] = {1, 2, 1, 4, 5, 6, 1, 8, 3, 5, 5};
    int result[100] = {0};  
    int max = 0;            
    int index = 0;
    int lengthNumber = sizeof(number) / sizeof(number[0]);
    for (int i = 0; i < lengthNumber; i++) {
        int count = 0;
        for (int j = 0; j < lengthNumber; j++) {
            if (number[i] == number[j]) {
                count++;
            }
        }
        if (count > max) {
            max = count; 
        }
    }
    for (int i = 0; i < lengthNumber; i++) {
        int count = 0;
        for (int j = 0; j < lengthNumber; j++) {
            if (number[i] == number[j]) {
                count++;
            }
        }
        
       
        if (count == max) {
            int full = 0;
            for (int k = 0; k < index; k++) {
                if (result[k] == number[i]) {
                    full = 1;
                    break;
                }
            }
            if (!full) {
                result[index++] = number[i];  
            }
            full = -1;
            
        }
    }

    printf("phan tu lon nhat trong mang :");
    for (int i = 0; i < index; i++) {
        printf("  %d", result[i]);
    }
    
    return 0;
}

