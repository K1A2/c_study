//
//  pointer1.c
//  C_study
//
//  Created by 김준철 on 2021/08/16.
//

#include <stdio.h>

int main() {
    int x = 10;
    int *y = &x;
    
    printf("x: %d, %p\n", x, y);
    *y = 324;
    printf("x: %d, %p\n", x, y);
    
    return 0;
}
