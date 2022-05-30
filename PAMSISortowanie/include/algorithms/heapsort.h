#ifndef SORTING_ALGORITHMS_HEAPSORT_H
#define SORTING_ALGORITHMS_HEAPSORT_H
#include <vector>
#include <cmath>

// sortowanie przez kopcowanie

template <typename T>
class HeapSort
{
public:
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        //heap creation
        typename std::vector<T>::iterator i = start + size(end, start)/2 - 1;
        while(i >= start)
        {
            heapify(start, end, i);
            i--;
        }

        //heap deconstruction
        i = end - 1;
        while(i > start)
        {
            std::iter_swap(start, i);
            heapify(start, i, start);
            i--;
        }

    };
private:
    void heapify (typename std::vector<T>::iterator start, typename std::vector<T>::iterator end, typename std::vector<T>::iterator index)
    {
        typename std::vector<T>::iterator biggest = index;
        typename std::vector<T>::iterator left = start + 2 * size(start, index) + 1;
        typename std::vector<T>::iterator right = start + 2 * size(start, index) + 2;

        if(left < end && *left > *biggest)
        {
            biggest = left;
        }
        if(right < end && *right > *biggest)
        {
            biggest = right;
        }
        if(biggest != index)
        {
            std::iter_swap(biggest, index);
            heapify(start, end, biggest);
        }
    }
    int size(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        return abs(end-start);
    }
};

#endif //SORTING_ALGORITHMS_HEAPSORT_H
