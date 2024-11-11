#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Load an image (make sure you have a sample image in the project directory)
    cv::Mat image = cv::imread("pace.png");

    // Check if the image was loaded successfully
    if (image.empty()) {
        std::cerr << "Could not open or find the image!\n";
        return -1;
    }

    // Display the image in an OpenCV window
    cv::imshow("Display Window", image);
    cv::waitKey(0); // Wait for a key press before closing the window

    return 0;
}
