#include "seq_lib.h"

DNA_to_RNA_converter(char *DNA_sequence)
{
    int i;
    long long seq_len;

    seq_len = ft_strlen(DNA_sequence);
    i = 0;
    while(i < seq_len)
    {
        if (DNA_sequence[i] == 'T')
            DNA_sequence[i] = 'U';
        i++;
    }
}