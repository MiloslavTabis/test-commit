/* Tabis Miloslav 110905 */
/* cvicenie 2            */
/* 05.10.2021            */

#include<stdio.h>

int problem_1(){
    int num_1, num_2, answer;
    printf("zadaj dve cisla oddelene medzerou: ");
    scanf("%d %d",&num_1, &num_2);
    printf("a) vacsie z cisel %d a %d je %d\n", num_1, num_2, (num_1>num_2) ? num_1 : num_2);
    if(num_1 < num_2){
        answer = num_1;
    }
    else {
        answer = num_2;
    }
    printf("b) mensie z cisel %d a %d je %d\n", num_1, num_2, answer);
    return 0;
}

int problem_2(){
    char c;
    printf("nacitaj znak: ");
    fflush(stdin);
    c = getchar();
    if(c >= 'a' && c <= 'z'){
        printf("na vstupe je: male pismeno\n");
    }
    else if(c >= 'A' && c <= 'Z'){
        printf("na vstupe je: velke pismeno\n");
    }
    else if(c >= '0' && c <= '9'){
        printf("na vstupe je: cislo\n");
    }
    else {
        printf("na vstupe je: ine pismeno\n");
    }
    return 0;
}

int problem_3(){
    char c;
    printf("nacitaj znak: ");
    fflush(stdin);
    c = getchar();
    printf("znak %c na vstupe ma ASCII hodnotu %d, alebo aj %x Hexa\n", c, c, c);
    if(c >= 'a' && c <= 'z'){
        c = c - 32;
        printf("male pismeno bolo zmenene na velke %c\n", c);
        printf("ktore ma ASCII hodnotu %d, alebo aj %x Hexa", c, c);
    }
    return 0;
}

int main(){

    problem_1();
    problem_2();
    problem_3();
    return 0;
}