/*3) Que  entre com dados num vetor VET do tipo inteiro com 20 poisições, onde podem existir varios elementos
repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.*/

#include <stdio.h>
#define QTDE 3 // !!!!!!MUDAR PRA 10 DEPOIS!!!!!!!!!!!

int main()
{
    int vet1[QTDE], vet2[QTDE], indiceRepeat[QTDE];
    
    for (int i = 0; i<QTDE; i++)
        indiceRepeat[i]=0;
    
    for(int i = 0; i<QTDE; i++)
    {
        printf("\nDigite o %do valor: ", i+1);
        scanf("%d", &vet1[i]);
    }
    
    for(int i=0, i<QTDE; i++)
        if(indiceRepeat[i] == 0)
            for(int j = i+1; j<QTDE; j++)
            {
                
            }
    return 0;
}
