class DynamicArray {
public:
    int size = 0;
    int capacity = 0;
    int* arr;
    DynamicArray(int _capacity) {
       capacity = _capacity;
       arr = new int[capacity];
       size = 0;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == capacity) {
            resize();
        }
        arr[size] = n;
        size = size + 1;
    }

    int popback() {
        int val = arr[size-1];
        size = size - 1;
        return val;
    }

    void resize() {
        capacity = 2 * capacity;
        int* newArr = new int[capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
