#include <iostream>

using namespace std;

int main() {
    int height, width;

    cout << "Enter the height of the oval: ";
    cin >> height;

    cout << "Enter the width of the oval: ";
    cin >> width;

    // Calculate the center of the oval
    double h_center = height / 2.0;
    double w_center = width / 2.0;

    // Adjust the height to account for character aspect ratio
    double aspect_ratio = 2.0; // Adjust this value based on your console's character aspect ratio

    for (int i = 0; i < height; ++i) { // The outer loop iterates over each row of the output.
        for (int j = 0; j < width; ++j) { // The inner loop iterates over each column of the output.
            // Calculate the normalized coordinates
            double x = (j - w_center) / w_center; // Normalize x
            double y = (i - h_center) / (h_center / aspect_ratio); // Normalize y with aspect ratio

            // Check if the point (x, y) is inside the ellipse
            if ((x * x) + (y * y) <= 1) {
                cout << "*"; // Inside the oval
            } else {
                cout << " "; // Outside the oval
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
