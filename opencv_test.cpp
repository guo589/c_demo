#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
    cout << "OpenCV版本：" << CV_VERSION << endl;
    Mat img = Mat::zeros(Size(400,300), CV_8UC3);
    circle(img, Point(200,150), 80, Scalar(0,0,255), -1);
    imshow("test", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}
