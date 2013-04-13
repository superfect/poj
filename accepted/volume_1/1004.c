#include <stdio.h>
int forloop;
float i,j,sum;

int main(){
    while (scanf("%f", &i)!=EOF){
        sum = i;
        for (forloop=0; forloop<11; forloop++){
            scanf("%f", &j);
            sum += j;
        }
        printf("$%.2f", sum/12);
    }
    return 0;
}
