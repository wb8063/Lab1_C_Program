#include <stdio.h>
#include <stdbool.h>

bool within_x_percent(float ref, int data, float x){
        float min;
        float max;
        min = ref-((x*100)/ref)*ref;
        max = ref +((x*100)/ref)*ref;

        if(data>= min && data <= max){
                if(100 >= min && 100 <= max){
                        printf("Substance is water");
                        return 1;
                }
                else if(357 >= min && 357 <= max){
                        printf("Substance is Mercury");
                        return 1;
                }
                else if(1187 >= min && 1187 <= max){
                        printf("Substance is Copper");
                        break;
                        return 1;
                }
                else if(2193 >= min && 2193 <= max){
                        printf("Substance is Silver");
                        return 1;
                }
                else if(2660 >= min && 2660 <= max){
                        printf("Substance is Gold");
                        return 1;
                }
        }
        else{
        printf("Substance unknown");
                return 0;

        }
        return true;
}

int main(void){
        float ref; //refernece temperature
        int data; //reference -y
        float x; //error percentage
        int y; //place holder for getting data
        char ans; //yes no answer holder
        printf("Observed boiling point (in deg. C)? ");
        scanf("%f", &ref);
        printf("You entered %.2f", ref);
        printf("Custom error percent? n for no (5%% default), y for yes: ");
        scanf("%c", &ans);
        printer(ans);
        switch(ans){
                case 'n':
                x= 5;
                y=500/ref;
                data = ref-y;
                within_x_percent(ref, data, x);
                break;

                case 'N':
                x= 5;
                y=500/ref;
                data = ref-y;
                within_x_percent(ref, data, x);
                break;
                     case 'y':
                printf("Enter error percent: ");
                scanf("%f", &x);
                printf("You entered %.2f", x);
                y=(x*100)/ref;
                data = ref-y;
                within_x_percent(ref, data, x);
                break;

                case 'Y':
                printf("Enter error percent: ");
                scanf("%f", &x);
                printf("You entered %.2f", x);
                y=(x*100)/ref;
                data = ref-y;
                within_x_percent(ref, data, x);
                break;
            
                default:
                printf("Error: bad input");
                break;
       }
        return 0;
}




