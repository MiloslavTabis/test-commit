/* Tabis Miloslav 110905 */
/* cvicenie 4            */
/* 18.10.2021            */

#include<stdio.h>

int problem_1(){
    int n, i, j;
    int num = 0;
    printf("Zadajte pocet riadkov Floydovho trojuholnika od 1 do 10: ");
    scanf("%d", &n);
    if(n > 10 || n < 0){
        printf("Nespravny vstup\n");
        return 1;
    }
    FILE *floyd;
    if((floyd = fopen("floyd.txt", "w")) == NULL){
        printf("Subor sa nepodarilo otvorit\n");
        return 1;
    }
    printf("Vznikne subor floyd.txt a bude obsahovat %d riadkov:\n", n);
    for(i = 0; i < n; i++){
        for(j = 0; j <= i ; j++){
            fprintf(floyd, "%d ", ++num);
            printf("%2d ", num);
        }
        fprintf(floyd, "\n");
        printf("\n");
    }
    if(fclose(floyd) == EOF){
        printf("Subor sa nepodarilo zatvorit\n");
        return 1;
    }
    return 0;
}

int problem_2(){
    FILE *rozmery;
    int i, j, rows, stars;
    if((rozmery = fopen("rozmery.txt", "r")) == NULL ){
        printf("Subor sa nepodarilo otvorit\n");
        return 1;
    }
    if( fscanf(rozmery, "%d %d", &rows, &stars) < 2){
        printf("Nedostatok rozmerov\n");
    }
    else{
        for(i = 0; i < rows; i++){
            printf("%d: ", i + 1);
            for(j = stars--; j > 0; j = j -1 ){
                printf("*");                
            }
            printf("\n");
        }
    }
    if(fclose(rozmery) == EOF){
        printf("Subor sa nepodarilo zatvorit\n");
        return 1;
    }
    return 0;
}

int main(){

    problem_1();
    problem_2();
    
    return 0;
}