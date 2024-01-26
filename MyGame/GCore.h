#pragma once

class GCore
{
	SINGLE(GCore);

private:
	sf::Vector2u	m_resolution;
	std::string		m_titleName;

public:
	int init(sf::Window& _win, sf::Vector2u _resol
		, std::string _name);
	void progress(sf::Window& _win);

public:
	sf::Vector2u GetResolution() { return m_resolution; }
	std::string GetTitleName() { return m_titleName; }
};

