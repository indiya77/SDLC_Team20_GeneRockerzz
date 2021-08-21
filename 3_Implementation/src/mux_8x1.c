#include <stdio.h>
#include "mux.h"

error_t getDataFromFile1 (mux_8x1 *_values){
    FILE *fp = NULL;
    fp = fopen ("mux.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!"); 
       return FAIL;
    }
    else
    {
    for (int i=0; i<12; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                _values->_en = atoi(str);
                break;
            case 1:
                _values->_s1 = atoi(str);
                break;
            case 2:
                _values->_s2 = atoi(str);
                break;
            case 3:
                _values->_s3 = atoi(str);
                break;
            case 4:
                _values->_d0 = atoi(str);
                break;
            case 5:
                _values->_d1 = atoi(str);
                break;
            case 6:
                _values->_d2 = atoi(str);
                break;
            case 7:
                _values->_d3 = atoi(str);
                break;
            case 8:
                _values->_d4 = atoi(str);
                break;
            case 9:
                _values->_d5 = atoi(str);
                break;
            case 10:
                _values->_d6 = atoi(str);
                break;
            case 11:
                _values->_d7 = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}
error_t MUX_8x1 (mux_8x1 *_values){
    if(_values->_en==1){
        if(_values->_s1==0 && _values->_s2==0 && _values->_s3==0) {
            _values->_res_8x1 = _values->_d0;
        }
        if(_values->_s1==0 && _values->_s2==0 && _values->_s3==1) {
            _values->_res_8x1 = _values->_d1;
        }
          if(_values->_s1==0 && _values->_s2==1 && _values->_s3==0) {
            _values->_res_8x1 = _values->_d2;
        }
        if(_values->_s1==0 && _values->_s2==1 && _values->_s3==1) {
            _values->_res_8x1 = _values->_d3;
        }
        if(_values->_s1==1 && _values->_s2==0 && _values->_s3==0) {
            _values->_res_8x1 = _values->_d4;
        }
        if(_values->_s1==1 && _values->_s2==0 && _values->_s3==1) {
            _values->_res_8x1 = _values->_d5;
        }
        if(_values->_s1==1 && _values->_s2==1 && _values->_s3==0) {
            _values->_res_8x1 = _values->_d6;
        }
        if(_values->_s1==1 && _values->_s2==1 && _values->_s3==1) {
            _values->_res_8x1 = _values->_d7;
        }
     
    }
    if (_values == NULL){
        return FAIL;
    }
    else if (_values->_res_8x1 < 0){
        return ERR_NEGATIVE;
    }
    else{
        return PASS;
    }
   // return 0;
}













