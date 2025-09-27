#include "seq_lib.h"

void    print_ll_array(long long *f_array)
{
    int i;

    i = 0;
    printf("%lli-",f_array[i]);
    i++;
    while (f_array[i])
    {
        printf("%lli-",f_array[i]);
        i++;
    }
}
