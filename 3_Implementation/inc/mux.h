#ifndef _MUX_
#define _MUX_
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct mux_2x1{
    int _en;
    int _s1;
    int _d0;
    int _d1;
    int _res_2x1;
}mux_2x1;

typedef struct mux_4x1{
    int _en;
    int _s1;
    int _s2;
    int _d0;
    int _d1;
    int _d2;
    int _d3;
    int _res_4x1;
}mux_4x1;

typedef struct mux_8x1{
    int _en;
    int _s1;
    int _s2;
    int _s3;
    int _d0;
    int _d1;
    int _d2;
    int _d3;
    int _d4;
    int _d5;
    int _d6;
    int _d7;
    int _res_8x1;
}mux_8x1;

typedef enum error_t{
    PASS = 0,
    FAIL = -1,
    ERR_NEGATIVE = -2
}error_t;

error_t getDataFromFile1 (mux_2x1 *_values);
error_t getDataFromFile2 (mux_4x1 *_values);
error_t getDataFromFile3 (mux_8x1 *_values);
error_t MUX_2x1 (mux_2x1 *_value);
error_t MUX_4X1 (mux_4x1 *_value);
error_t MUX_8X1 (mux_8x1 *_value);

#endif
