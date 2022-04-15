/* Hugo Tonatiuh Alvarado Garcia
   A00834109
   Actualización 05-12-2021

Link al video de presentación de entregable 1 y 2:
https://drive.google.com/drive/folders/1xEe2RY0XHDJ_KzNzdyIqQIaJ95DQXh2F?usp=sharing

*/
#include <bits/stdc++.h>

#include "Episodio.hpp" 
#include "Serie.hpp" 
#include "Series.hpp" 

using namespace std;

Serie leerSerie(){
    string id, titulo, genero;
    int duracion, cantEpisodios;
    double calificacionPromedio;
    
    // Leer los datos de entrada
    printf("Ingresa el Id: ");
    cin >> id;

    printf("\nIngresa el titulo: ");
    cin.ignore();
    getline (cin, titulo);

    printf("\nIngresa la duración: ");
    cin >> duracion;

    printf("\nIngresa el genero: ");
    cin >> genero;

    printf("\nIngresa la calificacion promedio: ");
    cin >> calificacionPromedio;

    printf("\nIngresa la cantidad de episodios: ");
    cin >> cantEpisodios;

    return Serie(id, titulo, duracion, genero, calificacionPromedio, cantEpisodios);
}

void leerSerie(string &_id, string &_titulo, int &_duracion, string &_genero, double &_calificacionPromedio, int &_cantEpisodios){
    printf ("Ingresa el Id: ");
    cin >> _id;

    printf (" Ingresa el titulo: ");
    cin.ignore();
    getline (cin, _titulo);

    printf ("Ingresa la duración: ");
    cin >> _duracion;

    printf ("Ingresa el genero: ");
    cin >> _genero;

    printf ("Ingresa la calificacion promedio: ");
    cin >> _calificacionPromedio;

    printf ("Ingresa la cantidad de episodios: ");
    cin >> _cantEpisodios;
}

Episodio leerEpisodio(){
        string titulo;
        int temporada;
        double calificacion;

        printf("Ingresa el titulo: ");
        cin.ignore();
        getline (cin, titulo);

        printf("Ingresa la temporada a la cual pertenece: ");
        cin >> temporada;

        printf("Ingresa la calificacion del episodio: ");
        cin >> calificacion;
        
        return Episodio(titulo, temporada, calificacion);
}

void leerEpisodio(string &_titulo, int &_temporada, double &_calificacion){
    
        printf("Ingresa el titulo: ");
        cin.ignore();
        getline (cin, _titulo);

        printf("Ingresa la temporada a la cual pertenece: ");
        cin >> _temporada;

        printf("Ingresa la calificacion del episodio: ");
        cin >> _calificacion;
}


