#include "Movie.h"
#include <sstream>

Movie::Movie(const std::string& title, int season, int year)
    : title(title), season(season), year(year) {}

Movie parseMovie(const std::string& str) {
    std::istringstream iss(str);
    std::string token;
    std::getline(iss, token, ' ');

    // Extract title
    std::string title = token;

    std::getline(iss, token, ',');
    // Remove 's' prefix
    token.erase(0, 1);
    int season = std::stoi(token);

    std::getline(iss, token, ',');
    int year = std::stoi(token);

    return Movie(title, season, year);
}
