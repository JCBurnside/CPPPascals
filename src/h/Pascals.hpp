#pragma once
#include <iosfwd>
template<unsigned MAX_LINES>
class Pascals {
    static_assert(MAX_LINES>=1);
private:
    long long data[MAX_LINES][MAX_LINES];
    const unsigned lines;
    friend std::ostream& operator<<(std::ostream& os, const Pascals pascals)
    {
        for (unsigned line = 0; line < pascals.lines; line++)
        {
            for (const long long& datum : pascals.data[line])
            {
                os << datum << " ";
            }
            os << '\n';
        }
        return os;
    }
public:
    Pascals(const unsigned lines);
};

template<unsigned MAX_LINES>
Pascals<MAX_LINES>::Pascals(const unsigned lines_)
    :data{
        { 1 }
    }, lines(lines_)
{
    for (unsigned line = 1; line < lines; line++)
    {
        for (unsigned collumn = 0; collumn <= line; collumn++)
        {
            if (collumn == 0 || collumn == line)
            {
                data[line][collumn] = 1;
            }
            else
            {
                data[line][collumn] = data[line - 1][collumn] + data[line - 1][collumn - 1];
            }
        }
    }
}
