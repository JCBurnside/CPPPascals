#include "Pascals.h"
template<unsigned MAX_LINES>
Pascals<MAX_LINES>::Pascals(const unsigned lines_)
    :data{
        { 1 }
}, lines(lines_)
{
    static_assert(lines_ <= MAX_LINES);
    for (int line = 1; line < lines; line++)
    {
        for (int collumn = 0; collumn <= line; collumn++)
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

template<unsigned MAX_LINES>
std::ostream& operator<<(std::ostream& os, Pascals<MAX_LINES> pascals)
{
    for (int line = 0; line < pascals.lines; line++)
    {
        for (const long long& datum : pascals.datum[line])
        {
            os<< datum << " ";
        }
        os<<'\n';
    }
}