#include <iostream>
#include <windows.h>  
#include <conio.h> 
#include "function.h"

using namespace std;

// 1) Task 
int* delet_first(int* array, int& size) {

    int* new_array = new int[size - 1];

    for (int i = 0; i < size; i++)
    {
        new_array[i - 1] = array[i];
    }
    delete[] array;
    size--;
    return new_array;
}

// 2) Task
int* delet_center(int* array, int& size, int index) {

    int* new_array = new int[size - 1];

    for (int i = 0; i < size; i++)
    {
        if (index > i) {
            new_array[i] = array[i];
        }
        else {
            new_array[i] = array[i + 1];
        }
    }
    delete[] array;
    size--;
    return new_array;
}

// 3) Task
int* delete_array(int* array, int& size) {
    size = 0;
    return array;
}

// 4) Task
int* delete_even(int* array, int& size) {

    int even = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 != 0) {
            even++;
        }
    }

    int* new_array = new int[even];
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 != 0) {
            new_array[j++] = array[i];
        }
    }
    size = even;
    delete[] array;
    return new_array;
}

// 5) Task
int* delete_more(int* array, int& size, int num) {

    int x = 0;

    for (int i = 0; i < size; i++)
    {
        if (num >= array[i]) {
            x++;
        }
    }

    int* new_array = new int[x];
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] < num) {
            new_array[j++] = array[i];
        }
    }
    delete[] array;
    size = x;
    return new_array;
}

// 7) Task
int* create_one_to_n(int number, int& size) {
    size = number;
    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    return arr;
}


int main() {
    int size = 5;
    int* ar = new int[size];

    for (int i = 0; i < size; i++)
    {
        ar[i] = i + 1;
    }

    //1) Task

    ar = delet_first(ar, size);

    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }

    //2) Task
    /*ar = delet_center(ar, size, 1);

    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }*/

    //3) Task
    /*delete_array(ar, size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }*/

    //4) Task
    /*delete_even(ar, size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }*/

    //5) Task
    /*delete_more(ar, size, 3);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }*/

    //7) Task
    /*int* ar = create_one_to_n(20 ,size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }*/
}

