#include "../Core.hpp"
#include <set>

// Local variables
//====================================
std::set<Item*> items = {};
//====================================

void initUniverse() {
}

void updateUniverse(float dt) {
	for (auto it = items.begin(); it != items.end(); it++) {
		(*it)->updateAction(dt);
		(*it)->updateAction(dt);
	}

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.5, 0.5, -0.5);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.5, -0.5, -0.5);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.5, -0.5, -0.5);
	glEnd();
}

void cleanUniverse() {
}

void addItem(Item *it) {
	items.insert(it);
}

void removeItem(Item *it) {
	items.erase(it);
}
