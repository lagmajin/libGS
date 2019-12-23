#pragma once

#ifdef _MSC_VER
#ifdef EXPORT
#define __DLL__ __declspec(dllexport)
#else
#define __DLL__ __declspec(dllimport)
#endif
#elif
#define __DLL__ 
#endif

#include <memory>

#include <QtCore/QList>
#include <QtCore/QUuid>

#ifdef HAS_QT4

#elif HAS_QT5

#endif

#include "Status.hpp"
#include "../Object/AbstractGSObject.hpp"

#include "../Item/booster.hpp"
#include "../Core/Hitpoint.hpp"





namespace libgs{

class Character;

using upCharacter = std::unique_ptr<Character>;
using spCharacter = std::shared_ptr<Character>;

typedef QList<upCharacter>	upCharacterList;
typedef QList<spCharacter>	spCharacterList;



class CharacterPrivate;

class __DLL__ Character:public AbstractGSObject{
private:
	CharacterPrivate*const	pCharacter_;
	Character(const Character&);
	Character(Character&&);
	Character& operator=(const Character&);
	Character& operator=(Character&&);
	
	eObjectType _type() const;
public:
	explicit Character();
	virtual ~Character();
	float speed() const;
	void setSpeed(float speed);
	bool is() const;
	bool isJumpNow() const;
	bool isInvincible() const;
	bool isDie() const;

	void jump();
	void dash();
	void backDash();
};






















};