#include <QTCore>

QTextStream cout(stdout, QIODevice::WriteOnly);

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)
    QString s1("Hello");
    QString s2("Qt");
    QString s3("example2");

    QList<QString> list;

    list << s1 << s2 << s3;

    QListIterator<QString> iter(list);
    while(iter.hasNext()) {
        cout << iter.next();
        if(iter.hasNext()) {
            cout << " ";
        }
    }

    cout << "!" << endl;
}
