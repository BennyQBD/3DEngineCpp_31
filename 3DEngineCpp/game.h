#ifndef MYGAME_H
#define MYGAME_H

#include "mesh.h"
#include "shader.h"
#include "basicShader.h"
#include "transform.h"
#include "camera.h"
#include "lighting.h"

class Game
{
public:
	Game();
	~Game();

	void input();
	void update();
	void render();

protected:
private:
	Mesh m_mesh;
	Shader* m_shader;
	Vector3f m_color;
	Transform m_transform;
	Camera m_camera;
	Material m_material;
	Texture m_texture;
	PointLight* m_pLights;
	SpotLight* m_sLights;
};

#endif