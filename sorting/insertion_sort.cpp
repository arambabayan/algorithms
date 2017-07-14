#include <iostream>
#include <vector>

void insertion_sort( std::vector<int>& V )
{
        int n = V.size() ;
	int key ;
        int j ;
        for( int i = 1 ; i < n ; ++i )
        {
                key = V [i] ;
                j = i - 1 ;
                
		while( j >= 0 && V [j] > key )
                {
                        V [ j + 1 ] = V [j] ;
                        --j;
		}
                
		V [ j + 1 ] = key ;
         }
}
