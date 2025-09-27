#include "seq_lib.h"

long long int ft_strlen(char *sequence)
{
    long long int i;

    i = 0;
    while(sequence[i])
        i++;
    return(i);
}

bool is_base(char base)
{
    if(base == 'A'|| base == 'C'|| base == 'T'|| base == 'G')
            return(1);
        return(0);
}

void DNA_sequence_checker(char *sequence)
{
    int i;
    long long seq_len;

    seq_len = ft_strlen(sequence);
    i = 0;
    while(i < seq_len)
    {
        if (!is_base(sequence[i]))
            {   
                printf("Sequence Failure : unrecognised base");
                exit(1);
            }
            i++;
    }
}