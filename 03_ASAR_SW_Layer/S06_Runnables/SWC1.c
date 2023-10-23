#include "RTE_SWC1.h"

void SUM()
{
    Std_ReturnType status = E_NOT_OK;
    unsigned short x, y;
    unsigned int z = 0;

    status = RTE_Read_SR_PP_Sum_Val1(&x);
    status = RTE_Read_SR_RP_Sum_Val2(&y);

    z = x + y;

    status = RTE_Write_SR_PP_Sum(z);
}