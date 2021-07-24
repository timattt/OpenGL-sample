/*
 * Item.cpp
 *
 *  Created on: Jul 13, 2021
 *      Author: timat
 */

#include "Item.hpp"

Item::Item() : pos(0), speed(0), rotation(0), rotationSpeed(0), radius(0), mass(0), parent(NULL) {

}

Item::~Item() {
}

void Item::updatePhysics(float dt) {
}

void Item::updateAction(float dt) {
}
