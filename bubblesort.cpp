#include <iostream>

void bubble_sort(int *arr, int size)
{
    int tmp = 0;
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const int size = 5;
    int arr[size] = {7, 5, 3, 6, 4};
    print_array(arr, size);
    bubble_sort(arr, size);
    print_array(arr, size);
}