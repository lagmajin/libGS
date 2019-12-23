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

#include <QtCore/QList>
#include <QtCore/QTime>
#include <QtCore/QString>

#include <QtGui/QColor>


namespace libgs{

class ChatLogPrivate;

class ChatLog {
private:

public:
	ChatLog();
	explicit ChatLog(const QString& message,const QColor& color);
	~ChatLog();
	QString message() const;
	QColor color() const;
};

ChatLog::ChatLog()
{

}

ChatLog::~ChatLog()
{

}

class ChatPrivate;

class Chat {
private:
	ChatPrivate*pChat_;
public:
	Chat();
	~Chat();
	
	void addMessege(const QString& chat,const QTime& time,const QColor& color);
	
	void removeAllMessage();
	
};
























};
