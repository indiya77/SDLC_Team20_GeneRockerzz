#ifndef __ADDER_H__
#define __ADDER_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct halfadder{
    int A;
    int B;
    int sum;
    int carry;
}hf_adder;

typedef struct fulladder{
    int A;
    int B;
    int C;
    int sum;
    int carry;
}fl_adder;

typedef enum error_t{
    PASS = 0,
    FAIL = -1,
}error_t;

error_t getDataFromHalfAdderFile (hf_adder *param);
error_t getDataFromFullAdderFile (fl_adder *param);
error_t halfadder (hf_adder *param);
error_t fulladder (fl_adder *param); 

#endif