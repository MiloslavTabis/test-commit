/* Tabis Miloslav 110905 */
/* cvicenie 5            */
/* 23.10.2021            */

#include<stdio.h>

int problem_1(){
    FILE *fw;
    char c;
    if((fw = fopen("vystup.txt", "w")) == NULL){
        printf("Subor sa nepodarilo otvorit\n");
        return 1;
    }
    while( (c = getchar()) != '.'){
        if(c >= 'A' && c <= 'Z'){
            c = c + 32;
        }
        else if(c >= 'a' && c <= 'z'){
            c = '.';
        }
        else if(c >= '0' && c <= '9'){
            c = '-';
        }
        else if(c != '\n'){
            c = '*';
        }
        putc(c, fw);
    }
    if(fclose(fw) == EOF){
        printf("Subor sa nepodarilo zatvorit\n");
        return 1;
    }
    return 0;
}

int problem_2(){
    FILE *fr;
    int array[100], i;
    if((fr = fopen("cisla.txt", "r")) == NULL){
        printf("Subor sa nepodarilo otvorit\n");
        return 1;
    }
    for(i = 0; fscanf(fr, "%d", &array[i]) == 1; i++){}
    for(int j = i -1; j >= 0; j--){
        if(array[j] %2 == 0){
            printf("%d ",  array[j]);
        }
    }
    if(fclose(fr) == EOF){
        printf("SUbor sa nepodarilo zatvorit\n");
        return 1;
    }
    return 0;
}

int main(){
    problem_1();
    problem_2();
    return 0;
}