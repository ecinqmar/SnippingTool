/**
 * @file xlibrary.cpp
 * @author Ethan Cinq-Mars
 * @brief 
 * @version 0.1
 * @date 2023-01-24
 * 
 * @copyright Copyright (c) 2023 open source liscence, 
 *            please check GitHub for Liscencing informaiton
 * 
 */

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <cstdint>
#include <cstring>
#include <vector>

#include "Displayfuncs/xlibrary.h"

/**
 * @brief Takes a screenshot of the pc screen and 
 * 
 * @param Pixels 
 * @param Width 
 * @param Height 
 * @param BitsPerPixel 
 */
void XScreenShot( std::vector<uint8_t>& Pixels , int& Width , int& Height , int& BitsPerPixel )
{
    //get the reference to the 
    Display* display = XOpenDisplay(nullptr);
    Window root = DefaultRootWindow( display );

    XWindowAttributes attributes = {0};
    XGetWindowAttributes( display, root, &attributes );

    //bind references to the height & width
    Width = attributes.width;
    Height = attributes.height;

    //Get the image
    XImage* img = XGetImage(display, root, 0, 0, Width, Height, AllPlanes, ZPixmap);
    BitsPerPixel = img->bits_per_pixel;
    Pixels.resize( Width * Height * 4 );

    memcpy( &Pixels[0], img->data, Pixels.size() );

    XDestroyImage(img);
    XCloseDisplay(display);

}
