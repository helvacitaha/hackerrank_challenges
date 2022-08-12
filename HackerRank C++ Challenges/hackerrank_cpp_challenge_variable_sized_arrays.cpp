#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>

int main(){
    
    int number_of_arrays,number_of_values_wanted;
    std::cin>>number_of_arrays>>number_of_values_wanted;
    int arrays[number_of_arrays][100000];
    
    for(int i=0;i<number_of_arrays;i++)
    {
        
        int array_size;
        std::cin>>array_size;
        for(int j=0;j<array_size;j++)
        {
            
            std::cin>>arrays[i][j];
            
        }
        
    }
    
    for(int i=0;i<number_of_values_wanted;i++)
    {
        
        int a,b;
        std::cin>>a>>b;
        std::cout<<arrays[a][b];
        
    }
    
    return 0;
    
}
