#ifndef __TANQUE_PLAYER_HPP_
#define __TANQUE_PLAYER_HPP_

#include "classes.hpp"

void TANQUE_PLAYER::mov( int x , int y ){
        pos.x += x / ATENUADOR_MOVIMENTO;
        pos.y += y / ATENUADOR_MOVIMENTO;
}


void TANQUE_PLAYER::apontar( int sentido ){
        this->sentido = sentido;
}

void TANQUE_PLAYER::draw(){
        DrawRectangleRec( pos , GREEN );

}


#endif // __TANQUE_PLAYER_HPP_
