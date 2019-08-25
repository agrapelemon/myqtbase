#include <QCoreApplication>
#include<QString>
#include<QDebug>
int main001(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if(false)
    {
        char* ch=NULL;
        if(true)
        {
            QByteArray ba ;
            QString qstr="abc哈哈";
            qDebug() <<"1.QString转char*";
            qDebug() <<"QString先转QByteArray，再转char*。QString出了{ }，不会释放qstr.toUtf8()；QByteArray ba出了{ }，会自动释放ba.data()";
            qDebug() <<"QString:"<<qstr;
            ba = qstr.toUtf8();
            ch=ba.data();
            qDebug() <<"11:"<<ch;
            //delete ch;
            qDebug() <<"22:";
            qDebug() <<"22:"<<ch;
        }
        qDebug() <<QString("56失败:")<<ch;
        qDebug() <<ch;
    }
    if(false)
    {
        qDebug() <<"2.char*转QString";

        QString qstr;
        if(true)
        {
            char* ch="哈哈fdg";
            qstr=QString(ch);
        }

        qDebug() << qstr;
        qDebug()<<qstr.toUtf8().data();
    }
    if(true)
    {
         QString qstr=QString("a123")+QString("123");
         int qint = qstr.toInt()+1;
         qDebug() << qint;
    }
    return a.exec();
}
