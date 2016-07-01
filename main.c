#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

int main()
{
int menu1;

    clock_t temp_ini_insert, temp_fin_insert;
    clock_t temp_ini_merge, temp_fin_merge;
    clock_t temp_ini_quick, temp_fin_quick;

    float temp_insertion=0;
    float temp_merge=0;
    float temp_quick=0;

    int vet1[TAM1],vet2[TAM2], vet3[TAM3],vet4[TAM4],vet5[TAM5];


    FILE *cem;
	FILE *quinhentos;
	FILE *cinco_mil;
	FILE *dez_mil;
	FILE *trinta_mil;
	
   gerar_arquivos(cem,quinhentos,cinco_mil,dez_mil,trinta_mil);

    do
    {
        printf("Oque deseja fazer ?\n 1 - Ordenar Arquivo de 100 \n 2 - Ordenar Arquivo de 500 \n 3 - Ordenar Arquivo de 5000 \n 4 - Ordenar Arquivo de 10000 \n 5 - Ordenar Arquivo de 30000 \n 6 - Encerrar \n\n");
        scanf("%d",&menu1);

        switch(menu1)
        {

        case 1:
        {
             //   ORDENAR ARQUIVO DE 100 NUMEROS
                ler_arquivo(cem,vet1,TAM1);
                temp_ini_insert =clock();
                //CHAMAR FUN\C7\C3O DE ORDENACAO INSERTION SORT
                insert_sort(vet1,TAM1);
                temp_fin_insert= clock();

                //tempo de execucao do insertion
                temp_insertion = (float)(temp_fin_insert - temp_ini_insert);

                ler_arquivo(cem,vet1,TAM1);
                temp_ini_merge =clock();
                //CHAMAR FUN\C7\C3O DE ORDENACAO MERGE SORT
                merge_sort(vet1,0,TAM1-1,TAM1);
                temp_fin_merge =clock();

                //tempo de execucao do merge sort
                temp_merge = (float)(temp_fin_merge - temp_ini_merge);

                ler_arquivo(cem,vet1,TAM1);
                temp_ini_quick =clock();
                //CHAMAR FUN\C7\C3O DE ORDENACAO QUICKSORT
                quicksort(vet1,0,TAM1-1,TAM1);
                temp_fin_quick =clock();

                //tempo de execucao do quick sort
                temp_quick = (float)(temp_fin_quick-temp_ini_quick);

                printf("\n\n\t TEMPO DE EXECUCAO DOS ALGORITMOS EM MILISEGUNDOS\n");
                printf(" Insertion Sort: %f\n Merge Sorte: %f\n Quicksort: %f\n\n",temp_insertion/1000,temp_merge/1000,temp_quick/1000);
                break;
        }
        case 2:
        {
                //   ORDENAR ARQUIVO DE 500 NUMEROS

                ler_arquivo(quinhentos,vet2,TAM2);
                temp_ini_insert =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O INSERTION SORT
                insert_sort(vet2,TAM2);
                temp_fin_insert= clock();

                //tempo de execu\E7\E3o do insertion
                temp_insertion = (float)(temp_fin_insert - temp_ini_insert);

                ler_arquivo(quinhentos,vet2,TAM2);
                temp_ini_merge =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O MERGE SORT
                merge_sort(vet2,0,TAM2-1,TAM2);
                temp_fin_merge =clock();

                //tempo de execu\E7\E3o do merge sort
                temp_merge = (float)(temp_fin_merge - temp_ini_merge);

                ler_arquivo(quinhentos,vet2,TAM2);
                temp_ini_quick =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O QUICKSORT
                quicksort(vet2,0,TAM2-1,TAM2);
                temp_fin_quick =clock();

                //tempo de execu\E7\E3o do merge sort
                temp_quick = (float)(temp_fin_quick - temp_ini_quick);

                printf("\n\n\t TEMPO DE EXECUCAO DOS ALGORITMOS EM MILISEGUNDOS\n");
                printf(" Insertion Sort: %f \n Merge Sorte: %f\n Quicksort: %f\n\n",temp_insertion/1000,temp_merge/1000,temp_quick/1000);
                break;
            }

            case 3:
            {

                //   ORDENAR ARQUIVO DE 5000 NUMEROS
                ler_arquivo(cinco_mil,vet3,TAM3);
                temp_ini_insert =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O INSERTION SORT
                insert_sort(vet3,TAM3);
                temp_fin_insert= clock();

                //tempo de execu\E7\E3o do insertion
                temp_insertion = (float)(temp_fin_insert - temp_ini_insert);

                ler_arquivo(cinco_mil,vet3,TAM3);
                temp_ini_merge =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O MERGE SORT
                merge_sort(vet3,0,TAM3-1,TAM3);
                temp_fin_merge =clock();

                //tempo de execu\E7\E3o do merge sort
                temp_merge = (float)(temp_fin_merge - temp_ini_merge);

                ler_arquivo(cinco_mil,vet3,TAM3);
                temp_ini_quick =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O QUICKSORT
                quicksort(vet3,0,TAM3-1,TAM3);
                temp_fin_quick =clock();

                //tempo de execu\E7\E3o do merge sort
                temp_quick = (float)(temp_fin_quick - temp_ini_quick);

                printf("\n\n\t TEMPO DE EXECUCAO DOS ALGORITMOS EM MILISEGUNDOS\n");
                printf(" Insertion Sort: %f \n Merge Sorte: %f\n Quicksort: %f\n\n",temp_insertion/1000,temp_merge/1000,temp_quick/1000);
                break;
            }

            case 4:
            {
                //   ORDENAR ARQUIVO DE 10000 NUMEROS
                ler_arquivo(dez_mil,vet4,TAM4);
                temp_ini_insert =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O INSERTION SORT
                insert_sort(vet4,TAM4);
                temp_fin_insert= clock();

                //tempo de execu\E7\E3o do insertion
                temp_insertion = (float)(temp_fin_insert - temp_ini_insert);

                ler_arquivo(dez_mil,vet4,TAM4);
                temp_ini_merge =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O MERGE SORT
                merge_sort(vet4,0,TAM4-1,TAM4);
                temp_fin_merge =clock();

                //tempo de execu\E7\E3o do merge sort
                temp_merge = (float)(temp_fin_merge - temp_ini_merge);

                ler_arquivo(dez_mil,vet4,TAM4);
                temp_ini_quick =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O QUICKSORT
                quicksort(vet4,0,TAM4-1,TAM4);
                temp_fin_quick =clock();

                //tempo de execu\E7\E3o do merge sort
                temp_quick = (float)(temp_fin_quick - temp_ini_quick);

                printf("\n\n\t TEMPO DE EXECUCAO DOS ALGORITMOS EM MILISEGUNDOS\n");
                printf(" Insertion Sort: %f \n Merge Sorte: %f\n Quicksort: %f\n\n",temp_insertion/1000,temp_merge/1000,temp_quick/1000);
                break;
            }
	case 5:
            {
                //   ORDENAR ARQUIVO DE 30000 NUMEROS
                ler_arquivo(trinta_mil,vet5,TAM5);
                temp_ini_insert =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O INSERTION SORT
                insert_sort(vet5,TAM5);
                temp_fin_insert= clock();

                //tempo de execu\E7\E3o do insertion
                temp_insertion = (float)(temp_fin_insert - temp_ini_insert);

                ler_arquivo(trinta_mil,vet5,TAM5);
                temp_ini_merge =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O MERGE SORT
                merge_sort(vet4,0,TAM5-1,TAM5);
                temp_fin_merge =clock();

                //tempo de execu\E7\E3o do merge sort
                temp_merge = (float)(temp_fin_merge - temp_ini_merge);

                ler_arquivo(trinta_mil,vet5,TAM5);
                temp_ini_quick =clock();
                //CHAMAR FUN\C7\C3O DE ORDENA\C7\C3O QUICKSORT
                quicksort(vet5,0,TAM5-1,TAM5);
                temp_fin_quick =clock();

                //tempo de execu\E7\E3o do merge sort
                temp_quick = (float)(temp_fin_quick - temp_ini_quick);

                printf("\n\n\t TEMPO DE EXECUCAO DOS ALGORITMOS EM MILISEGUNDOS\n");
                printf(" Insertion Sort: %f \n Merge Sorte: %f\n Quicksort: %f\n\n",temp_insertion/1000,temp_merge/1000,temp_quick/1000);
                break;
            }

        case 6:
        {

            printf("\n\t FIM DO PROGRAMA !!\n\n");
            break;
        }
        default:
        {

            printf("\n\t VOCE NAO ESCOLHEU UMA OPCAO VALIDA!\n");

        }
        }
    }
    while(menu1 != 6);

return 0;
}
