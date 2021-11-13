#include <iostream>
#include <memory>

class widget
{
public:
	widget(const int n);
	~widget(); 
	widget(widget&&)=default; 
	//��Ҫ���pimpl
	widget(const widget&);
	widget& operator=(widget&&) = default; 
	//��Ҫ���pimpl
	widget& operator=(const widget&);

	//ת����pimpl
	void draw() ; 
	//ֱ�ӵ���
	bool shown() const { return true; } 

private:
	class impl;
	std::unique_ptr<impl> m_pImpl;
};