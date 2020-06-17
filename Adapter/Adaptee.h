#pragma once
class LegacyRect
{
public:
	LegacyRect(double tlx,double tly,double brx,double bry);
	~LegacyRect();
	void DrawRect();
private:
	double m_tlx;
	double m_tly; 
	double m_brx;
	double m_bry;
};

