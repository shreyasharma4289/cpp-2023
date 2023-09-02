#include<iostream>
using namespace std;

class StringCounter {
private:
    string text;
    string target;
public:
    StringCounter(const string& inputText, const string& inputTarget) : text(inputText), target(inputTarget) {}
    int countOccurrences() {
        int count = 0;
        size_t pos = 0;

        while ((pos = text.find(target, pos)) != string::npos) {
            count++;
            pos += target.length();
        }
        return count;
    }
};
int main() {
    string inputText;
    string inputTarget;
    cout << "Enter the text: ";
    getline(cin, inputText);

    cout << "Enter the target string: ";
    getline(cin, inputTarget);

    StringCounter counter(inputText, inputTarget);
    int occurrenceCount = counter.countOccurrences();

    cout << "Number of occurrences: " << occurrenceCount << endl;
    return 0;
}
