#include <QtCore>

QTextStream cout(stdout, QIODevice::WriteOnly);

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)
    QString s1("Paris");
    QString s2("London");
    QString s3("example");

    QString s = s1 + " " + s2 + "!" + " " + s3;

    cout << s << endl;
}
