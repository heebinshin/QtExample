#include <QTCore>

QTextStream cout(stdout, QIODevice::WriteOnly);

int main(int argc, char** argv)
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)
    QString s1("Hello");
    QString s2("Qt");
    QString s3("example3");

    QStringList list;

    list << s1 << s2 << s3;

    QString s = list.join(" ") + "!";
    cout << s << endl;
}
