#include <iostream>

using namespace std;

int main() {
    int totalCookies, cookiesPerBox, boxesPerContainer;

    // Prompt the user to enter the number of cookies, boxes, and containers
    cout << "Enter the total number of cookies: ";
    cin >> totalCookies;
    cout << "Enter the number of cookies in a box: ";
    cin >> cookiesPerBox;
    cout << "Enter the number of cookie boxes in a container: ";
    cin >> boxesPerContainer;

    // Calculate the number of boxes needed
    int numBoxes = totalCookies / cookiesPerBox;
    int leftoverCookies = totalCookies % cookiesPerBox;

    // Calculate the number of containers needed
    int numContainers = numBoxes / boxesPerContainer;
    int leftoverBoxes = numBoxes % boxesPerContainer;

    // Output the results
    cout << "Number of boxes needed: " << numBoxes << endl;
    cout << "Number of containers needed: " << numContainers << endl;
    cout << "Leftover cookies: " << leftoverCookies << endl;
    cout << "Leftover boxes: " << leftoverBoxes << endl;

    return 0;
}


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // a. Create an array named "marks" and store 10 values
    float marks[10] = {80.5, 35, 72.8, 70.5, 90, 79, 66, 76, 40.5, 60.5};

    // b. Swap the marks of index 2 and 7
    swap(marks[2], marks[7]);

    // c. Arrange the array values in ascending order
    sort(marks, marks + 10);

    // d. Find and display values less than 50
    cout << "Values less than 50:\n";
    for (int i = 0; i < 10; i++) {
        if (marks[i] < 50) {
            cout << marks[i] << " ";
        }
    }
    cout << endl;

    // e. Find the minimum value
    float minVal = marks[0];
    for (int i = 1; i < 10; i++) {
        if (marks[i] < minVal) {
            minVal = marks[i];
        }
    }

    cout << "Minimum value: " << minVal << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    float numbers[10];

    // Prompt the user to enter 10 floating-point numbers
    cout << "Enter 10 floating-point numbers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Prompt the user to enter a number to search
    float searchNumber;
    cout << "Enter a number to search for: ";
    cin >> searchNumber;

    // Search for the number in the array
    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == searchNumber) {
            found = true;
            break;
        }
    }

    // Display the result
    if (found) {
        cout << "Found it!" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
