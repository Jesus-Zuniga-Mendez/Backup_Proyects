

#include <vector>

template <typename D>
class Queue
{

public:
    Queue(){};

    Queue(const Queue &orig){};

    ~Queue(){};

    void enqueue(D d)
    {
        this->a.push_back(d);
    }

    D dequeue()
    {
        if (this->a.size() > 0)
        {
            D d = this->a.at(0);
            auto it = this->a.begin();
            this->a.erase(it);
            return d;
        }
        else
        {
            D d;
            return d;
        }
    }

private:
    vector<D> a;
};