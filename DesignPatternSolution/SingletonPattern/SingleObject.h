#pragma once
#include "stdafx.h"
#include <mutex>
static mutex mt;
class SingleObject
{
public:
	//����
	static SingleObject *getInstance_1()
	{
		if (m_pInstance == NULL)
			m_pInstance = new SingleObject();
		return m_pInstance;
	}
	//����, �ڶ��߳��»�������
	static SingleObject *getInstance_2()
	{
		static SingleObject m_instacne;
		return &m_instacne;
	}
	//�̰߳�ȫ
	static SingleObject *getInstance_3()
	{
		if (NULL == m_pInstance_3)
		{
			mt.lock();
			if (NULL == m_pInstance_3)
			{
				m_pInstance_3 = new SingleObject();
			}
			mt.unlock();
		}
		return m_pInstance_3;
	}

	void getInfo();

private:
	SingleObject();
	static SingleObject *m_pInstance;
	static SingleObject *m_pInstance_3;
};

