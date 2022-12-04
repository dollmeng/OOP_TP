#include "MainManager.h"

namespace TP
{
	void MainManager::triggerLoadListView() {
		viewManager.listView(this->listData, this->actionKey);
		this->inputCommand = viewManager.userInputCommand(this->actionKey);
		this->inputData = viewManager.userInputValue();
	};

	void MainManager::triggerLoadArticleView() {
		viewManager.articleView(this->articleData, this->actionKey);
		this->inputCommand = viewManager.userInputCommand(this->actionKey);
		this->inputData = viewManager.userInputValue();
	};

	void MainManager::triggerLoadListDomain() {
		//���� �ʿ�
		this->listData = domainManager.loadListData(this->inputData, this->actionKey);
	};

	void MainManager::triggerLoadArticleDomain() {
		//���� �ʿ�
		this->articleData = domainManager.loadArticleData(this->inputData, this->actionKey);
	};

	void MainManager::analysisCommand() {
		
	};
}