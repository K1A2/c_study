//
//  allocation.c
//  C_study
//
//  Created by 김준철 on 2021/08/17.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 20;
    int *num = malloc(sizeof(int) * size);
    
    for (int i = 0;i < size;i++) {
        *(num + i) = i;
    }
    for (int i = 0;i < size;i++) {
        printf("%d\n", *(num + i));
    }
    free(num);
    
    int size_2 = 3;
    int **num_2 = malloc(sizeof(int*) * size_2);
    
    for (int x = 0;x < size_2;x++) {
//        *(num_2 + x) = malloc(sizeof(int) * size);
        num_2[x] = malloc(sizeof(int) * size);;
        for (int y = 0;y < size;y++) {
//            *(*(num_2 + x) + y) = x * 2 + y;
            num_2[x][y] = x * 2 + y;
            printf("%d ", *(*(num_2 + x) + y));
        }
        printf("\n");
    }
    
    for (int x = 0;x < size_2;x++) {
//        free(*(num_2 + x));
        free(num_2[x]);
    }
    free(num_2);
}
