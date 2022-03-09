#include <iostream>
#include <raylib.h>
#include "definitions.hpp"
#include "classes.hpp"
#include "tanque_player.hpp"
using namespace std;

int main(){
        TANQUE_PLAYER player;

        InitWindow( TELA_LARG , TELA_ALT , "BattleINF" );

        while( !WindowShouldClose() ){
//                if( IsKeyDown( player.get_sentido() ) ){
                if( 1 ){
                        if( IsKeyDown( KEY_UP ) )
                                player.mov( 0  , -1 );
                        else if( IsKeyDown( KEY_DOWN ) )
                                player.mov( 0  , 1 );
                        else if( IsKeyDown( KEY_RIGHT ) )
                                player.mov( 1  , 0 );
                        else if( IsKeyDown( KEY_LEFT ) )
                                player.mov( -1  , 0 );
                }



                 BeginDrawing();
                        ClearBackground( RAYWHITE );
                        player.draw();
                 EndDrawing();
        }
        cout << "Hello world!" << endl;
        return 0;
}
