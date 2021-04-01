/**
 * @file header.h
 * @author Nikhil Pothu
 * @brief 
 * @version 0.1
 * @date 2021-03-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEADER_H__
#define __HEADER_H__
typedef enum error_t{
    ErrorDivByZero=-2,
    ERROR_NULL_PTR = -1,
    Success=0
}error_t;
typedef struct complex{
    float real;
    float img;
}complex;
error_t complex_sum(complex* c1,complex* c2,complex* result);
error_t complex_sub(complex* c1,complex* c2,complex* result);
error_t complex_mul(complex* c1,complex* c2,complex* result);
error_t complex_div(complex* c1,complex* c2,complex* result);
#endif