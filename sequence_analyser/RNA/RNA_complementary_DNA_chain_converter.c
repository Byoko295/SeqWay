#include "seq_lib.h"

/*Global variable used to store Translated DNA to RNA for future USE*/
char *stored_RNA_of_complementary_DNA_chain = NULL;


int RNA_specific_char(char *base)
{
    if (base == 'A' || base == 'C' || base == 'G')
        return (1);
    else if (base == 'T')
        return (0);
}

void RNA_converte_of_sequence_complementary_chain(char *DNA_sequence)
{
    long long int len,i = 0;

    if(stored_RNA_of_complementary_DNA_chain)
        free(stored_RNA_of_complementary_DNA_chain);
    len = (long long int) strlen(DNA_sequence);
    stored_RNA_of_complementary_DNA_chain = malloc(len + 1);
    if (!stored_RNA_of_complementary_DNA_chain)
    {
        perror("Failed to allocate memory for stored_RNA_of_complementary_chain \n");
        exite(1);
    }
    while(i < len)
    {
        if (DNA_sequence[i])
            stored_RNA_of_complementary_DNA_chain[i] = DNA_sequence[i];
        else
            stored_RNA_of_complementary_DNA_chain[i] = 'U';
        i++;
    }
    stored_RNA_of_complementary_DNA_chain[i] = '/0';
}