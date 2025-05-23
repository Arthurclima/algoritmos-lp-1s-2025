/*
    Retorna o maior valor entre 2 números
*/

int maior_2n(int a, int b){
int maior;
if (a > b){
    maior = a;

}else {
    maior = b; 
} return maior;

}
/*

    Retorna o maior entre 3 números inteiros

*/
int maior_3n(int a, int b, int c){
    int maior = maior_2n(a, b);
    return maior_2n(maior, c);
}

/*

    Retorna o menor valor entre 2 números

*/

int menor_2n(int a, int b){;
    if (a > b){
        return b;

    }else {
        return a; 
    };
        
}

/*

    Retorna o menor entre 3 números inteiros

*/

int menor_3n(int a, int b, int c){
    int menor = menor_2n(a, b);
    return menor_2n(menor_2n (a,b), c);
}

/*

    Verifica se um dado número é primo (1) ou não (0)

*/
int verificar_numero_primo(int n){

    if((n%2 == 0) && (n != 2)){
        return 0;
    }
    for(int i = 3; i < n; i += 2){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}