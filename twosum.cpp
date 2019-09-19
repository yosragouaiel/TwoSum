#include <stdexcept>
#include <iostream>
#include <vector>
#include<map>
#include <utility>

std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    auto m = std::map<int, int>();
   
    for(int i=0; i<list.size();++i)
    {
        int key=sum-list[i];
        if(m.find(key)!=m.end())
        {
            
            return std::make_pair(m[key],i);
        }
        m[list[i]]= i;
    }
    
    return std::make_pair(-1,-1);
}

#ifndef RunTests
int main()
{
    std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 10);
    std::cout << indices.first << '\n' << indices.second;
}
#endif
