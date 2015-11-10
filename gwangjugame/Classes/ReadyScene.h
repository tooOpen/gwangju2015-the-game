/*
 * MainMenuScene.h
 *
 *  Created on: 2014. 1. 27.
 *       Author: bsh
 */

#ifndef READYSCENE_H_
#define READYSCENE_H_
#include "cocos2d.h"

#include "platform/android/jni/JniHelper.h"
using namespace cocos2d;

class ReadyScene :public CCLayer {
public:
	ReadyScene();
	virtual ~ReadyScene();

	virtual bool init();
	static CCScene* scene();
	CREATE_FUNC(ReadyScene);
	JniMethodInfo t;		//JNI �޼ҵ� ���� ����
	CCSprite* _background;  //��� ��������Ʈ
	CCSprite* _title;		//Ÿ��Ʋ ��������Ʈ
	CCSprite* _gametitle;		//����Ÿ��Ʋ
	CCMenuItemImage* _menuGamePlay; 		//���ӽ��� �޴�������

	CCAnimation *_backanimation;
	CCAnimate *_backanimate;
	CCMenu* _startMenu;		//���ӽ��� �޴�
	bool btnvisible;
	void btnTerm(float f);
	virtual void keyBackClicked();					//�ȵ���̵� �� ��ư �� ����
	void menuGamePlayCallBack(CCObject* pSender);	//���ӽ��� �޴� ���� �� ȣ��Ǵ� �ݹ� �Լ�
};

#endif /* READYSCENE_H_ */
