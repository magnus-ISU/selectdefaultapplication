#include <QApplication>
#include <QCommandLineParser>
#include <QMimeType>
#include <QDebug>
#include <QMimeDatabase>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QMimeDatabase mimeDB;

	QMimeType withoutX = mimeDB.mimeTypeForName("application/pkcs12");
	QMimeType withX = mimeDB.mimeTypeForName("application/x-pkcs12");

	qDebug() << "Mime type of 'application/pkcs12'  :" << withoutX.name();
	qDebug() << "Mime type of 'application/x-pkcs12':" << withX.name();

	return withoutX.name() == withX.name();
}
