#ifndef CORE_UNIVERSE_ITEM_H_
#define CORE_UNIVERSE_ITEM_H_

#include <glm/vec2.hpp>

class Item {
private:
	// PHYSICS
	//---------------------
	glm::vec2 pos;
	glm::vec2 speed;
	float rotation;
	float rotationSpeed;
	//---------------------

	// Sizes
	//---------------------
	float radius;
	float mass;
	//---------------------

	// Parent
	//---------------------
	Item * parent;
	//---------------------

public:
	Item();
	virtual ~Item();

	void updatePhysics(float dt);
	virtual void updateAction(float dt);
};

#endif /* CORE_UNIVERSE_ITEM_H_ */
