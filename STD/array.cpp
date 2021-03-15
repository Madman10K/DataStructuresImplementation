// This file in only in C++.
#include <stdio.h>
#include <stdlib.h>

template<typename T, size_t S>
class cpp_array
{
public:
    cpp_array()
    {
    }

    constexpr size_t size() const
    {
        return S;
    }

    T& at(size_t pos)
    {
        if (pos < S)
        {
            return arr[pos];
        }
    }

    T& operator[](size_t pos)
    {
        return at(pos);
    }

    const T& at(size_t pos) const
    {
        if (pos < S)
        {
            return arr[pos];
        }
    }

    const T& operator[](size_t pos) const
    {
        return at(pos);
    }

    T* data()
    {
        return arr;
    }

    const T* data() const
    {
        return arr;
    }
private:

    T arr[S];
};

int main()
{
    cpp_array<const char*, 5> arr;
}