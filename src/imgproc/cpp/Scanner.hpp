#include <iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
using namespace std;

class Scanner {
    public:
        Scanner();
        void process(Mat image, Mat &output);

    private:
        void preProcess(Mat input, Mat &output);
        void fourPointTransform(Mat src, Mat &dst, vector<Point> pts);
        void orderPoints(vector<Point> inpts, vector<Point> &ordered);
};
