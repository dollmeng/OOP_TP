#pragma once
#include <string>
#include <istream>
#include <ostream>

#include "command.h"

//������ �� �������� �ʰ�, �߻�Ŭ���� �̿��ص� ������ ��
#include "SecondHandListView.h"
#include "PartTimeListView.h"
#include "LifeQueListView.h"
#include "HobbyListView.h"
#include "SecondHandArticleView.h"
#include "PartTimeArticleView.h"
#include "LifeQueArticleView.h"
#include "HobbyArticleView.h"

using namespace std;

namespace TP {
	class ViewManager
	{
	private:
		string userInputString;
		ACTION_KEY actionKey;

	public:
		ViewManager();
		~ViewManager();

		void listView(string newData[][10], ACTION_KEY actKey);
		void articleView(string newData[], ACTION_KEY actKey);
		string userInputCommand(ACTION_KEY actKey);
		string userInputValue();
	};
}

