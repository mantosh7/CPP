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

        void Heapify(int index)
        {
            int largest = index ;
            int left = 2*index+1 ;
            int right = 2*index+2 ;

            // largest will store the index of the element which is greater between parent, left child and right child

            if(left<size && arr[left]>arr[largest]) largest = left ;
            if(right<size && arr[right]>arr[largest]) largest = right ;

            if(largest != index)
            {
                swap(arr[largest], arr[index]) ;
                Heapify(largest) ;
            }
        }

        void Delete()
        {
            if(size == 0)
            {
                cout<<"Heap Underflow\n" ;
                return ;
            }

            cout<<arr[0]<<" deleted from teh heap.\n" ;
            arr[0] = arr[size-1] ;
            size-- ;
            Heapify(0) ;
        }
};

int main()
{
    MaxHeap H1(6) ;
    H1.insert(4) ;
    H1.insert(14) ;
    H1.insert(11) ;
    H1.Delete() ;
    H1.insert(114) ;
    H1.insert(24) ;
    H1.insert(1) ;
    H1.print() ;

    return 0 ;
}