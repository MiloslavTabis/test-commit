/* Tabis Miloslav 110905 */
/* cvicenie 1            */
/* 27.9.2021             */

#include<stdio.h>
#include<math.h>

#define _USE_MATH_DEFINES
#ifndef M_PI
#    define M_PI 3.1415926535897932
#endif

int problem_1(){
    printf("\"\tSu vsetky tieto [*,&,/,\\,$,%%,'] znaky specialne ?\"\n");
    return 0;
}

int problem_2(){
    int num_1, num_2, num_3;
    int surface;
    printf("Zadaj 3 cele cisla: ");
    scanf("%d %d %d",&num_1, &num_2, &num_3);
    printf("Objem %d x %d x %d je %d\n", num_1, num_2, num_3, num_1*num_2*num_3);
    surface = 2*(num_1*num_2 + num_1*num_3 + num_2*num_3);
    printf("Povrch 2 x %d x %d + 2 x %d x %d + 2 x %d x %d je %d\n", num_1, num_2, num_2, num_3, num_1, num_3, surface);
    return 0;
}

int problem_3(){
    float radius;
    printf("Zadaj polomer kruhu (realne cislo): ");
    scanf("%f", &radius);
    printf("Kruh s polomerom %.2f: obvod = %.2f, obsah = %.2f\n", radius, 2*M_PI*radius, M_PI*pow(radius,2));
    return 0;
}

int main(){
    problem_1();
    problem_2();
    problem_3();
    return 0;
}