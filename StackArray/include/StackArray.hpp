template <class T, int sizeT>
class StackArray
{
    public:
        StackArray():index(-1)
        {
        }

        void push(T _val)
        {
            if(!isFull())
            {
                m_arr[++index] = _val;
            }
        }

        T pop()
        {
            if(!isEmpty())
            {
                return m_arr[index--];
            }
            throw "array is empty";
        }

        T top()
        {
            return m_arr[index];
        }

        bool isFull() const
        {
            return index+1 == sizeT;
        }

        bool isEmpty() const
        {
            return index < 0;
        }


    private:
        T m_arr[sizeT];
        int index;
};

