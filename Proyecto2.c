#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void clearscreen()
{
    system("@cls||clear");
}

int main()
{
    int asiento, opcion;
    char vuelo[5];
    int longitud;
    longitud = strlen(vuelo);
    
    printf( "Introduzca el Numero de Vuelo (5 caracteres):_");
    scanf("%s",vuelo);

    do
    {
        printf( "Bienvenido al TRv1                   vuelo:%s\n\n",vuelo);
        printf( "\n   1. Reservar asiento" );
        printf( "\n   2. Ver asientos disponibles");
        printf( "\n   3. Ver Resumen");
        printf( "\n   4. Salir." );
        printf( "\n\n   Introduzca opcion (1-4): ");

        scanf( "%d", &opcion );

        switch ( opcion )
        {
            case 1: goto ReservarAsientos;

            case 2: goto AsientosDisponibles;

            case 3: goto Resumen;
                    
         }

    } while ( opcion != 4 );

ReservarAsientos:{
    printf("Aqui vamos a reservar asientos");
    goto Finish;
}
AsientosDisponibles:{
    printf("Vamos a mostrar asientos disponibles");
    goto Finish;
}

Resumen:{
    printf("Vamos a mostrar resumen");
    goto Finish;
}
Finish:  
    return 0;
}
