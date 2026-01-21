#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

//배열을 함수에 전달.
void PrintArray(int* array, int length)
{
    //size_t size = sizeof(array);

    for (int i = 0; i < length; ++i)
    {
        std::cout << array[i] << "\n";
    }



}

int main()
{
    int array[10] = {};

    memset(array, 0, sizeof(int) * 10);

    array[0] = 1;
    array[1] = 2;
    array[2] = 10;


    //array[10] = 10;



    int* arrayptr = array;


    *(arrayptr + 1) = 20;






    PrintArray(array, 10);


    //for (const int& item : array)
    //{
    //    std::cout << item << "\n";
    //}



    //   배열 동작 할당               힙영역에 할당
    int* dynamicArray = new int[10];
    memset(dynamicArray, 1, sizeof(int) * 10);

    for (int i = 0; i < 10; ++i)
    {
        dynamicArray[i] = i + 1;
    }

    


}