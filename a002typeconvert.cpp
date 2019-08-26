#include <QCoreApplication>
#include<QString>
#include<QDebug>
int main002(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if(true)
    {
        qDebug() <<"1.QString转int";
        QString qstr="123";
        bool ok;
        qstr.toInt(&ok);
        if(ok)
        {
            qDebug() <<"成功！";
        }
        else
        {
            qDebug() <<"失败！";
        }
    }
    if(true)
    {
        qDebug() <<"2.int转QString";
        int qint=124;
        QString qstr=QString::number(qint);
        qDebug() <<qstr;
    }

    if(true)
    {
        qDebug() <<"3.double转QString";
        double qint=124.5000;
        QString qstr=QString::number(qint);
        qDebug() <<qstr;
    }
    if(true)
    {
        qDebug() <<"4.QTextStream输入输出";

        QTextStream qin(stdin);
        QTextStream qout(stdout);

        QString qstr;
        qin>>qstr;
        qout<<qstr<<endl;
    }
    return a.exec();
}
