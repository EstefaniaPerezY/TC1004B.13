#include <signal.h>
#include <stdio.h>
#include <unistd.h>

// cuando hacemos control+C sale este mensaje
void handle(int numsignal){
    printf('Jajajajja', numsiganl);
}

// $ gcc -o nomemates nomemates.c <-- bandera de compilacion
int main(){
    signal(2, handle);
    while(1){
        printf("Trabajando\n");
        sleep(1);
    }
    return 0;
}
//$ kill -19 PID <--- encontrar el PID del archivo <--- pausa archivo
//$ kill -18 PID <--- vuelve a vida el archivo
//$ kill -9 PID <---- lo mata por completo