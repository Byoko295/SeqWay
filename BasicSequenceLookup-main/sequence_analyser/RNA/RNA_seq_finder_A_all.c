#include "../seq_lib.h"

/* search_for_sequence_A_all

* Searches for the presence of the exacte input sequence in the Parent DNA

*input : Parent DNA + Asks for target sequence

*output : an Array of positions of found target sequence in the parent DNA

*/
void RNA_search_for_sequence_A_all(char *parent)
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

        f_array[k] = '\0';
        if (k != 0)
        {
                printf("Target sequence found at Locations ");
                print_ll_array(f_array);
        }
        free(f_array);
        free(sequence);
}