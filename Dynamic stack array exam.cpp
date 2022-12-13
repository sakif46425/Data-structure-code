#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class myStack
{
    size_t capacity {0};
    size_t size {0};
    int *data = NULL;
public:
    void push(int n)
    {
        if (size == capacity)
        {
            cout << "Increase capacity by 5 elements" << endl;
            capacity += 5;
            int* tmp = new int[capacity];
            copy_n(data, size, tmp);
            swap(data, tmp);
            delete[] tmp;
        }

        data[size] = n;
        ++size;
    }

    void print_all()
    {
        cout << "capacity=" << capacity << endl;
        for (size_t i = 0; i < size; ++i)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main(void) {
    myStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.print_all();
    s.push(6);
    s.print_all();
    return 0;
}
