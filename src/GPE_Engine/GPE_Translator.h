/*
GPE_Translator.h
This file is part of:
GAME PENCIL ENGINE
https://create.pawbyte.com
Copyright (c) 2014-2019 Nathan Hurde, Chase Lee.

Copyright (c) 2014-2019 PawByte LLC.
Copyright (c) 2014-2019 Game Pencil Engine contributors ( Contributors Page )

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the “Software”), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

-Game Pencil Engine <https://create.pawbyte.com>


*/

#ifndef GPE_TRANSLATOR_H
#define GPE_TRANSLATOR_H

#include "GPE_CIncludes.h"
#include "GPE_String_Ex.h"
#include "GPE_File_System.h"

class GPE_Translator
{
public:
    std::string myLanguage;
    std::map<std::string,std::string> myTranslations;
public:
    GPE_Translator(std::string startLang);
    ~GPE_Translator();
    //The functions of a hero
    bool change_language( std::string newLanguage);
    void clear_translations();
    //Export functions
    bool export_to_po( std::string fName );
    //Glorious getters
    std::string get_language( );
    std::string get_str( std::string message);
    //Where the translating happens
    bool translate_file( std::string fName);
    bool translate_po_file( std::string fName);
    //in the event we randomly add different file types, we will be covered..
};

#endif
