#ifndef SEQ_LIB_H
#define SEQ_LIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

long long int ft_strlen(char *sequence);
bool is_base(char base);
void DNA_sequence_checker(char *sequence);
void DNA_base_number_and_ratios(char *sequence);
void DNA_search_for_sequence_A(char *parent);
void DNA_search_for_sequence_A_all(char *parent);
void print_ll_array(long long *f_array);
#endif