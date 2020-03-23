#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ROW 32
#define COL 6
void clearscreen()
{
    system("@cls||clear");
}
char vuelo[5];
int asientos[ROW][COL];
int fila=0;
char columna[1];
int A=1;
int B=2;
int C=3;
int D=4;
int E=5;
int F=6;
void menu();
void ReservarAsientos();
void AsientosDisponibles();
void Resumen();
void Asientos();

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
    printf("Vuelo %s\n",vuelo);
Reservar:
    printf("Ingrese asiento a reservar(LETRA,DIGITO):");
    scanf("%s%i",columna,&fila);
   char salir;
   printf("Enter some character. Enter $ to exit...\n");
   while (salir != 'm')
   { salir=getchar();
if (fila<= ROW) {
  if(columna[0]=='A'||columna[0]=='B'||columna[0]=='C'||columna[0]=='D'||columna[0]=='E'||columna[0]=='F'){
    switch(columna[0]){
case 'A':
    if (asientos[fila][A]==0){
    printf("Asiento %s%i reservado exitosamente!!\n",columna,fila);
    asientos[fila][A]='X';
    goto Reservar;
    }
    else {
        printf("Este asiento ya ha sido reservado\nVuelva a intentarlo");
        goto Reservar;
    } break;
case 'B':
    if (asientos[fila][B]==0){
    printf("Asiento %s%i reservado exitosamente!!\n",columna,fila);
    asientos[fila][B]='X';
    goto Reservar;
    }
    else {
        printf("Este asiento ya ha sido reservado\nVuelva a intentarlo");
        goto Reservar;
    } break;
case 'C':
    if (asientos[fila][C]==0){
    printf("Asiento %s%i reservado exitosamente!!\n",columna,fila);
    asientos[fila][C]='X';
    goto Reservar;
    }
    else {
        printf("Este asiento ya ha sido reservado\nVuelva a intentarlo");
        goto Reservar;
    } break;
case 'D':
    if (asientos[fila][D]==0){
    printf("Asiento %s%i reservado exitosamente!!\n",columna,fila);
    asientos[fila][A]='X';
    goto Reservar;
    }
    else {
        printf("Este asiento ya ha sido reservado\nVuelva a intentarlo");
        goto Reservar;
    } break;
case 'E':
    if (asientos[fila][E]==0){
    printf("Asiento %s%i reservado exitosamente!!\n",columna,fila);
    asientos[fila][A]='X';
    goto Reservar;
    }
    else {
        printf("Este asiento ya ha sido reservado\nVuelva a intentarlo");
        goto Reservar;
    } break;
case 'F':
    if (asientos[fila][F]==0){
    printf("Asiento %s%i reservado exitosamente!!\n",columna,fila);
    asientos[fila][A]='X';
    goto Reservar;
    }
    else {
        printf("Este asiento ya ha sido reservado\n");
        goto Reservar;
    } break;
}}  else {
    printf("Este no es un asiento\nVuelva a intentarlo\n");
    goto Reservar;}
}else {printf("Este no es un asiento\nVuelva a intentarlo\n");
    goto Reservar;}}
    menu();
}
void AsientosDisponibles(){
    clearscreen();
    printf("Estos son los asientos disponibles:\n");
    Asientos();

    return;
}

void Resumen(){
    clearscreen();
    printf("Vamos a mostrar resumen\n");
}

void Asientos(){
    int i;
    int c;
    asientos[3][5]='X';
    printf("  ||A| |B| |C| |D| |E| |F|\n");
        
        for (int filas=0;  filas< ROW; filas++){
         while (i!=32){
        i++;
        printf("%d|",i); 
            for (int columnas=0; columnas < COL ; columnas++){  
              asientos[filas][columnas]=0;
                printf(" |%d|",asientos[filas][columnas]);  
    }printf("\n");     
}
}
printf("Presione Enter para volver al menu principal\n");
getchar();
return;

}
