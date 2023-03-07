/**
 * @file xlibrary.h
 * @author Ethan Cinq-Mars (ethancm@live.ca)
 * @brief Header for functions related to the X11 api
 * @version 0.1
 * @date 2023-01-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <vector>
#include <cstdint>

class XHandler
{
    public:
        XHandler()
        {
        }

};

void XScreenShot( std::vector<uint8_t>& Pixels , int& Width , int& Height , int& BitsPerPixel );