
![Runnables](https://drive.google.com/uc?export=view&id=1HcxPHQyblcnk_Q9JqNYpZ5fw47K8YE71)

# Runnables Session Labs

---

## Lab1 connections requirements

![Lab1](https://drive.google.com/uc?export=view&id=1r1PazTm5eiXvngA9Fw8eWJaEEjcbpEMV)

---

## Lab2 connections requirements

![Lab2](https://drive.google.com/uc?export=view&id=1795fGyj73Ku2mPSH2tdAqmaZB79MmT0C)

---

## How Lab2 code should look like

```c
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
```
---
