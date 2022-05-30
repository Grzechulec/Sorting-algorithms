#ifndef SORTING_ALGORITHMS_MERGESORT_H
#define SORTING_ALGORITHMS_MERGESORT_H
#include <vector>

// sortowanie przez scalanie

template <typename T>
class MergeSort
{
public:
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        unsigned int size = end - start ;
        typename std::vector<T>::iterator mid = start + (size / 2) - 1;
        if(size > 1)
        {
            sort(start, mid+1);
            sort(mid+1, end);
            merge(start, mid, end, size);
        }
    };

private:
    void merge(typename std::vector<T>::iterator start, typename std::vector<T>::iterator mid, typename std::vector<T>::iterator end, int size)
    {
        typename std::vector<T> tempArray(size);
        typename std::vector<T>::iterator tempMerge = tempArray.begin();
        //typename std::vector<T>::iterator tempMerge2 = tempArray.begin();
        typename std::vector<T>::iterator left = start;
        typename std::vector<T>::iterator right = mid+1;
        
        while (left <= mid && right < end)
        {
            if(*left > *right)
            {
                *tempMerge = *right;
                right++;
                tempMerge++;
            }
            else
            {
                *tempMerge = *left;
                left++;
                tempMerge++;
            }
        }
        while (left <= mid)
        {
            *tempMerge = *left;
            left++;
            tempMerge++;
        }
        while (right < end)
        {
            *tempMerge = *right;
            right++;
            tempMerge++;
        }

        left = start;
        tempMerge = tempArray.begin();
        while(left < end)
        {
            *left = *tempMerge;
            left++;
            tempMerge++;
        }
    }
};

#endif //SORTING_ALGORITHMS_MERGESORT_H
