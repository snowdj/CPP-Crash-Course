/*
 * Copyright (C) 2012 Nicolas P. Rougier
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either  version 3 of the  License, or (at your  option) any later
 * version.
 *
 * This program is  distributed in the hope that it will  be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR  A  PARTICULAR PURPOSE.  See  the GNU  General  Public  License for  more
 * details.
 *
 * You should have received a copy  of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <iostream>
#include <stdexcept>

class DivideByZero : public std::runtime_error {
public:
    DivideByZero( void ) : std::runtime_error("DivideByZero")
    { }
};

const double divide( const double a, const double b )
{
    if( b == 0 )
    {
        throw DivideByZero();
    }
    return a/b;
}

int main( int argc, char **argv )
{
    divide(5,3);
    divide(5,0);
    return 0;
}
