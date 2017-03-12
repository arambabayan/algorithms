#include <iostream>
#include <vector>

std::vector<int> insertion_sort( std::vector<int> V )
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
	return V;

}


int main()
{
	
//n shows the size of the vector
	int n ;
	std::cin >> n ;
	
//vector that we want to sort
	std::vector<int> arr( n ) ;
	for ( int i = 0 ; i < n ; ++i )
	{
		std::cin >> arr [i] ;
	} 
//sorted vector
	std::vector<int> sorted_arr ( insertion_sort ( arr ) ) ;

//print to screen	
	for ( std::vector<int>::iterator it = sorted_arr.begin() ; it != sorted_arr.end() ; ++it)
	{
		std::cout << *it << ' ' ;
	}
	
	return 0;
}
