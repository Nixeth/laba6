#include <iostream>
#include <conio.h>
using namespace std;
 
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
 
    for(int i = 0; i < 5; ++i)
    cout << "arr= " << arr[i] << endl; //тип int.
    
    for(int i = 0; i < 5; ++i)
    cout << "&arr[" << i << "]=" << &arr[i] << endl; //интервал адресов = 4, что соответсвует размеру резервируемое памятью под переменную типа int (4 байта).
 
    for(int i = 0; i < 5; ++i)
    *(arr + i) = i + 1;
    
    for(int i = 0; i < 5; ++i)
    cout << "arr= " << arr[i] << endl;
 
    //(arr+0) = (arr + 2);  //Происходит ошибка.
 
    int* pArr;
 
    pArr = (arr + 2);
    for(int i = 0; i < 2; ++i)
        cout << "*pArr= " << *(pArr + i) << endl; //дальше лучше не идти, потому что следующие ячейки памяти могут содержать какие угодно данные, возможно даже те, на которые у нас не будет прав доступа.
 
    getch();
}
