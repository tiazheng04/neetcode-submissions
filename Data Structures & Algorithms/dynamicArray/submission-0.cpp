using namespace std;
#include <vector>

class DynamicArray {

vector<int> Array;
int Size;
int Capacity;
public:

    DynamicArray(int capacity) {
        Capacity = capacity;
        Size = 0;
        Array = vector<int>(capacity);
    }

    int get(int i) {
        return  Array[i];

    }

    void set(int i, int n) {
        Array[i] = n;
    }

    void pushback(int n) {
        if(Size == Capacity){
            resize();
        }
            Array[Size] = n;
            Size++;
    }

    int popback() {
        Size--;
        return Array[Size];
    }

    void resize() {
        Capacity = Capacity*2;
        Array.resize(Capacity);
    }

    int getSize() {
        return Size;
    }

    int getCapacity() {
        return Capacity;
    }
};
