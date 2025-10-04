#ifndef SEQ_LIB_H
#define SEQ_LIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/* PARSING SEQUENCES FOR ERRORS*/
void DNA_sequence_checker(char *sequence);
void RNA_sequence_checker(char *sequence);
void ACIDE_sequence_checker(char *sequence);
/* UTILS*/
bool DNA_is_base(char base);
bool RNA_is_base(char base);
bool ACIDE_is_base(char base);
/* AMOUNT AND RATIOUS*/
void DNA_base_number_and_ratios(char *sequence);
void RNA_base_number_and_ratios(char *sequence);
void ACIDE_base_number_and_ratios(char *sequence);
/* COMMON UTILS*/
long long int ft_strlen(char *sequence);
void search_for_sequence_A(char *parent);
void search_for_sequence_A_all(char *parent);
void print_ll_array(long long *f_array);
void GC_method(char *sequence);long long GC_ratio(char *sequence, long long window);
/* SPECIFIC MENUS*/
void DNA_menu(char *sequence);
void RNA_menu(char *sequence);
void ACIDE_menu(char *sequence);
/*MAIN*/
void main_menu(char *sequence);
long long GC_method(char *sequence);
#endif