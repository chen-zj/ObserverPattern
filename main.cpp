#include "concreteobserver.h"
#include "concretesubject.h"

int main(int argc, char *argv[])
{
    ConcreteSubject subject = new ConcreteSubject();

    subject.Attach(new ConcreteObserver(subject, "test Observer 1"));
    subject.Attach(new ConcreteObserver(subject, "test Observer 2"));
    subject.Attach(new ConcreteObserver(subject, "test Observer 3"));

    subject.SubjectState = "changeNotify";
    subject.Notify();

}
