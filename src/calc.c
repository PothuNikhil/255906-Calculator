#include<stdio.h>
#include "header.h"
#include<math.h>
error_t complex_sum(complex* c1, complex* c2, complex* result)
{
    if(NULL == c1 || NULL == c2)
        return ERROR_NULL_PTR;
    
    
    result->real = c1->real + c2->real;
    result->img = c1->img + c2->img;

    return Success;

}

error_t complex_sub(complex* c1, complex* c2, complex* result)
{
    if(NULL == c1 || NULL == c2)
        return ERROR_NULL_PTR;
    
    
    result->real = c1->real - c2->real;
    result->img = c1->img - c2->img;

    return Success;

}

error_t complex_mul(complex* c1, complex* c2, complex* result)
{
    if(NULL == c1 || NULL == c2)
        return ERROR_NULL_PTR;
    
    
    result->real = (c1->real * c2->real) - (c1->img * c2->img);
    result->img = (c1->real * c2->img) + (c1->img * c2->real);

    return Success;

}

error_t complex_div(complex* c1, complex* c2, complex* result)
{
    if (c2->real==0 && c2->img==0)
    {
        return ErrorDivByZero;
    }

    else if(c2 == NULL || c1 ==NULL)
        return ERROR_NULL_PTR;
    
    else{
    result->real = ((c1->real * c2->real) + (c1->img * c2->img)) / (pow(c2->real,2) + pow(c2->img,2));
    result->img = ((c1->img * c2->real) - (c1->real * c2->img)) / (pow(c2->real,2) + pow(c2->img,2));
    
    return Success;
    }
}