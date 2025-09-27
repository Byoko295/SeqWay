#include "seq_lib.h"

void base_number_and_ratios(char *sequence)
{
    int i;
    long long int A = 0,C = 0,T = 0,G = 0;
    long double ratio[4];
    //long double len;
    i = 0;
    while(sequence[i])
    {
        if(sequence[i] == 'A')
            A++;
        else if(sequence[i] == 'T')
            T++;
        else if(sequence[i] == 'C')
            C++;
        else if(sequence[i] == 'G')
            G++;
        i++;
    }

    long long int len_i = strlen(sequence);
long double len_ld = (long double) len_i;

printf("DEBUG: len_i = %lld\n", len_i);          // integer length
printf("DEBUG: len_ld = %.2Lf\n", len_ld);      // floating-point length


    printf("DEBUG: sequence = '%s'\n", sequence);
    printf("DEBUG: ft_strlen = %lld\n", ft_strlen(sequence));
    printf("Length of the sequence is %Lf \n",(double long)strlen(sequence));
    printf("number of occurences\n");
    printf("A : %lli  \nC : %lli   \nT : %lli \nG : %lli \n",A,C,T,G);
    if(ft_strlen(sequence) != 0)
    {
    ratio[0] = (double long) A  / strlen(sequence) * 100.0;
    ratio[1] = (double long) G  / strlen(sequence) * 100.0;
    ratio[2] = (double long) T  / strlen(sequence) * 100.0;
    ratio[3] = (double long) C  / strlen(sequence) * 100.0;
    }
    printf("DEBUG: len = %lli, A = %lli, C = %lli, T = %lli, G = %lli\n",
       ft_strlen(sequence), A, C, T, G);
    printf("--------------------------------------\nPercentages\n");
    printf("A : %.2Lf %% \nC : %.2Lf %%  \nT : %.2Lf %%\nG : %.2Lf %%\n",ratio[0],ratio[1],ratio[2],ratio[3]);
}

