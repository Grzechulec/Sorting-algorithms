#ifndef SORTING_ALGORITHMS_INTROSORT_H
#define SORTING_ALGORITHMS_INTROSORT_H
#include <vector>
#include <cmath>
#include "heapsort.h"

// sortowanie introspektywne

template <typename T>
class IntroSort
{
public:
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        int M = 2*log(size(start, end))/log(2);
        sort(start, end, M);
    }

private:
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end, int M)
    {
        if(M>0)
        {
            if(size(start, end) > 1)
            {
                typename std::vector<T>::iterator pivot = median(start,start+size(end,start)/2, end-1);
                typename std::vector<T>::iterator itemL = start;
                typename std::vector<T>::iterator itemR = end-1;
                std::iter_swap(pivot, end-1);
                pivot = end-1;
                while(itemL < itemR)
                {
                    while(*itemL < *pivot && itemL < itemR)
                    {
                        itemL++;
                    }
                    while(*itemR >= *pivot && itemL < itemR)
                    {
                        itemR--;
                    }
                    if(itemL != pivot && itemR != pivot && itemL < itemR)
                    {
                        std::iter_swap(itemL, itemR);
                    }
                }
                std::iter_swap(pivot, itemL);
                pivot = itemL;
                sort(start, pivot, M-1);
                sort(pivot+1, end, M-1);
            }
        }
        else
        {
            HeapSort<T> heapsort;
            heapsort.sort(start, end);
        }
        
    }
    int size(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        return abs(end-start);
    }
    typename std::vector<T>::iterator median(typename std::vector<T>::iterator first, typename std::vector<T>::iterator mid, typename std::vector<T>::iterator last)
    {
        if(*first <= *mid && *first >= *last)
            return first;
        if(*first >= *mid && *first <= *last)
            return first;
        if(*first <= *mid && *mid <= *last)
            return mid;
        if(*first >= *mid && *mid >= *last)
            return mid;
        if(*first <= *last && *mid >= *last)
            return last;
        if(*first >= *last && *mid <= *last)
            return last;
    }

};
#endif //SORTING_ALGORITHMS_INTROSORT_H
