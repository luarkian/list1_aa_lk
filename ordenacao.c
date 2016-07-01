#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

void gerar_arquivos(FILE *cem, FILE *quinhentos, FILE *cinco_mil, FILE *dez_mil, FILE *trinta_mil)
{

    int i, num;

    if((cem != NULL) || (quinhentos == NULL) || (cinco_mil == NULL) || (dez_mil == NULL) || (trinta_mil == NULL))
    {
        cem = fopen("100.txt","w");
//		printf("100\n");

        quinhentos = fopen("500.txt","w");
//		printf("500\n");
  
        cinco_mil = fopen("5000.txt","w");
//		printf("5000\n");
 
        dez_mil = fopen("10000.txt","w");
//		printf("10000\n");

        trinta_mil = fopen("30000.txt","w");
//		printf("30000\n");
    }
    else
        exit(1);

    for(i=0; i< 30000; i++)
    {

		num = rand();
		if(i < 100)
        {

            fprintf(cem,"%d ",num);

        }
     	if(i < 500)
        {

            fprintf(quinhentos,"%d ",num);

        }
        if(i < 5000)
        {

            fprintf(cinco_mil,"%d ",num);

        }
        if(i < 10000)
        {

            fprintf(dez_mil,"%d ",num);

        }
        if(i < 30000)
        {

            fprintf(trinta_mil,"%d ",num);
        }
    }
    fclose(cem);
    fclose(quinhentos);
    fclose(cinco_mil);	
    fclose(dez_mil);
    fclose(trinta_mil);
}

void ler_arquivo(FILE *arq, int *vet, int tamanho)
{
    int i =0;

    if(tamanho == 100)
    {
        arq = fopen("100.txt","r");

    }

    else if(tamanho == 500)
    {
        arq = fopen("500.txt","r");
    }
    else if(tamanho == 5000)
    {
        arq = fopen("5000.txt","r");
    }    
    else if(tamanho == 10000)
    {
        arq = fopen("10000.txt","r");
            
    }
    else if(tamanho == 30000)
    {
        arq = fopen("30000.txt","r");	
    }


if(arq == NULL )
    {
        printf("Erro ao abrir arquivo de leitura");

        exit(1);
    }
    else;

    while(!feof(arq))
    {

        fscanf(arq,"%d",&vet[i]);

        if(i+1 == tamanho)
        {
            break;
        }
        i++;
    }

}

void escrever(FILE *arq, int *vet, int tamanho)
{
    int j;
    for(j = 0; j < tamanho; j++)
    {
        fprintf(arq,"%d ",vet[j]);
    }
}

void insert_sort( int *vet,int tamanho)
{

    FILE *arq;

    if(tamanho == 100)
    {
        arq = fopen("Insertion sort 100.txt","w");

    }

    if(tamanho == 500)
    {
        arq = fopen("Insertion sort 500.txt","w");
    }

    if(tamanho == 5000)
    {
        arq = fopen("Insertion sort 5000.txt","w");
    }

    if(tamanho == 10000)
    {
        arq = fopen("Insertion sort 10000.txt","w");
    }

    if(tamanho == 30000)
    {
        arq = fopen("Insertion sort 30000.txt","w");
    }

    if(arq == NULL)
    {

        printf("Erro ao criar arquivo Insertion sort!\n");
        exit(1);
    }
    else
    {

        int i, j, chave;

        for(j=1; j<tamanho; j++)
        {
            chave = vet[j];
            i = j-1;
            while(i >= 0 && vet[i] > chave)
            {
                vet[i+1] = vet[i];
                i--;
            }
            vet[i+1] = chave;
        }
        escrever(arq,vet,tamanho);

        fclose(arq);
    }
}

void merge_sort(int *vet, int inicio, int fim,int tamanho)
{

    int i, j, k, m, *t;

    if (inicio==fim) return;

    // ordenacao recursiva das duas metades
    m = (inicio+fim)/2;
    merge_sort(vet,inicio,m,tamanho);
    merge_sort(vet,m+1,fim,tamanho);

    // intercalacao no vetor temporario t

    i = inicio;
    j = m+1;
    k = 0;

    t = (int *) malloc(sizeof(int) * (fim-inicio+1));

    while(i<m+1 || j<fim+1)
    {

        if (i==m+1)   // i passou do final da primeira metade, pegar vet[j]
        {
            t[k] = vet[j];
            j++;
            k++;
        }
        else if (j==fim+1)     // j passou do final da segunda metade, pegar vet[i]
        {
            t[k] = vet[i];
            i++;
            k++;
        }
        else if (vet[i] < vet[j])     // vet[i]<vet[j], pegar vet[i]
        {
            t[k] = vet[i];
            i++;
            k++;
        }
        else     // vet[j]<=vet[i], pegar vet[j]
        {
            t[k] = vet[j];
            j++;
            k++;
        }
    }

    FILE *arq;

    if(tamanho == 100)
    {
        arq = fopen("Merge sort 100.txt","w");
    }
    
    else if(tamanho == 500)
    {
       arq = fopen("Merge sort 500.txt","w");
    }
    
    else if(tamanho == 5000)
    {
       arq = fopen("Merge sort 5000.txt","w");
    }
  
    else if(tamanho == 10000)
    {
       arq = fopen("Merge sort 10000.txt","w");
    }                

    else if(tamanho == 30000)
    {
       arq = fopen("Merge sort 30000.txt","w");
    }
          
    if(arq == NULL)
    {

        printf("Erro ao criar arquivo Insertion sort!\n");
        exit(1);
    }

    escrever(arq,vet,tamanho);

    fclose(arq);

}

void quicksort(int *vet, int esquerda, int direita,int tamanho)
{

    int aux,pivo, j;

    if (direita > esquerda)
    {

        pivo = esquerda;
        for (j = esquerda + 1; j <= direita; j++)
        {
            if (vet[j] < vet[esquerda])
            {
                pivo++;
                //    troca(&vet[pivo], &vet[j]);
                aux = vet[pivo];
                vet[pivo] = vet[j];
                vet[j] = aux;
            }
        }

        // troca(&vet[esquerda], &vet[pivo]);
        aux = vet[esquerda];
        vet[esquerda] = vet[pivo];
        vet[pivo] = aux;

        quicksort(vet, esquerda, pivo - 1,tamanho);
        quicksort(vet, pivo + 1, direita,tamanho);
    }

    FILE *arq;

    if(tamanho == 100)
    {
        arq = fopen("QuickSort 100.txt","w");
    }
    
    else if(tamanho == 500)
    {
       arq = fopen("QuickSort 500.txt","w");
    }
    
    else if(tamanho == 5000)
    {
       arq = fopen("QuickSort 5000.txt","w");
    }
  
    else if(tamanho == 10000)
    {
       arq = fopen("QuickSort 10000.txt","w");
    }                

    else if(tamanho == 30000)
    {
       arq = fopen("QuickSort 30000.txt","w");
    }

    if(arq == NULL)
    {

        printf("Erro ao criar arquivo Insertion sort!\n");
        exit(1);
    }

    escrever(arq,vet,direita);

    fclose(arq);
}

void troca(int* a, int* b)
{

    int aux;

    aux = *a;
    *a = *b;
    *b = aux;

}


