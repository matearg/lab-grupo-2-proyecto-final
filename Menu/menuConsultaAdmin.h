#ifndef MENUCONSULTAADMIN_H_INCLUDED
#define MENUCONSULTAADMIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void menuConsultaAdministrador(){
    int opcion;
    do{
        system("cls");
        printf("\n\t\t\t\t\t\t\tCONSULTA\n");
        printf("\n=======================================================================================================================");
        printf("\n<1> PEDIDOS DE CLIENTE POR FECHA");
        printf("\n<2> TOTAL DE PEDIDOS POR CLIENTE");
        printf("\n<3> TOTAL DE PEDIDOS DE TODOS LOS CLIENTES");
        printf("\n<0> REGRESAR\n");

        printf("\nINGRESE UNA OPCION: ");
        scanf("%d", &opcion);
        switch(opcion){
        case 1:

            break;

        case 2:

            break;

        case 3:

            break;

        case 0:

            break;
        }

    }while(opcion!=0);
}




#endif // MENUCONSULTAADMIN_H_INCLUDED
