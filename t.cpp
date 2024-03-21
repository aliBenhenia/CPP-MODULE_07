#include <iostream>
#include <string>
#include <vector>
 

template <typename T, class T2> class Vectorios{
    private :
        T *arr;
    public:
        void push(T new_data)
        {
            int i = 0;
            while (arr[i])
                i++;
            arr[i] = new_data;
        }
        T at(int index)
        {
            return(arr[index]);
        }
        void print()
        {
            int i = 0;
            while (arr[i])
            {
                std::cout << arr[i] << std::endl;
                i++;
            }
        }
};
 

int main()
{
    Vectorios<int,int> data;
    data.push(1);
    data.push(2);
    data.push(3);
    
    data.print();
    // std::cout << data.at(0) << std::endl;
    // std::cout << data.at(1) << std::endl;
    // std::cout << data.at(2) << std::endl;
    return (0);
}