#pragma once

enum class KEY_STATE
{
	NONE,
	TAP,
	HOLD,
	AWAY,
};

enum class KEY
{
	LEFT,
	RIGHT,
	UP,
	DOWN,

	Q,
	W,
	E,
	R,
	T,
	Y,
	U,
	I,
	O,
	P,
	A,
	S,
	D,
	F,
	G,
	Z,
	X,
	C,
	V,
	B,
	ALT,
	CTRL,
	LSHIFT,
	SPACE,
	ENTER,
	ESC,

	LBTN,
	RBTN,

	last,

};

struct tKeyInfo
{
	KEY_STATE eState;
	bool bPrevPush;
};

class GKeyMgr
{
	SINGLE(GKeyMgr);
private:
	std::vector<tKeyInfo>	m_vecKey;
	sf::Vector2f			m_vCurMousePos;

public:
	void init();
	void update();

public:
	KEY_STATE GetKeyState(KEY _eKey)
	{
		return m_vecKey[(int)_eKey].eState;
	}

	sf::Vector2f GetMousePos()
	{
		return m_vCurMousePos;
	}

};

