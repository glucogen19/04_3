#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class TPen {
	private:
    string FColor;
	public:
    string getColor() {
        return FColor;
    }
    void setColor(string newColor) {
        FColor = newColor;
    }
};

int main() {
	const int ARRAY_SIZE = 5;
    TPen pens[ARRAY_SIZE];
	
	ifstream inputFile("colors.txt");
	
	if (!inputFile) {
        cerr << "Failed to open the input file." << endl;
        return 1;
    }
	
	string color;
    int index = 0;
    while (getline(inputFile, color) && index < ARRAY_SIZE) {
        pens[index].setColor(color);
        index++;
    }
	
	cout << "Colors:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << pens[i].getColor() << endl;
    }

    return 0;
}