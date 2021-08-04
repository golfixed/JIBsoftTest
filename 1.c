#include<stdio.h>

int main(){
    printTriangle(5);

    return 0;

}

void printTriangle(int number){
            int i,j,k = 0;
    if(number > 0){

        for(i=1; i <= number; i++){
            for(j=1 ; j<= i; j++){
                printf("%d", k);
            }
            k++;
            printf("\n");
        }

    }
}
