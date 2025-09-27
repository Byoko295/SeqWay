#include "seq_lib.h"

void base_number_and_ratios(char *sequence)
{
    int i;
    long double A = 0,C = 0,T = 0,G = 0;

    i = 0;
    while(sequence[i])
    {
        if(sequence[i] == 'A')
            A++;
        if(sequence[i] == 'T')
            T++;
        if(sequence[i] == 'C')
            C++;
        if(sequence[i] == 'G')
            G++;
        i++;
    }
    printf("Length of the sequence is %lli \n",ft_strlen(sequence));
    printf("number of occurences\n");
    printf("A : %Lf  \nC : %Lf   \nT : %Lf \nG : %Lf \n",A,C,T,G);
    A = A  / ft_strlen(sequence) * 100;
    G = G  / ft_strlen(sequence) * 100;
    T = T  / ft_strlen(sequence) * 100;
    C = C  / ft_strlen(sequence) * 100;
    printf("--------------------------------------\nPercentages\n");
    printf("A : %Lf %% \nC : %Lf %%  \nT : %Lf %%\nG : %Lf %%\n",A,C,T,G);
}

