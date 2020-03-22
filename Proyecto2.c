#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void clearscreen()
{
    system("@cls||clear");
}

char vuelo[5];
void ReservarAsientos();
void AsientosDisponibles();
void Resumen();

int main(void)
{

    int  opcion;
    int longitud;


Inicio:
    
    printf( "Introduzca el Numero de Vuelo (5 caracteres):_");
    scanf("%s",vuelo);
    longitud = strlen(vuelo);
    if (longitud==5){
    do
    {
        clearscreen();
        printf( "Bienvenido al TRv1                   vuelo:%s\n\n",vuelo);
        printf( "\n   1. Reservar asiento" );
        printf( "\n   2. Ver asientos disponibles");
        printf( "\n   3. Ver Resumen");
        printf( "\n   4. Salir." );
        printf( "\n\n   Seleccione opcion: ");

        scanf( "%d", &opcion );
        if (opcion==1){
        ReservarAsientos();
        goto Finish;
        }
        else{
        if (opcion==2){
        AsientosDisponibles();
        goto Finish;}
        else{
        if (opcion==3){
        Resumen();
        goto Finish;}
        }
        }
        

    } while ( opcion != 4 );
    }
    else goto Inicio;

Finish:
    return 0;
}
void ReservarAsientos(){
    clearscreen();
    printf("Vuelo %s\n",vuelo);
    printf("Ingrese asiento a reservar:\n");
    return;
}
void AsientosDisponibles(){
    clearscreen();
    printf("Vamos a mostrar asientos disponibles\n");
    return;

}

void Resumen(){
    clearscreen();
    printf("Vamos a mostrar resumen\n");
    return;
}