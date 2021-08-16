//
//  structure1.c
//  C_study
//
//  Created by 김준철 on 2021/08/14.
//

#include <stdio.h>
#include <string.h>

struct Person {
    char name[100];
    int age;
    int height;
    float weight;
};

struct Point2D {
    int x;
    int y;
};

int main () {
    struct Person person1, person2;
    
    strcpy(person1.name, "Name1");
    person1.age = 21;
    person1.height = 172;
    person1.weight = 88.3;
    
    strcpy(person2.name, "Name2");
    person2.age = 18;
    person2.height = 167;
    person2.weight = 64.5;
    
    struct Point2D p1, p2;
    p1.x = 100;
    p1.y = 210;
    p2 = p1;
    
    struct Person person3 = {"test", 54, 155, 55.4};
    scanf("%d %f", &person3.age, &person3.weight);
    
    printf("이름: %s, 나이: %d, 키: %d, 몸무게: %f\n", person3.name, person3.age, person3.height, person3.weight);
    
    return 0;
}
