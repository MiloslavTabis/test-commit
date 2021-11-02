/* Tabis Miloslav 110905 */
/* cvicenie 3            */
/* 08.10.2021            */

#include<stdio.h>

int problem_1(){
    int n, i, size = 0, count = 0;
    float big_value = 0, average = 0, num;
    printf("zadajte pocet realnych cisel: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Zadajte %d.: ", i +1);
        fflush(stdin);
        scanf("%f", &num);
        if(num < 0){
            average = average + (num - average)/++size;
        }
        else{
            if(num > big_value){
                big_value = num;
            }
        }
        if(num >= -5.5 && num <= 5.5){
            count++;
        }
    }
    printf("Priemer zapornych: %.2f\n", average);
    printf("Maximum z kladnych: %.2f\n", big_value);
    printf("Pocet v rozsahu -5.5 a 5.5: %d\n", count);
    return 0;
}

int problem_2(){
    char c;
    int lower_case = 0, upper_case = 0, number = 0;
    printf("Zadajte retazec: ");
    fflush(stdin);
    while((c = getchar()) != '\n'){
        if(c >= 'a' && c <= 'z'){
            lower_case++;
        }
        else if(c >= 'A' && c <= 'Z'){
            upper_case++;
        }
        else if(c >= '0' && c <= '9'){
            number++;
        }
    }
    printf("Male: %d\n", lower_case);
    printf("Velke: %d\n", upper_case);
    printf("Cisla: %d\n", number);
    return 0;
}

int main(){

    problem_1();
    problem_2();
    return 0;
}