#include <iostream>
#include "Function.h"

using namespace std;

void ArrayIn(int A[])
{

    int temp = 0;

    for (int i = 0; i < 5; i++)
    {
        A[i] = rand() % 300;
        temp = A[i];
        ArrayOut(temp);
        
    }
    cout << endl;
    
}
void ArrayOut(int a)
{
  
    cout << " " << a << " ";
  
}
void ArrayMax(int A[])
{

    for (int i = 0; i < 5; i++)
    {
        if (A[0] < A[i])
        {
            A[0] = A[i];
        }

    }
    cout << " Максимальное число равно: " << A[0] << endl;
}
void ArrayMin(int A[])
{

    for (int i = 0; i < 5; i++)
    {

        if (A[0] > A[i])
        {
            A[0] = A[i];
        }
    }
    cout << " Минимальное число равно: " << A[0] << endl;
}

void ArrayInChar(char* A)
{

    char temp;

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        A[i] = rand() % 25;
      
        temp = A[i];
        ArrayOut(temp);

    }
    cout << endl;

}
void ArrayOutChar(char a)
{

    cout  << " " << a << " ";

}
void ArrayMaxChar(char* A)
{

    for (int i = 0; i < 256; i++)
    {
        if (A[0] < A[i])
        {
            A[0] = A[i];
        }

    }
    cout << " Максимальное число равно: " << A[0] << endl;
}
void ArrayMinChar(char* A)
{

    for (int i = 0; i < 256; i++)
    {

        if (A[0] > A[i])
        {
            A[0] = A[i];
        }
    }
    cout << " Минимальное число равно: " << A[0] << endl;
}

void ArrayInFloat(float A[])
{

    float temp = 0;

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        A[i] = rand() % 35;
        temp = A[i];
        ArrayOut(temp);

    }
    cout << endl;

}
void ArrayOutFloat(float a)
{

    cout << " " << a << " ";

}
void ArrayMaxFloat(float A[])
{

    for (int i = 0; i < 5; i++)
    {
        if (A[0] < A[i])
        {
            A[0] = A[i];
        }

    }
    cout << " Максимальное число равно: " << A[0] << endl;
}
void ArrayMinFloat(float A[])
{

    for (int i = 0; i < 5; i++)
    {

        if (A[0] > A[i])
        {
            A[0] = A[i];
        }
    }
    cout << " Минимальное число равно: " << A[0] << endl;
}