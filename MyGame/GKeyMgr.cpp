#include "pch.h"
#include "GKeyMgr.h"

int g_arrVK[(int)KEY::last]
{
	sf::Keyboard::Left,
	sf::Keyboard::Right,
	sf::Keyboard::Up,
	sf::Keyboard::Down,

	sf::Keyboard::Q,
	sf::Keyboard::W,
	sf::Keyboard::E,
	sf::Keyboard::R,
	sf::Keyboard::T,
	sf::Keyboard::Y,
	sf::Keyboard::U,
	sf::Keyboard::I,
	sf::Keyboard::O,
	sf::Keyboard::P,
	sf::Keyboard::A,
	sf::Keyboard::S,
	sf::Keyboard::D,
	sf::Keyboard::F,
	sf::Keyboard::G,
	sf::Keyboard::Z,
	sf::Keyboard::X,
	sf::Keyboard::C,
	sf::Keyboard::V,
	sf::Keyboard::B,
	sf::Keyboard::LAlt,
	sf::Keyboard::LControl,
	sf::Keyboard::LShift,
	sf::Keyboard::Space,
	sf::Keyboard::Enter,
	sf::Keyboard::Escape,

	sf::Mouse::Button::Left,
	sf::Mouse::Button::Right,

	//last
};

GKeyMgr::GKeyMgr()
{

}

GKeyMgr::~GKeyMgr()
{

}

void GKeyMgr::init()
{
	for (int i = 0; i < (int)KEY::last; ++i)
	{
		m_vecKey.push_back(tKeyInfo{ KEY_STATE::NONE,false });
	}
}

void GKeyMgr::update()
{
	//Key Check
}
