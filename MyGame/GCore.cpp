#include "pch.h"
#include "GCore.h"

GCore::GCore()
	: m_resolution(0,0)
	, m_titleName{}
{

}

GCore::~GCore()
{

}

int GCore::init(sf::Window& _win, sf::Vector2u _resol, std::string _name)
{
	m_resolution = _resol;
	m_titleName = _name;

	_win.create(sf::VideoMode(m_resolution.x, m_resolution.y)
		, m_titleName);

	return true;
}

void GCore::progress(sf::Window& _win)
{
	if (_win.hasFocus())
	{
		_win.setTitle("Focus");
	}
	else
	{
		_win.setTitle("UnFocus");
	}
}
