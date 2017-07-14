#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
#include <functional>
#include <random>
#include <iterator>


void merge( std::vector<int> &A , const int p , const int q , const int r )
{
    int n1 = q - p + 1 ; 
    int n2 = r - q ;
    
    int L [ n1+1 ] , R [ n2+1 ] ;
    
    for( int i = 0 ; i < n1 ; ++i )
    {
        L[i] = A[ p + i ] ;
    }
    for( int i = 0 ; i < n2 ; ++i )
    {
        R[i] = A[ q + i + 1 ] ;
    }
    
    L[n1] = INT_MAX ;
    R[n2] = INT_MAX ;
    
    int i = 0 ; 
    int j = 0 ;

    for( int k = p ; k <= r ; ++k)
    {
        if( L[i] <= R[j] )
        {
            A[k] = L[i] ;
            ++i ;
        }
        else
        {
            A[k] = R[j];
            ++j ;
        }
    }
}


//function must sort vector's elements from p to r 

void merge_sort( std::vector<int> &A, const int p, const int r )
{
    if( p < r )
    {
        int q = ( p + r ) / 2 ; 
        merge_sort( A , p , q ) ;
        merge_sort( A , q+1 , r) ;
        merge( A , p , q , r) ;
    }
}

