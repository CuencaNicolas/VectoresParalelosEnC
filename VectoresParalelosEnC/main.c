#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
#
/*Vectores paralelos*/
/*Mostrara una lista de legajos de nombres de alumnos*/

/*Ejemplos: */

/*     | nombre          | edad
--------------------------------
1      | "Jose"          |  33
2      | "Gabriel"       |  44
3      |                 |
4      |                 |
5*     |                 |
6      |                 |
7      |                 |
*/

void mostrarAlumnos(char[][50],int[],int[],float[],int[],int);
void cargarAlumnos(char[][50],int[],int[],float[],int[],int);
void buscarLugar(int[],int[])/*Legajo,Tamanio*/


int main()
{
    char nombre[TAMANIO][50];
    int notaUno[TAMANIO];
    int notaDos[TAMANIO];
    float promedio[TAMANIO];
    int legajo[TAMANIO];




    return 0;
}
void mostrarAlumnos(char nombres[][50],int primeraNota[],int segundaNota[],float promedio[],int legajo[],int largo)
{
    int i;

    for(i=0;i<largo;i++)
    {
        printf("L:%d,N:%s,N1:%d,N2:%d,P:%.2f",legajo[1],nombres[2],primeraNota[3],segundaNota[4],promedio[5],largo[]);

        nombres = ("Juan","Maria","Alfredo","Jose","Lili");
    }


}
void cargarAlumnos(char nombres[][50],int primeraNota[],int segundaNota[],float promedio[],int legajo[],int largo)
{
    legajo[1]=666;
}
void buscarLugar(int legajo[],int tamanio[])
{
    int i;
    int indiceRetornado=-1;

    for(i=0;i=tamanio;i++)
    {
        if(legajo[i]==0)
        {
            indiceRetornado=i;
            break;
        }
    }

    return indiceRetornado;
}
