#ifndef QPRIORITYQUEUE_TEST_H
# define QPRIORITYQUEUE_TEST_H

#include <QtCore/QObject>

class TestQPriorityQueue: public QObject
{
  Q_OBJECT
private slots:
  void size();
  void empty();
  void top();
  // TODO: add more tests.
};

#endif /* !QPRIORITYQUEUE_TEST_H */
