#ifndef Product_h__
#define Product_h__
#include <vector>
#include <string>
/**
 * ֻ�е����Ĳ�Ʒ�ǳ����Ӳ�����Ҫ��������ʱ�����б�Ҫʹ��Builderģʽ��
 * ��ͬ����������ģʽ����ͬ�ľ��彨���߿�������������صĲ�Ʒ��
 * ���仰˵����ͬ�������Ľ�����ܲ���������ѭ��ͬ�Ľӿڡ�
 */
class Product1
{
public:
	~Product1();
	std::string ListParts()const;
	std::vector<std::string> m_parts;
};
#endif // Product_h__
