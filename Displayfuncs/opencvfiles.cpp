
/**
 * @brief contains api for usage of openCV.
 * 
 * 
 */



/**
 * @brief NOTES
 * 
 * to set up screenshots, we need to use xserver, or wayland. 
 * need to create a way to check if the user is using a specific window manager, then take the screenshot
 * 
 */
#include <stdio.h>
#include <vector>
#include <cstdint>
#include <opencv2/opencv.hpp>
#include "Displayfuncs/opencvfiles.hpp"
#include "Displayfuncs/xlibrary.h"

using namespace cv;

void TakeX11DisplayScreenshot()
{
    int Width  = 0;
    int Height = 0; 
    int Bpp    = 0;

    std::vector< std::uint8_t > Pixeldata;

    XScreenShot( Pixeldata, Width, Height, Bpp ); 

    if (Width && Height)
    {
        Mat img = Mat(Height, Width, Bpp > 24 ? CV_8UC4 : CV_8UC3, &Pixeldata[0]); //Mat(Size(Height, Width), Bpp > 24 ? CV_8UC4 : CV_8UC3, &Pixels[0]); 

        namedWindow("WindowTitle", WINDOW_AUTOSIZE);
        imshow("Display window", img);

        waitKey(0);
    }
    return;
}

int ShowImage( char** file )
{
    Mat image;
    image = imread( file[1], 1 );

    if ( !image.data )
    {
        printf( "No image data \n" );
        return -1;
    }
    namedWindow( "Displayed Image", WINDOW_AUTOSIZE );
    imshow( "Display Image", image );

    return 0;
}