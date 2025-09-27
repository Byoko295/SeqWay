#include "seq_lib.h"

void search_for_sequence_A(char *parent)
{
        long long i;
        int flag;
        long long j;
        char *sequence = NULL;
        j = 0;
        flag = 0;
        i = 0;
        printf("Insert the sequence you are looking for\n");
        scanf("%ms", &sequence);
        while(parent[j] != '\0' && flag != 1)
        {
                i = 0;
                while(sequence[i] != '\0' && flag != 1)
                {
                        if(sequence[i] != parent[j+i])
                        {
                                flag = 1;
                                printf("Sequence not found\n");
                                return;
                        }
                        i++;
                }
                j++;
        }
        if(flag != 1)
                printf("Sequence found at localisation %lli\n",j);
}