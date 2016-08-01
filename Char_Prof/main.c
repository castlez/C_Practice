//#include "Char_Proff.h"
#include <stdio.h>
#include <stdlib.h>

struct character {
    char * name;
    char ** inven;
};


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
            printf("TODO 1\n");
            break;
        case '2' :
            printf("TODO 2\n");
            break;
        case '3' : 
            printf("bye\n");
            return;
    }
     
    


    		
}
