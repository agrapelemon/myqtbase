#include <QCoreApplication>
#include<QString>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if(false)
    {
        qDebug() <<"1.QString追加，相当于StringBuilder";
        QString qstr="123";
        qstr.append("aaa");
        qDebug() <<qstr;
    }
    if(false)
    {
        qDebug() <<"2.QString索引修改单个值，只能是英文";
        QString qstr="123";
        qstr[1]='h';
        qDebug() <<qstr;
    }
    if(false)
    {
        qDebug() <<"3.QString字符串截取，产生新的字符串";
        QString qstr="0123456";
        qstr = qstr.mid(2,2);
        qDebug() <<qstr;
    }
    if(false)
    {
        qDebug() <<"4.QString查询子字符串的序号。如果不存在，序号为-1";
        QString qstr="0123456";
        int index = qstr.indexOf("234567");
        qDebug() <<index;
    }
    if(false)
    {
        qDebug() <<"5.QString查询是否存在子字符串";
        QString qstr="0123456";
        int index = qstr.contains("23456");
        qDebug() <<index;
    }
    if(false)
    {
        qDebug() <<"6.QString字符串分割,QString::SkipEmptyParts去掉空字符串";
        QString qstr="0123456";
        QStringList list = qstr.split("23456",QString::SkipEmptyParts);
        qDebug() <<list;
    }
    if(false)
    {
        qDebug() <<"7.QString是否以某个字符串开始";
        QString qstr="01哈3456";
        qDebug() <<qstr.startsWith("01哈");
    }
    if(false)
    {
        qDebug() <<"8.QString字符串替换";
        QString qstr="01哈345哈6";
        qstr=qstr.replace("哈","张");
        qDebug() <<qstr;
    }
    if(false)
    {
        qDebug() <<"9.QString字符串的字符个数，\0会影响长度";
        QString qstr="01哈5哈6";
        qDebug() <<qstr.length();
    }
    if(false)
    {
        QStringList list;
        list.append("1");
        list.append("1");
        list.append("1");
        list.join(",");
        qDebug() <<"10.数组生成合并字符串";
        qDebug() <<list.join(",,,");
    }
    if(false)
    {
        qDebug() <<"11.QString去掉空白字符串.trimmed()去掉两边空白。simplified()去掉两边空白，中间如果有连续的空白，变成一个空白";
        QString qstr="    01哈    5哈6    ";
        qDebug() <<qstr.trimmed();
        qDebug() <<qstr.simplified();
    }
    if(false)
    {
        qDebug() <<"12.QString插入";
        QString qstr="    01哈    5哈6    ";
        qstr.insert(0,"aaa");
        qDebug() <<qstr;
    }
    if(false)
    {
        qDebug() <<"13.QString删除";
        QString qstr="13.QString删除";
        qstr.remove(0,5);
        qDebug() <<qstr;
    }
    if(true)
    {
        qDebug() <<"14.判断字符串xian相等用==";
        QString str=QString("aaa");
        QString qstr1=str+QString("bbb");
        QString qstr2=QString("aaabbb");
        qDebug() <<(qstr1==qstr2);
    }
    return a.exec();
}
