/* Tabis Miloslav 110905 */
/* cvicenie 6            */
/* 29.10.2021            */

#include<stdio.h>
#include<string.h>

int problem_1(){
    char string[50], c;
    int i;
    printf("Zadajte retazec znakov: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string) -1] = '\0';
    for(i = 0; i < strlen(string)/2; i++){
        c = string[strlen(string) -1 -i];
        string[strlen(string) -1 -i] = string[i];
        string[i] = c;
    }
   printf("Vystup: %s \n", string);
    return 0;
}

int problem_2(){
    char string[500];
    int i, j;
    printf("Zadajte retazec znakov: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string) -1] = '\0';
    for(i = 0; i < strlen(string); i++){
        if(string[i] == ' '){
            for(j = i; j < strlen(string); j++){
                string[j] = string[j+1];
            }
            i--;
        }
        else if(string[i] >= '0' && string[i] <= '9'){
            for(j = strlen(string) +1; j >= i; j--){
                string[j] = string[j-1];
            }
            string[i] = '.';
            string[i+1] = '.';
            i--;
        }
    }
    printf("Vystup: %s \n", string);
    return 0;
}

int problem_3(){
    char input_string[50];
    FILE *fw,*fr;
    int i, newline = 1;
    if((fr = fopen("vstup.txt", "r")) == NULL){
        printf("Subor sa nepodarilo otvorit\n");
        return 1;
    }
    if((fw = fopen("vystup.txt", "w")) == NULL){
        printf("Subor sa nepodarilo otvorit\n");
        return 1;
    }

    while(fgets(input_string, sizeof(input_string), fr) != NULL){
        for(i = 0; i < strlen(input_string); i++){
            if(newline %2 == 0){
                if((input_string[i] >= 'a' && input_string[i] <= 'z') || (input_string[i] >= 'A' && input_string[i] <= 'Z') ){
                    input_string[i] = '-';
                }
            }
            else{
                if(input_string[i] >= '0' && input_string[i] <= '9'){
                    input_string[i] = '*';
                }
            }
        }
        fputs(input_string,fw);
        newline++;
    }

    if(fclose(fr) == EOF){
        printf("Subor sa nepodarilo zatvorit\n");
        return 1;
    }
    if(fclose(fw) == EOF){
        printf("Subor sa nepodarilo zatvorit\n");
        return 1;
    }

    return 0;
}

int main(){

    //problem_1();
    problem_2();
    //problem_3();

    return 0;
}

