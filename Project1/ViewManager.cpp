#include "ViewManager.h"

namespace TP
{
	ViewManager::ViewManager() {
	
	};

	void ViewManager::listView(string newData[][10], ACTION_KEY actKey) {
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_VIEW:
			//중고품 리스트 출력 클래스 호출
			SecondHandListView.secondHandListView(newData);
			break;
		case ACTION_KEY::PARTTIME_LIST_VIEW:
			//알바 리스트 출력 클래스 호출
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//생활정보 리스트 출력 클래스 호출
			break;
		case ACTION_KEY::HOBBY_LIST_VIEW:
			//취미 리스트 출력 클래스 호출
			break;
		}
	};

	void ViewManager::articleView(string newData[], ACTION_KEY actKey) {
		//list와 마찬가지
	};

	// 명령어 및 값 입력 받기
	// ex. search 입력 -> apple 입력 = "apple"이 들어간 게시글 검색
	string ViewManager::userInputCommand(ACTION_KEY actKey) {
		//명령어 입력 받기
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_VIEW:
			//중고품 목록 화면에서 명령어 호출
			return SecondHandListView.userInput();
			break;
		case ACTION_KEY::PARTTIME_LIST_VIEW:
			//알바 리스트 출력 클래스 호출
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//생활정보 리스트 출력 클래스 호출
			break;
		case ACTION_KEY::HOBBY_LIST_VIEW:
			//취미 리스트 출력 클래스 호출
			break;
		}
	};

	string ViewManager::userInputValue() {
		//명령 값 입력 받기
	};
}