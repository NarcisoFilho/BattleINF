#ifndef __CLASSES_HPP_
#define __CLASSES_HPP_

#include <raylib.h>

class TANQUE_PLAYER{
        Rectangle pos;
        int vidas;
        int sentido;

public:
        TANQUE_PLAYER( int , int , int , int );
        ~TANQUE_PLAYER(){}
        void mov( int , int );
        void apontar( int );
        void draw();
        int get_sentido(){ return sentido; }

};

TANQUE_PLAYER::TANQUE_PLAYER( int x = TELA_LARG / 2.0 , int y = TELA_ALT / 2.0  , int sentido = CIMA , int vidas = VIDAS_DEFAULT ){
        this->vidas = vidas;
        this->sentido = sentido;
        pos.x = x;
        pos.y = y;
        pos.width = TANQUE_LARGURA;
        pos.height = TANQUE_COMPRIMENTO;
}

#endif // __CLASSES_HPP_
