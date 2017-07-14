#include <iostream>
#include <vector>

void max_heapify(std::vector<int> &A , int i)
{
    int l =  i*2 + 1 ;
    int r =  i*2 + 2 ;
    
    int largest;

    if( l <= (A.size()-1) && A[l] > A[i])
    {
        largest = l ;
    }
    else
    {
        largest = i;
    }
    if( r <= (A.size()-1) && A[r] > A[ largest ] )
    {
        largest = r;    
    }
    if( largest != i)
    {
        std::swap( A[i] , A[largest] )
        max_heapify( A , largest );
    }
}

void build_max_heap( std::vector<int> &A)
{
    for( int i = (A.size()-1)/2 ; i >= 0 ; --i )
    {
        max_heapify( A , i );
    }
}

void heapsort( std::vector<int> &A )
{
    std::vector<int> tmp;
    build_max_heap(A);
    for(int i = A.size()-1 ; i >= 1 ; --i)
    {
        tmp.push_back( A.front() );
        std::swap(A[0], A[i]);
        A.pop_back();
        max_heapify( A , 0 );
    }
    tmp.push_back( A.back() );
    A = tmp;
}
