#include <Windows.h>
#include <iostream>
#include "Function.h"

using namespace std;

//Препроцессор.
//Не понимаю задания...

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int Arr[5];
    char* ArrChar = new char [5] {};
    float ArrFloat[5];

    ArrayIn(Arr);
    ArrayMin(Arr);
    ArrayMax(Arr);

    ArrayInChar(ArrChar);
    ArrayMinChar(ArrChar);
    ArrayMaxChar(ArrChar);

    ArrayInFloat(ArrFloat);
    ArrayMinFloat(ArrFloat);
    ArrayMaxFloat(ArrFloat);

}


 