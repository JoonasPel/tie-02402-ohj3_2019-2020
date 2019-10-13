#include <QString>
#include <QtTest>
#include "date.hh"

class DateTest : public QObject
{
    Q_OBJECT

public:
    DateTest();

private Q_SLOTS:
    void testCase1();
};

DateTest::DateTest()
{
}

void DateTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(DateTest)

#include "tst_datetest.moc"
