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
}