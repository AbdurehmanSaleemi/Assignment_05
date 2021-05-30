// Gym Header file to include other files and Libraries
#include "subscription.cpp"
#include <fstream>

template <typename T>
void increaseSize(T *&oldArr, int oldSize){
    int newSize = oldSize + 1;
    T *temp = new T[newSize];
    for (int i = 0; i < oldSize; i++)
    {
        temp[i] = oldArr[i];
    }
    oldSize = newSize;
    delete[] oldArr;
    oldArr = temp;
}