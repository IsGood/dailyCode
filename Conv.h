#ifndef MY_CONVOLUTION
#define MY_CONVOLUTION
//转载
#include <opencv2/opencv.hpp>
 
class My_Convolution{
public:
    My_Convolution();
    ~My_Convolution();
    bool load_kernal(cv::Mat kernal);//加载卷积核
    void convolute(const cv::Mat &image,cv::Mat &dst);//卷积操作
 
private:
    bool kernal_loaded;//是否已经加载卷积核
    cv::Mat curr_kernal;//当前卷积核
    int bios_x,bios_y;//记录偏移量
 
    void compute_sum_of_product(int i,int j,int chan,cv::Mat &complete_image,cv::Mat & dst);//计算每一个像素的掩模乘积之和
    void complete_image_transform(const cv::Mat &image,cv::Mat &dst);//将原图像转换成边框补全的图像
};
 
#endif // MY_CONVOLUTION
 