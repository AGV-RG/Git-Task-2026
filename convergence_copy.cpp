#include <iostream>
#include <algorithm>

int main()
{
    int t , n , left , right ,*a; 

    std::cin>>t;
    for(int j = 0 ; j<t ; j++)
    {
        std::cin>>n;
        a = new int[n];
        left = 0 ;
        right = 0;

        for(int i = 0 ; i< n ; i++)
        {
            std::cin>>a[i];
        }
        std::sort(a , a+n);
        //median = a[n/2]
        for(int i =  0 ; i < n ; i++)
        {
            if(a[i]==a[n/2])continue;
            if(a[i] > a[n/2])right++;
            else left++;
        }
        if(left>right) std::cout<<left<<"\n";
        else std::cout<<right<<"\n";
        delete[] a;
    }

 //some file change
 //1
 //2
    return 0;
}