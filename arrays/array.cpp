#include <cstdio>
#include <vector>

class ArrayInt {
public:
    ArrayInt(){
        myArray[0] = 0;
        myArray[1] = 1;
        myArray[2] = 2;
        myArray[3] = 3;
        myArray[4] = 4;
        myArray[5] = 5;
        myArray[6] = 6;
        myArray[7] = 7;
        myArray[8] = 8;
        myArray[9] = 9;

    }
    
    void printArray() {
        for (size_t i = 0; i < 10; ++i) {
            printf("%d ", myArray[i]);
        }
    }
private:
    int myArray[10];
};

int main(int argc, char const *argv[])
{
    ArrayInt array_int;
    array_int.printArray();
    return 0;
}
