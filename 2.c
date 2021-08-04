#include<stdio.h>

int main(){
    char input[150] = "I am an engineer";
    char key = "g";

    int length = strlen(input),i;
    printf("result: ");
    for(i=0;i<length;i++){
        if(input[i] == key){
            printf("%d", i+1);
        }
    }
    return 0;
}

