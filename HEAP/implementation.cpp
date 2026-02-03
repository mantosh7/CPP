#include<bits/stdc++.h>
using namespace std ;

class MaxHeap {
    int* arr ;
    int size ;  // current size of heap
    int total_size ;  // total size of heap

    public:
        MaxHeap(int n)
        {
            arr = new int[n] ;
            size = 0 ;
            total_size = n ;
        }

        void insert(int value)
        {
            if(size == total_size)
            {
                cout<<"Heap Overflow\n" ;
                return ;
            }

            arr[size] = value ;
            int index = size ;
            size++ ;

            // comparing with parent
            while(index>0 && arr[(index-1)/2] < arr[index])
            {
                swap(arr[(index-1)/2], arr[index]) ;
                index = (index-1)/2 ;
            }

            cout<<arr[index]<<" is inserted into the heap\n" ;
        }

        void print()
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" " ;
            }
        }
};

int main()
{
    MaxHeap H1(6) ;
    H1.insert(4) ;
    H1.insert(14) ;
    H1.insert(11) ;
    H1.insert(114) ;
    H1.insert(24) ;
    H1.insert(1) ;
    H1.print() ;

    return 0 ;
}