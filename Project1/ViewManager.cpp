#include "ViewManager.h"

namespace TP
{
	ViewManager::ViewManager() {
	
	};

	void ViewManager::listView(string newData[][10], ACTION_KEY actKey) {
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_VIEW:
			//�߰�ǰ ����Ʈ ��� Ŭ���� ȣ��
			SecondHandListView.secondHandListView(newData);
			break;
		case ACTION_KEY::PARTTIME_LIST_VIEW:
			//�˹� ����Ʈ ��� Ŭ���� ȣ��
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//��Ȱ���� ����Ʈ ��� Ŭ���� ȣ��
			break;
		case ACTION_KEY::HOBBY_LIST_VIEW:
			//��� ����Ʈ ��� Ŭ���� ȣ��
			break;
		}
	};

	void ViewManager::articleView(string newData[], ACTION_KEY actKey) {
		//list�� ��������
	};

	// ��ɾ� �� �� �Է� �ޱ�
	// ex. search �Է� -> apple �Է� = "apple"�� �� �Խñ� �˻�
	string ViewManager::userInputCommand(ACTION_KEY actKey) {
		//��ɾ� �Է� �ޱ�
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_VIEW:
			//�߰�ǰ ��� ȭ�鿡�� ��ɾ� ȣ��
			return SecondHandListView.userInput();
			break;
		case ACTION_KEY::PARTTIME_LIST_VIEW:
			//�˹� ����Ʈ ��� Ŭ���� ȣ��
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//��Ȱ���� ����Ʈ ��� Ŭ���� ȣ��
			break;
		case ACTION_KEY::HOBBY_LIST_VIEW:
			//��� ����Ʈ ��� Ŭ���� ȣ��
			break;
		}
	};

	string ViewManager::userInputValue() {
		//��� �� �Է� �ޱ�
	};
}