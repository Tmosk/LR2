//
// Created by Tsimophey on 31-Mar-22.
//

#ifndef LR_1_NEW_FUNC_H
#define LR_1_NEW_FUNC_H

#endif //LR_1_NEW_FUNC_H
#include "stdlib.h"
#include<string.h>
#include <stdio.h>

union data{
    char data[100];
    int sNumber;
};
struct series{
    int epNumber;
    char Name[100];
    union data data;
    int validator;//0 - data, 1- s number;
};
//Generate random string at the specified address
void rand_str(char* str,int len);
//Generate array of series; requires  pointer to first element
struct series* generate(struct series* c,int size);
//Print all series fields
void print_str(struct series* c);
//Print all array of series
void print_list(struct series* c,int num);
//find serial with min season count
struct series *find_min(struct series *list, int size);
//Returns the address of a structure with the same data.data as the given
struct series *find_by_data_data(struct series *list, int size, const char* parameter);
//Delete element with right shifting
void delete_element(struct series *list, int *size, struct series *element);