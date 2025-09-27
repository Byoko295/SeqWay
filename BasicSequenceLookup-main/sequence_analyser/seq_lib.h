#ifndef SEQ_LIB_H
#define SEQ_LIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

long long int ft_strlen(char *sequence);
bool is_base(char base);
void sequence_checker(char *sequence);
void base_number_and_ratios(char *sequence);
void search_for_sequence_A(char *parent);
#endif