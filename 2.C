#include "stdafx.h"
#include "iostream"
#include <conio.h>
#include "locale.h"
#include "stdio.h"
#include "string.h"
 using namespace std;{
double arrDbl[] = {55.0,123.0,131};
    for(int i=0;i!=sizeof(arrDbl)/sizeof(double);i++)
        printf("arr[%d]=%lf\n",i,arrDbl[i]);
    _getch();
    system("cls");
    return 0;
}
