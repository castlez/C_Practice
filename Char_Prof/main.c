//#include "Char_Proff.h"
#include <stdio.h>
#include <stdlib.h>

struct character {
    char * name;
    char ** inven;
};

//prototypes silly
void create_character();
void sv_character(char[], char*[]);
void main(){
    
    printf("Greetings, welcome to Character Profile...r\n"\
            "Please select an option:\n"\
            "1. Create Character\n"\
            "2. See Characters\n"\
            "3. Exit\n"
          );
    
    printf(">> ");
    char ans = getchar();

    switch(ans) {
        case '1' :
            create_character();
            break;
        case '2' :
            printf("TODO 2\n");
            break;
        case '3' : 
            printf("bye\n");
            return;
    }   
}

void create_character(){
    char ntemp[256]; 
    printf("\nName >> ");
    scanf("%s", ntemp);

    char **itemp = malloc(10*sizeof(char*));
    int i;
    char c; //for clearing the input buffer
    for(i = 0 ; i < 10;i++){//10 inven slots
        itemp[i] = malloc(256*sizeof(char));
        printf("Item %d (%d left, 'done' to finish) >> ",i+1,10-i);
        scanf("%s",itemp[i]);
        while((c = getchar()) != '\n' && c != EOF); 
        if(strcmp("done",itemp[i])==0){
            while((c = getchar()) != '\n' && c != EOF); 
            break;
        }
        printf("ADDING %s\n", itemp[i]);
    }

    sv_character(ntemp, itemp);
    printf("\n|DONE|\n");

}

void sv_character(char na[], char **inv){
    FILE * fil = fopen("char_list.txt", "a");
    fprintf(fil, "\n%s\n", na);
    int i;
    for(i = 0;i<sizeof(inv);i++){
        if(strcmp("done", inv[i])==0){
            break;
        }
        fprintf(fil, "%s\n", inv[i]);
    }
    fclose(fil);
    printf("DONE\n");
}



