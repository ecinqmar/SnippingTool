/**
 * @file qtfuncs.cpp
 * @author Ethan Cinq-Mars (ethancm@live.ca)
 * @brief 
 * @version 0.1
 * @date 2023-03-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <QDebug>
#include <QInputDialog>
#include <string>

/**
 * @brief Get the Character Input object
 * 
 * @return char 
 */
QString GetCharacterInput ( void )
{
    qDebug() << "opening the input dialog";

    QString character = QInputDialog::getText(0, "New Character Input", "Enter new character" );

    qDebug() << character;

    return character;   
}

char ConvertQStringToChar ( QString Incoming 
{
    std::string stringconv;
    char key;

    return key;
}