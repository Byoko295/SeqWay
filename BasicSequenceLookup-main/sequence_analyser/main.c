#include "seq_lib.h"

int main(int argc, char **argv)
{ 
    int i;

    i = 0;
    if(argc != 2)
    {
        printf("Argument error");
        return(0);
    }
    sequence_checker(argv[1]);
    base_number_and_ratios(argv[1]);
    search_for_sequence();
   // sequence_finder(argv[1]);
    return(0);
}