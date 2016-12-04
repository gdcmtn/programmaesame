//
// Created by noble on 29/11/2016.
//

#ifndef PROGRAMMAESAME_PLAYER_H
#define PROGRAMMAESAME_PLAYER_H
#include "Character.h"
#include "Item.h"
#include "Bullets.h"


class Player :  public Character {


    Player(float x, float y, float speed, int size, bool invincible, bool fire, bool bullet, Item *item= NULL) :
            Character(x, y, speed), invincible(invincible), fire(fire), bullet(bullet), item(item){
        //codice
    }


public:
    void setSize(int size) {
        Player::size = size;
    }

    int getSize(){
        return size;
    }

    bool isInvincible() {
        return invincible;
    }

    void setInvincible(bool invincible) {
        Player::invincible = invincible;//false
    }

    void setFire(bool fire){
        Player::fire = fire;
    }

    bool getFire(){
        return fire;
    }

    bool *getItem(bool donut, bool pepper, bool coffee){
      if (donut == true){
          size = 2;
          bullet = true;
      }

        if (pepper == true) {
          invincible = true;
          fire = true;
      }

      if (coffee == true)
          speed *= 2;
    }

    float Jump(float x, float y ){
// TODO salto
    }

    /*virtual ~Player() {
        if (size <=0)
            delete Player;
    };*/

protected:
    int size;
    bool invincible;
    bool fire;
    bool bullet;
    Item *item;

};


#endif //PROGRAMMAESAME_PLAYER_H
