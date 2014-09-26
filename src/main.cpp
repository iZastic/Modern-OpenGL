#include <iostream>
#include "Display.h"
#include "Mesh.h"
#include "Shader.h"

static const int DISPLAY_WIDTH = 800, DISPLAY_HEIGHT = 600;

int main(int argc, char** argv)
{
	Display display(DISPLAY_WIDTH, DISPLAY_HEIGHT, "OpenGL");

	Shader shader("basic");

	Vertex vertices[] = {
		Vertex(glm::vec3(-0.5f, -0.5f, 0)),
		Vertex(glm::vec3(0, 0.5f, 0)),
		Vertex(glm::vec3(0.5f, -0.5f, 0))
	};

	Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));

	while (!display.IsClosed())
	{
		display.Clear(0.0f, 0.15f, 0.3f, 1.0f);

		shader.Bind();
		mesh.Draw();

		display.Update();
	}

	return 0;
}