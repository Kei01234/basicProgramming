#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double x;
    double y;
    double t;
    double d;
} coordinate;

//-----
void InitPoint(coordinate *array, int num) {
    for (int i = 0; i < num; ++i) {
        array[i].x=0;
        array[i].y=0;
        array[i].d=0;
        array[i].t=0;
    }
}
//-----

int main(void) {
    int num=3;

    coordinate *array;
    array=(coordinate *)malloc(num*sizeof(coordinate));

    InitPoint(array, num);

    //試しに表示
    for (int i = 0; i < num; ++i) {
        printf("%f\n", array[i].x);
        printf("%f\n", array[i].y);
        printf("%f\n", array[i].d);
        printf("%f\n", array[i].t);

        printf("\n");
    }

    return 0;
}