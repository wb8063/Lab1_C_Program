#include <stdio.h>
#include <stdbool.h>

bool within_x_percent(float ref, int data, float x){


        if(ref >= (100 - ((x/100)*100)) && ref<= (100+((x/100)*100))){ // checking if min and max are both between or equal to 100
                printf("Substance is water\n");// if it is the substance is water
                return 1;
        }
        else if(ref >= (357-((x/100)*357)) && ref<= (357+((x/100)*357))){// checking if min and max are both between or equal to  357
                printf("Substance is Mercury\n");//if it is the substance is mercury
                return 1;
        }
        else if(ref >= (1187-((x/100)*1187)) && ref<= (1187+((x/100)*1187))){// checking if min and max are both between or equal to 1187
                printf("Substance is Copper\n");//if it is the substance is copper
                return 1;
        }
        else if(ref >= (2193-((x/100)*2193)) && ref<= (2193+((x/100)*2193))){// checking if min and max are both between or equal to 2193
                printf("Substance is Silver\n");//if it is the substance is silver
                return 1;
        }
        else if(ref >= (2660-((x/100)*2660)) && ref<= (2660+((x/100)*2660))){// checking if min and max are both between or equal to 2660
                printf("Substance is Gold\n");//if it is the substance is gold
                return 1;
        }
        else{//if none of the others then its unknown
        printf("Substance unknown\n");
        return 0;
        }

        return true;
}

int main(void){
        float ref; //what people input
        int data; //the percentage of ref
        float x; //error percentage
        float y; //place holder for getting data
        char ans; //yes no answer holder
        printf("Observed boiling point (in deg. C)? ");
        scanf(" %f", &ref);
        printf("You entered %.2f\n", ref);
        printf("Custom error percent? n for no (5%% default), y for yes: ");
        scanf(" %c", &ans);

        switch(ans){//switch statement for multiple answers for y, Y, n , N and anything not applicable
                case 'n':
                x= 5;//sets error percentage to automatically be 5%
                y=500/ref;
                data = ref-y;
                within_x_percent(ref, data, x);//calls function
                break;

                case 'N':
                x= 5;//sets error percentage to automatically be 5%
                y=500/ref;
                data= ref-y;
                within_x_percent(ref, data, x);//calls fnct
                break;

                case 'y':
                printf("Enter error percent: ");//asks for user input
                scanf("%f", &x);
                printf("You entered %.2f percent\n", x);//prints user input with decimals
                y=(x*100)/ref;
                data = ref-y;
                within_x_percent(ref, data, x);//calls fnct
                break;

                case 'Y':
                printf("Enter error percent: ");//asks for user input
                scanf("%f", &x);
                printf("You entered %.2f percent\n", x);//prints user input
                y=(x*100)/ref;
                data = ref-y;
                within_x_percent(ref, data, x);//calls fnct
                break;
                 default:
                printf("Error: bad input\n");//for anything not y, n, N, or Y
                break;
       }


        return 0;
}





