/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrippner <wkrippne@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:40:24 by wkrippner         #+#    #+#             */
/*   Updated: 2023/11/04 23:40:24 by wkrippner        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed( void );
    Fixed( const int n );
    Fixed( const float n );
    Fixed( const Fixed &rhs );
    Fixed& operator=( const Fixed &rhs );
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;

    bool    operator>( const Fixed &rhs ) const ;
    bool    operator<( const Fixed &rhs ) const ;
    bool    operator>=( const Fixed &rhs ) const ;
    bool    operator<=( const Fixed &rhs ) const ;
    bool    operator==( const Fixed &rhs ) const ;
    bool    operator!=( const Fixed &rhs ) const ;

    Fixed   operator+( const Fixed &rhs ) const ;
    Fixed   operator-( const Fixed &rhs ) const ;
    Fixed   operator*( const Fixed &rhs ) const ;
    Fixed   operator/( const Fixed &rhs ) const ;

    Fixed&  operator++( void ); // prefix
    Fixed   operator++( int ); // postfix
    Fixed&  operator--( void ); // prefix
    Fixed   operator--( int ); // postfix

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );
    
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif  // FIXED_HPP