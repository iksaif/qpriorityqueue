#include <QtTest/QtTest>

#include "qpriorityqueue.h"
#include "qpriorityqueue_test.h"

void TestQPriorityQueue::size() {
  QPriorityQueue<int> q;

  QCOMPARE(q.size(), 0);

  q << 1;
  QCOMPARE(q.size(), 1);

  int tmp;
  q >> tmp;
  QCOMPARE(q.size(), 0);
}

void TestQPriorityQueue::empty() {
  QPriorityQueue<int> q;

  QVERIFY(q.empty() == true);

  q << 1;
  QVERIFY(q.empty() == false);
}

void TestQPriorityQueue::top() {
  QPriorityQueue<int> q;

  q << 1;
  QCOMPARE(q.top(), 1);

  q << 2;
  QCOMPARE(q.top(), 2);

  q << 0;
  QCOMPARE(q.top(), 2);
}

QTEST_MAIN(TestQPriorityQueue)

