#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(int argc, char* argv[]) {
    int limite, i;
    limite = 100;
    for (i = 0; i <= limite; i++){
        printf("Numero %d\n", i);
        Sleep(1000);
    }
    return 0;
}