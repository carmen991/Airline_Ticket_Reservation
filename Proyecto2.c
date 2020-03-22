#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROW 32
#define COL 6
void clearscreen()
{
    system("@cls||clear");
}
char vuelo[5];
int asientos[ROW][COL];
void menu();
void ReservarAsientos();
void AsientosDisponibles();
void Resumen();

int main(void)
{   
    int longitud;
Inicio:
    
    printf( "Introduzca el Numero de Vuelo (5 caracteres):_");
    scanf("%s",vuelo);
    longitud = strlen(vuelo);
    if (longitud==5){
        menu();
        goto Finish;}
    
    else goto Inicio;
Finish:
    return 0;
}
void menu(){
    int  opcion;
    do
    {
        clearscreen();
        printf( "Bienvenido al TRv1                   vuelo:%s",vuelo);
        printf( "\n   1. Reservar asiento" );
        printf( "\n   2. Ver asientos disponibles");
        printf( "\n   3. Ver Resumen");
        printf( "\n   4. Salir." );
        printf( "\n\n   Seleccione opcion: ");

        scanf( "%d", &opcion );
        if (opcion==1){
        ReservarAsientos();
        return;
        }
        else{
        if (opcion==2){
        AsientosDisponibles();
        return;}
        else{
        if (opcion==3){
        Resumen();
        return;}
        }
        }
        

    } while ( opcion != 4 );
    
}
void ReservarAsientos(){
    clearscreen();
    char asiento;
    printf("Vuelo %s\n",vuelo);
    printf("Ingrese asiento a reservar:\n");

    printf("%d",asientos[ROW][COL]);
    return;
}
void AsientosDisponibles(){
    clearscreen();
    printf("Vamos a mostrar asientos disponibles:\n");
    for (int filas=0;  filas< ROW; filas++){
        for (int columnas=0; columnas < COL ; columnas++){
            printf("|%d|",asientos[filas][columnas]);
    }
    printf("\n");
}

    return;

}

void Resumen(){
    clearscreen();
    printf("Vamos a mostrar resumen\n");
    return;
}