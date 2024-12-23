#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    
        int arr[100];
        int size;
        
        heap(){
            arr[0]=-1;
            size=0;
        }
        
        void insert(int x){
            size++;
            int index = size;
            arr[index] = x;
            
            while(index>1)
            {
                int parent = index/2;   
                
                if(arr[parent]<arr[index])
                {
                    swap(arr[index],arr[parent]);
                    index = parent;
                }
                else return ;
            }
        }
        
        void deleteitem(){
            arr[1] = arr[size];
            size--;
            int i = 1;
            
            while(i<size)
            {
                int leftSide = 2*i;
                int rightSide = 2*i+1;
                
                if(arr[leftSide]>arr[i])
                {
                    swap(arr[leftSide],arr[i]);
                    i = leftSide;
                }
                
                else if(arr[rightSide]>arr[i])
                {
                    swap(arr[rightSide],arr[i]);
                    i = rightSide;
                }
                
                else return;
            }
        }
        
        void print(){
            for(int i=1;i<=size;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
};

void heapify(int arr[],int n, int i)
{
    int largest = i;
    int leftSide = 2*i;
    int rightSide = 2*i+1;
    
    if(leftSide<=n && arr[leftSide]>arr[largest])
    {
        largest = leftSide;
    }
    
    if(rightSide<=n && arr[rightSide]>arr[largest])
    {
        largest = rightSide;
    }
    
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    return;
}

void heapSort(int arr[],int n)
{
    int size = n;
    
    while(size>1)
    {
        swap(arr[size],arr[1]);
        size--;
        
        heapify(arr,size,1);
    }
}


int main(){
    // heap hp;
    // hp.insert(10);;
    // hp.insert(50);
    // hp.insert(5);
    // hp.insert(80);
    // hp.insert(3);
    // hp.insert(2);
    // hp.insert(1);
    
    // hp.deleteitem();
    
    int arr[9]={-1,50,12,80,19,40,100,82,102};
    int n = 8;
    
    // heap creation
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    
    
    heapSort(arr,n);
    
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // hp.print();
    return 0;
}








// starting from 0th index of array

#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    
    heap(){
        size = 0;
    }
    
    void insert(int x)
    {
        size = size+1;
        int index = size-1;
        arr[index] = x;
        
        while(index>0)
        {
            int parent = (index-1)/2;
            
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else return;
        }
    }
    
    void print(){
        for(int i=0;i<size;i++)
        {
           cout<<arr[i]<<" "; 
        }
    }
};

void heapify(int arr[],int n,int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

   
        if(left<n && arr[left]>arr[largest])
        {
            largest = left;
        }
        
        if(right<n && arr[right]>arr[largest])
        {
            largest = right;
        }
        
        if(largest!=i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
        
        else return ;
    
}

void heapSort(int arr[],int n){
    int size = n-1;
    
    while(size>0)
    {
        swap(arr[size],arr[0]);
        size--;
        
        heapify(arr,size,0);
    }
}


int main()
{
    int n = 8;
    int arr[n] = {10,211,13,40,65,36,77,80};
    

    // creating heap    
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    
    heapSort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}