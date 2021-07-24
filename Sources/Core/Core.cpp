#include "Core.hpp"

// Local variables
//=================================================
double lastUpdateTime = 0.0;
//=================================================


// Global functions
//=================================================
void init() {
	initWindow();
	initUniverse();
}

void update() {
	while (!windowMayClose()) {
		double currentTime = std::chrono::duration_cast<
				std::chrono::milliseconds>(
				std::chrono::system_clock::now().time_since_epoch()).count();
		float dt = currentTime - lastUpdateTime;
		dt /= 1000.0f;
		if (dt > 0.1) {
			dt = 0.1f;
		}

		updateUniverse(dt);
		updateWindow();
		lastUpdateTime = currentTime;
	}
}

void clean() {
	cleanUniverse();
	cleanWindow();
}
//=================================================
