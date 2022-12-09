#pragma once

#include"Renderer/Canvas.h"

#include "Math/Ray.h"

#include "Objects/Objects.h"

#include "Renderer/Camera.h"

#include<SDL.h>

class Scene;

class Renderer{

public:

	Renderer() = default;

	bool Initialize();

	void Shutdown();

	bool CreateWindow(int width, int height);

	void CopyCanvas(const Canvas& canvas);

	void Render(Canvas& canvas, Scene& scene, Camera& camera, int samples = 5);

	void Present();

	friend class Canvas;

private:

	color3 GetBackgroundFromRay(const Ray& ray);

	SDL_Renderer* m_renderer{ nullptr };

	SDL_Window* m_window{ nullptr };

};
