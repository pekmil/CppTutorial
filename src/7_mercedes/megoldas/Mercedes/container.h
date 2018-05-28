#ifndef TAROLO_H
#define TAROLO_H

#include <exception>

namespace Mercedes
{

template <class T>
class Container
{
    T *array;
    int size;
public:
    class InvalidIndexException : public std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return "Invalid index!";
        }
    };

    Container() :
        array(0),
        size(0)
    {
    }

    void addObject(const T &object)
    {
        T *tmp=new T[size+1];
        for (int i=0; i<size; i++)
        {
            tmp[i]=array[i];
        }
        delete [] array;
        array=tmp;
        array[size]=object;
        size++;
    }

    int getSize() const
    {
        return size;
    }

    const T &getObject(int index) const
    {
        if (index<0 || index>=size)
            throw InvalidIndexException();
        return array[index];
    }

    ~Container()
    {
        delete [] array;
    }
};

} // namespace Mercedes

#endif // TAROLO_H
