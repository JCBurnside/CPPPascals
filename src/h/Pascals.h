#pragma once
#include <iosfwd>
template<unsigned MAX_LINES>
class Pascals {
    static_assert(MAX_LINES>=1);
private:
    long long data[MAX_LINES][MAX_LINES];
    const unsigned lines;
    friend std::ostream& operator<<(std::ostream&,const Pascals);
public:
    Pascals(const unsigned lines);
};

template<unsigned MAX_LINES>
std::ostream& operator<<(std::ostream& os, const Pascals<MAX_LINES> pascals);