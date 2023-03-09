/**
 * @file fileops.cpp
 * @author Ethan Cinq-Mars (ethancm@live.ca)
 * @brief 
 * @version 0.1
 * @date 2023-03-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <fileops.hpp>
#include <vector>
#include <iostream>
#include <fstream>
#include <QDebug>

/**
 * @brief Save the input of the text in the dialog box to a text file.
 * 
 * @param text incoming vector of text to be saved into the hkconfig.txt file. should be one character but lets do a vector for now.
 */
void SaveInput( char text )
{
    std::fstream hkconfigfile;
    hkconfigfile.open( "hkconfigfile.txt", std::fstream::out );

    if( hkconfigfile.is_open() == true )
    {
        hkconfigfile << text << std::endl;
    }
    else 
    {
        qDebug() << "Created hotkey config file" << std::endl;
        CreateFile(text);
    }
    hkconfigfile.close();
}

/**
 * @brief 
 * 
 * @return std::vector<char> return the character that is currently saved to the hotkey.
 */
std::vector<char> ReadInput( void )
{

    std::fstream hkconfigfile;
    hkconfigfile.open( "hkconfigfile.txt", std::fstream::out );


    if( hkconfigfile.is_open() == true )
    {

    }  
}

/**
 * @brief Create a File object
 * 
 */
static void CreateFile( char text )
{
    std::fstream hkconfigfile;
    hkconfigfile.open("hkconfigfile.txt");
    

}