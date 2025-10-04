#include "seq_lib.h"

void main_menu(char *sequence)
{
    int selection;

    printf("Selection :\n");
    printf("1 : DNA \n");
    printf("2 : RNA \n");
    printf("3 : PROT \n");
    scanf("%d", &selection);
    switch (selection)
{
    case 1:
        DNA_sequence_checker(sequence);
        DNA_menu(sequence);
        break;
    case 2:
        RNA_sequence_checker(sequence);
        break;
    case 3:
        ACIDE_sequence_checker(sequence);
        break;    
    default:
        printf("Please enter a valid value \n");
}

}