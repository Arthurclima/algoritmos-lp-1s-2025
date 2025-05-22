#include <stdio.h>

int main(int argc, char* argv[]){
    int i, n;
    
    printf("Insira um numero: ");
    scanf("%d",&n );
    if (n<=1){
        printf("Nao eh primo. \n");

    } else {
        for (i=2; i < n; i++){
            if(n%i==0){
                printf("Nao eh primo. \n");
                break;
            }
        }
    } if (i==n) {
        printf("Eh primo. \n");
    }

        return 0;

}
    
    
    