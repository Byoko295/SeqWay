#include "seq_lib.h"

/* Search_for_sequence_A

* Searches for the presence of the exacte input sequence in the Parent DNA

*input : Parent DNA + Asks for target sequence

*output : exacte position of the first ocuurence of target sequence in the parent DNA

**README :
        Does not look for truncated version of the target sequence
        ex :
                * parent ACTG
                * target ACTGG
                * output  NOT FOUND
*/

void DNA_search_for_sequence_A(char *parent)
{
        long long i;
        int flag;
        long long j = 0;
        char *sequence = NULL;

        printf("Insert the sequence you are looking for\n");
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
                        printf("Sequence Found at location %lli",j);
                        free(sequence);
                        return;
                }
                j++;
        }
        printf("Target sequence not found in parent DNA");
        free(sequence);
}

/* search_for_sequence_A_all

* Searches for the presence of the exacte input sequence in the Parent DNA

*input : Parent DNA + Asks for target sequence

*output : an Array of positions of found target sequence in the parent DNA

*/
void DNA_search_for_sequence_A_all(char *parent)
{
        long long i;
        long long k = 0;
        long long j = 0;
        int flag;
        char *sequence = NULL;
        long long *f_array = NULL;

        printf("Insert the sequence you are looking for\n");
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
                        f_array = realloc(f_array,(k + 1) *sizeof(long long)+1);
                        f_array[k] = j;
                        k++;
                }
                j++;
        }
        printf("tested %lli\n",f_array[0]);
        f_array[k] = '\0';
        if (k != 0)
        {
                printf("Target sequence found at Locations ");
                print_ll_array(f_array);
        }
        free(f_array);
        free(sequence);
}

