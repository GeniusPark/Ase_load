#pragma once
#include "cFrame.h"

class cAseCharacter : public cObject
{
private:
	ST_ASE_SCENE	m_stScene;
	cFrame*			m_pRoot;

public:
	cAseCharacter();
	~cAseCharacter();

	void Load(char* szFullPath);
	void Update(D3DXMATRIXA16* matWorld);
	void Render();
};