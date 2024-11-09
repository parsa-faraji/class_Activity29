//
//  Movie.h
//  class_Activity29
//
//  Created by Parsa Faraji on 11/8/24.
//

#ifndef Movie_h
#define Movie_h

#include <iostream>
#include <sstream>
using namespace std;

// create a Movie struct

struct Movie {
    std::string title;
    int season;
    int year;

    Movie(const std::string& title, int season, int year);
};

Movie parseMovie(const std::string& str);


#endif /* Movie_h */
