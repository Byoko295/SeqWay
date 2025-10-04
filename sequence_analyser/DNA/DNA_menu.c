#include "../seq_lib.h"

void DNA_menu(char *sequence)
{
    int selection;

    printf("Selection :\n");
    printf("0 : Print DNA Composition \n");
    printf("1 : GC Ratio Within N window\n");
    printf("2 : Find first occurence of target sequence \n");
    printf("3 : Find all occurences of target sequence\n");
    printf("4 : Find first occurence of target sequence with Humming Method \n");
    printf("5 : Find all occurences of target sequence with Humming Method \n");
    scanf("%d", &selection);
    switch (selection)
{
    case 0:
        DNA_base_number_and_ratios(sequence);
        break;
    case 1:
        GC_method(sequence);
        break;
    case 2:
        search_for_sequence_A(sequence);
        break;
    case 3:
        search_for_sequence_A_all(sequence);
        break;
    case 4:
        search_for_sequence_A_all(sequence);
        break;
    case 5:
        break;
    default:
        printf("Please enter a valid value \n");
} 
}