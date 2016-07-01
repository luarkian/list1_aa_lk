
#define TAM1 100
#define TAM2 500
#define TAM3 5000
#define TAM4 10000
#define TAM5 30000


void gerar_arquivos(FILE *cem, FILE *quinhentos, FILE *cinco_mil, FILE *dez_mil, FILE *cem_mil);

void ler_arquivo(FILE *arq, int *vet, int tamanho);

void escrever(FILE *arq, int *vet, int tamanho);

void insert_sort( int *vet,int tamanho);

void merge_sort(int *vet, int inicio, int fim,int tamanho);

void quicksort(int *vet, int esquerda, int direita,int tamanho);

void troca(int* a, int* b);
