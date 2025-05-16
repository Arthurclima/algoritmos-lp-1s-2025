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

int menor_2n(int a, int b){
    int menor;
    if (a > b){
        menor = b;

    }else {
        menor = a; 
    } return menor;
        
}

/*

    Retorna o menor entre 3 números inteiros

*/

int menor_3n(int a, int b, int c){
    int menor = menor_2n(a, b);
    return menor_3n(menor, c);
}
