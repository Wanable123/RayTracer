#pragma once

#include "MathUtils.h"

struct RaycastHit{

	float distance = 0;

	glm::vec3 point = glm::vec3{ 0, 0, 0 };
	
	glm::vec3 normal = glm::vec3{ 0, 0, 0 };

	class Material* material{ nullptr };

};

struct Ray{

 Ray() = default;
 
 Ray(const glm::vec3& origin, const glm::vec3& direction) : origin(origin), direction( direction){}

	glm::vec3 GetPoint(float distance) const { return origin + (direction * distance); }

	glm::vec3 origin = { 0,0,0 };

	glm::vec3 direction = { 0,0,0 };

};
