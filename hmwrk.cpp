#include <iostream>
using namespace std;

void printMinMax(int x, int y, int z) {
    int maxVal = max(max(x, y), z);
    int minVal = min(min(x, y), z);

    cout << "Minimum value: " << minVal << ", Maximum value: " << maxVal << endl;
}

int main(int argc, char* argv[]) {
    if(argc != 4) {
        cout << "Usage: " << argv[0] << " <value1> <value2> <value3>" << endl;
        return 1;
    }

    int val1 = atoi(argv[1]);
    int val2 = atoi(argv[2]);
    int val3 = atoi(argv[3]);

    printMinMax(val1, val2, val3);

    return 0;
}
