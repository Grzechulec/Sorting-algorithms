#ifndef SORTING_ALGORITHMS_QUICKSORT_H
#define SORTING_ALGORITHMS_QUICKSORT_H
#include <vector>
#include <cmath>


template <typename T>
class QuickSort
{
public:
    void sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        if(size(start, end) > 1)
        {
            typename std::vector<T>::iterator pivot = median(start, start+size(start,end)/2, end-1);
            //printf("pivot: %d \n",*pivot);
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
                if((itemL != pivot && itemR != pivot) && itemL < itemR)
                {
                    //std::printf( "swap: %i %i   pivot: %i \n", *itemL, *itemR, *pivot);
                    std::iter_swap(itemL, itemR);
                }
            }
            std::iter_swap(pivot, itemL);
            //std::printf("swap: %i %i\n", *pivot, *itemL);
            pivot = itemL;
            sort(start, pivot);
            //std::cout << size(pivot+1,end);
            sort(pivot+1, end);
        }
    };

private:
    int size(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end)
    {
        return abs(end - start);
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
#endif //SORTING_ALGORITHMS_QUICKSORT_H
