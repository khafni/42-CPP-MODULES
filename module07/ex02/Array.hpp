#ifndef ARRAY_H
# define ARRAY_H
#include <exception>
#include <iostream>

class MyException: public std::exception
{
    const char * what () const throw()
    {
        return ("wrong index");
    }
};

template<class T>
class Array
{
    unsigned int len;
    T *arr;
    public:
        Array(): len(0), arr(NULL) {}
        Array(unsigned int n)
        {
            this->len = n;
            arr = new T[n];
        }
        unsigned int size() const
        {
            return (len);
        }
        ~Array()
        {
            if (this->arr)
                delete[] this->arr;
        }
        Array(const Array&anArray)
        {
            this->len = anArray.len;
            this->arr = new T[anArray.len];
            for (int i = 0; i <this->len; i++)
            {
                this->arr[i] = anArray.arr[i];
            }
        }

        Array &operator=(const Array&anArray)
        {
            this->len = anArray->len;
            this->arr = new T[anArray->len];
            for (int i = 0; i <this->len; i++)
            {
                this->arr[i] = anArray->arr[i];
            }
            return (*this);
        }

        T &operator[](int index)
        {
            if (index < 0 || index >= len)
            {
                throw (MyException());
            }
            return (this->arr[index]);
        }
};

#endif