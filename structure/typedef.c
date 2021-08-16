//
//  typedef.c
//  C_study
//
//  Created by 김준철 on 2021/08/14.
//

#include <stdio.h>
#include <string.h>

typedef int inttt;

typedef struct {
    char name[100];
    inttt age;
    float weight;
} Person;

struct Product {
    char name[100];
    int price;
};
typedef struct Product Products;

typedef struct {
    float x;
    float y;
} Point;

Point translate(Point p1, Point p2) {
    Point new_p;
    new_p.x = p1.x + p2.x;
    new_p.y = p1.y + p2.y;
    return new_p;
}

int main () {
    Person person = {"Person1", 16, 65.7};
    Products product = {"우유", 2300.0};
    Point p1 = {23.34, 65.43}, p2 = {16.54, 87.65};
    
    Point n = translate(p1, p2);
    printf("계산된 좌표 x: %f, y: %f\n", n.x, n.y);
    
    return 0;
}
