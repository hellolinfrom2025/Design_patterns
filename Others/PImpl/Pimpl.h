#include <iostream>
#include <memory>

class widget
{
public:
	widget(const int n);
	~widget(); 
	widget(widget&&)=default; 
	//需要深拷贝pimpl
	widget(const widget&);
	widget& operator=(widget&&) = default; 
	//需要深拷贝pimpl
	widget& operator=(const widget&);

	//转发给pimpl
	void draw() ; 
	//直接调用
	bool shown() const { return true; } 

private:
	class impl;
	std::unique_ptr<impl> m_pImpl;
};