int main()
{   
    // DECLARACION DE VARIABLES
    Serie ObjetoSerie;
    Episodio ObjetoEpisodio;
    Series ObjetoSeries;
    string id = "";
    string titulo = "";
    string genero = "";
    int opcion = 0; 
    int duracion = 0;
    int cantEpisodios = 0; 
    int temporada = 0; 
    int num = 000;
    double calificacionPromedio = 0.0; 
    double calificacion = 0;
    
    //  EJECUCIÓN DEL PROGRAMA PRINCIPAL: MENÚ DE OPCIONES
    do{
        cout << "\nMENU\n" <<
        "\n 0. Salir\n" <<
        "\n01. Crear una serie(Método constructor)" <<
        "\n02. Establecer el ID" <<
        "\n03. Establecer el titulo" <<
        "\n04. Establecer la duracion" <<
        "\n05. Establecer genero" <<
        "\n06. Establecer calificacion" <<
        "\n07. Establecer la cantidad de episodios" <<
        "\n08. Desplegar series" <<
        "\n09. Crear un nuevo episodio" <<
        "\n10. Desplegar episodio" <<
        "\n11. Lee datos de la serie y retorna un objeto serie"
        "\n14. Leer Archivo" <<
        "\n15. Calcular calificación promedio de cada serie del arreglo" <<
        "\n16. Reporte de Frecuencias Promedio\n" <<

        "\nSeleccione una opcion: \n";

        scanf("%d",&opcion);

    switch (opcion)
    {   
        case 0:
                printf("¡Un gusto atenderle!\n");
                break;

        case 1: // 1. Crear una serie(Método constructor)
                leerSerie(id, titulo, duracion, genero, calificacionPromedio, cantEpisodios);
                ObjetoSerie = Serie(id, titulo, duracion, genero, calificacionPromedio, cantEpisodios);
                printf("Se ha registrado con exito su nueva serie!\n");
                break;

        case 2: // 2. Establecer el ID
                printf("Introduce el nuevo valor del ID:\n"); 
                cin >> id;
                ObjetoSerie.setId(id);
                ObjetoSerie.getId();
                printf("Se ha registrado con exito la nueva Id\n");
                break;

        case 3: // Asignar nuevo titulo
                printf("Introduce el nuevo titulo:\n"); 
                cin.ignore();
                getline (cin, titulo);
                ObjetoSerie.setTitulo(titulo); 
                ObjetoSerie.getTitulo();
                printf("Se ha registrado con exito el nuevo Titulo\n");
                break;

        case 4: // Actualizar duracion
                printf("Introduce la duracion (Minutos):\n"); 
                scanf("%d", &duracion);
                ObjetoSerie.setDuracion(duracion);
                ObjetoSerie.getDuracion(); 
                printf("Se ha actualizado con exito la duracion\n");
                break;

        case 5: // Actualizar genero
                printf("Establece el genero:\n"); 
                cin >> genero;
                ObjetoSerie.setGenero(genero);
                ObjetoSerie.getGenero();
                printf("Se ha actualizado con exito el genero\n");
                break;

        case 6: // Establecer calificacion
                printf("Establece la calificacion (Entre 1 a 100)\n");
                scanf("%lf", &calificacionPromedio);
                ObjetoSerie.setCalificacion(calificacionPromedio);
                ObjetoSerie.getCalificacion();
                printf("Se ha registrado con exito la calificacion\n");
                break;

        case 7: // Cantidad episodios
                printf("Establece la cantidad de episodios:\n");
                scanf("%d", &cantEpisodios);
                ObjetoSerie.setCantidadEpisodios(cantEpisodios);
                ObjetoSerie.getCantidadEpisodios();
                printf("Se ha actualizado con exito la cantidad de episodios\n");
                break;
                
        case 8: // Mostrar serie
                cout << "Serie: \n";
                cout << ObjetoSerie.str();
                break;

        case 9: // Crear episodio
                leerEpisodio(titulo, temporada, calificacionPromedio);
                ObjetoEpisodio = Episodio(titulo, temporada, calificacionPromedio);
                printf("Se ha creado con exito el nuevo episodio");
                break;

        case 10: // Desplegar episodio
                cout << ObjetoEpisodio.str( );
                break;
        
        case 11: // Leer datos de la serie, y retorna un objeto serie
                ObjetoSerie = leerSerie();
                break;

        case 12:
                ObjetoSerie.addEpisodio(Episodio("Clases", 1, 91.0));
                ObjetoSerie.addEpisodio(Episodio("Constructores", 1, 98.7));
                ObjetoSerie.addEpisodio(Episodio("Composicion", 1, 99.3));
                ObjetoSerie.addEpisodio(Episodio("Clase Arreglos", 1, 95.7));

                num = 100;

                ObjetoEpisodio = ObjetoSerie.getEpisodio(num);

                if (num == -1){
                        cout << "No existe el episodio!\n" << ObjetoEpisodio.str() << "\n";
                }

                else{
                        cout << "Si existe el episodio " << ObjetoEpisodio.str() << "\n";
                }

        
        case 14: // Lee el archivo y actualiza
                ObjetoSeries.leerArchivo( ); 
                break;

        case 15: // Actualiza calificacion promedio global
                ObjetoSeries.calcularCalificacionPromedioSerie( );
                printf("Promedio global calculado!\n");
                break;
        
        case 16: // Genera un reporte de frecuencias y promedio de series actualizado
                ObjetoSeries.reporteFrecuenciasYPromedioSeries( );
                break;

        default: // Mensaje automático cuando el usuario ingresa una opción no válida
                printf("No se reconoce la opcion\n"); 
                break;

    }}  while ( opcion != 0); // Aquí termina el do while del menú

    printf("!Hasta pronto! ¡Más películas le esperan!");

    return 0; 
}

// Fin del programa
