//
//  dereference.c
//  C_study
//
//  Created by 김준철 on 2021/08/16.
//

#include <stdio.h>

void swap(int a, int b);
void swap_deref(int *a, int *b);

int main() {
    int a = 200, b = 300;
    
    swap(a, b);
    printf("a: %d, b: %d\n", a, b);
    swap_deref(&a, &b);
    printf("a: %d, b: %d\n", a, b);
    
    return 0;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_deref(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
