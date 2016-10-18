#ifndef _MyGame_H
#define _MyGame_H

#include "GameApplication.h"

class MyGame:public GameApplication
{
public:
	MyGame();
	~MyGame();

	GLuint m_ShaderProgram;

	mat4 m_ViewMatrix;
	mat4 m_ProjMatrix;
	mat4 m_ModelMatrix;

	void initScene();

	void destroyScene();

	void render();

	void update();

private:
	GLuint m_VBO;
	GLuint m_VAO;
};




#endif
