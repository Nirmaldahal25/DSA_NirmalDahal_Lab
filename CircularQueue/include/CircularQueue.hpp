#include <utility>
#include <iostream>

template <typename T, int sizeT>
class CircularQueue
{
    public:
        CircularQueue():m_rear(0),m_front(0),m_entried(0)
        {
            m_size = sizeT;
        }

        bool isEmpty()const
        {
            return m_entried == 0;
        }

        bool isFull() const
        {
            return m_rear == m_front && m_entried == m_size;
        }

        bool enqueue(T value)
        {
            if( !isFull())
            {
                m_arr[m_rear] = value;
                m_rear = (m_rear + 1)%m_size;
                m_entried++;
                return true;
            }
            return false;
        }

        decltype(auto) dequeue()
        {
            if(!isEmpty())
            {
                const int temp = m_front++;
                m_front %= m_size;
                m_entried--;
                return std::move(m_arr[temp]);
            }
            throw "Queue is Full";
        }

	T front()
	{
		if(!isEmpty())
		{
			return m_arr[m_front];
		}
        throw "Queue is empty";
	}
	
	T back()
	{
		if(!isEmpty())
		{
			if(m_rear ==0)
            {
                return m_arr[m_rear + m_size-1];
            }
            else
            {
                return m_arr[m_rear - 1];
            }
		}
        throw "Queue is empty";
	}

    private:
        T m_arr[sizeT];
        int m_rear;
        int m_front;
        int m_entried;
        int m_size;
};

