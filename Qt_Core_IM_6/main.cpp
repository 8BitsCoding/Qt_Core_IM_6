#include <QtCore/QCoreApplication>

#include <qhash.h>
#include <qdebug.h>

// QHash - QHash<Key, T> is one of Qt's generic container class
// It stores (key, value) pairs and provides very fast lookup of the value associated with a key

// Works great with static info that wont change mush.

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QHash<QString, int> ages;
	ages.insert("Bryan", 44);
	ages.insert("Aryan", 49);
	ages.insert("Cryan", 48);
	ages.insert("Dryan", 46);
	ages.insert("Qryan", 40);

	qInfo() << "Bryan is " << ages["Bryan"] << "years old";
	qInfo() << "Keys : " << ages.keys();
	qInfo() << "Size : " << ages.size();

	foreach(QString key, ages.keys()) {
		qInfo() << key << " = " << ages[key];
	}

	return a.exec();
}
