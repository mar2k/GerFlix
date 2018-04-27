#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

//  1. Mostrar el listado de series

        mostrarListaSeries(listaDeSeries,TAMSERIE);
        printf("-----------------------\n");
 //   2. Mostrar el listado de usuarios

        mostrarListaUsuarios(listaDeUsuarios,TAMUSUARIO);
        printf("-----------------------\n");

 //   3. Mostrar el listado de Usuarios con el nombre de la serie que ve

        mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);
        printf("-----------------------\n");

 //   4. Mostrar por cada serie, el nombre de los usuarios que la ven.

        mostrarSerieConSuUsuario(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);
        printf("-----------------------\n");


    return 0;
}
