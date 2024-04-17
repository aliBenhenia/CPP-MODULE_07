#include <iostream>
#include <string>

// function templates 

template <typename T>
void print(T var)
{
    std::cout << var << std::endl;
}
template <typename T>
T give(T var)
{
    return var;
}

int max_(int a, int b)
{
    if (a > b)
        return (a);
    return b;
}

class MyInt
{
    private:    
        int x;
    public:
        MyInt(int x):x(x){}
        void print(){std::cout << x << std::endl;}
        bool operator <(MyInt obj)
        {
            if (obj.x > this->x)
                return true;
            return false;
        }
        MyInt & operator =(MyInt obj)
        {
            this->x = obj.x;
            return (*this);
        }
        MyInt &testt(MyInt obj)
        {
            this->x = obj.x;
            return (*this);
        }
};

int main()
{
    // print(1);
    // print(1.7);
    // print("hello");
    // print(false);
    // std::cout << give<double>(97) << std::endl;
    // std::cout << give<float>(6.88877) << std::endl;
    // std::cout << give(false) << std::endl;
    // std::cout << give("hello") << std::endl;
    // std::cout << max_(11,11) << std::endl;

    // MyInt a(8);
    // MyInt b(3);
    // bool res = a < b;
    // std::cout << (a < b) << std::endl;

    // std::string s1 = "ali";
    // std::string s2 = "aya";

    // if (s1 > s2)
    //     std::cout << "s1" << std::endl;
    // else
    //     std::cout << "s2" << std::endl;

    std::cout << (1.933332 > 1.44) << std::endl;
}




