#include "../seq_lib.h"

/* Search_for_sequence_A

* Searches for the presence of the exacte input sequence in the Parent RNA

*input : Parent RNA + Asks for target sequence

*output : exacte position of the first ocuurence of target sequence in the parent RNA

**README :
        Does not look for truncated version of the target sequence
        ex :
                * parent ACUG
                * target ACUGG
                * output  NOT FOUND
*/

void RNA_search_for_sequence_A(char *parent)
{
        long long i;
        int flag;
        long long j = 0;
        char *sequence = NULL;

        printf("Insert the RNA sequence you are looking for\n");
        scanf("%ms", &sequence);
        while(parent[j] != '\0')
        {
                i = 0;
                flag = 0;
                while(sequence[i] != '\0' && flag != 1)
                {
                        if(sequence[i] != parent[j+i])
                                flag = 1;
                        i++;
                }
                if(flag == 0)
                {
                        printf("RNA Sequence Found at location %lli",j);
                        free(sequence);
                        return;
                }
                j++;
        }
        printf("Target RNA sequence not found in parent RNA");
        free(sequence);
}



