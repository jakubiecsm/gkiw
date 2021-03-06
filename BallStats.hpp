//
//MK
//


#ifndef BALLSTATS_H
#define BALLSTATS_H
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <stdlib.h>
#include <stdio.h>



class BallStats
{
public:
	BallStats(glm::vec3 position);
	~BallStats();
	glm::vec3 position;
	glm::vec3 speed;
	glm::vec3 rotation_speed;
	float radius;
	float drop_speed;
	float a;

	float timer;
	void update_position(float deltaTime);
	void update_positon_map_touch(float deltaTime, glm::vec3 mapVertex, float flatness, float map_translate_y);
	void update_positon_ball_collision(float deltaTime,
		glm::vec3 otherBallPosition,
		glm::vec3 otherBallSpeed,
		float map_translate_y,
		float flatness);

private:

};

#endif // !BALLSTATS_H