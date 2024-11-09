//
//  main.cpp
//  class_Activity29
//
//  Created by Parsa Faraji on 11/8/24.
//

#include "Movie.h"
#include <iostream>

int main() {
    std::string input = "24 s2,2014";
    Movie movie = parseMovie(input);

    std::cout << "Title: " << movie.title << std::endl;
    std::cout << "Season: " << movie.season << std::endl;
    std::cout << "Year: " << movie.year << std::endl;

    return 0;
}
