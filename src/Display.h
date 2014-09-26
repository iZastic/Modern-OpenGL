#pragma once
#include <SDL2/SDL.h>
#include <string>

class Display
{
public:
	// string& = string reference
	Display(int width, int height, const std::string& title);

	void Clear(float r, float g, float b, float a);
	void Update();
	bool IsClosed();

	virtual ~Display();
protected:
private:
	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;
};
