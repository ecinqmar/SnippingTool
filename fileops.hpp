/**
 * @file fileops.hpp
 * @author Ethan Cinq-Mars (ethancm@live.ca)
 * @brief 
 * @version 0.1
 * @date 2023-03-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */


/**
 * @brief Save the input of the text in the dialog box to a text file.
 * 
 * @param text incoming vector of text to be saved into the hkconfig.txt file. should be one character but lets do a vector for now.
 */
void SaveInput( char text );


/**
 * @brief 
 * 
 * @return std::vector<char> return the character that is currently saved to the hotkey.
 */
std::vector<char> ReadInput( void );