#include "TestClearColor.h"

#include <GL/glew.h>
#include "imgui/imgui.h"


namespace test {

	TestClearColor::TestClearColor() 
		: m_ClearColor {.2f, .3f, .8f, 1.0f}
	{ 		
	}
	TestClearColor::~TestClearColor() {
	}

	void TestClearColor::OnUpdate(float deltaTime) {}
	void TestClearColor::OnRender() {
		glClearColor(m_ClearColor[0], m_ClearColor[1], m_ClearColor[2], m_ClearColor[3]);
		glClear(GL_COLOR_BUFFER_BIT);
	}
	void TestClearColor::OnImGuiRender() {
		ImGui::ColorEdit4("Clear Color", m_ClearColor);
	}
}