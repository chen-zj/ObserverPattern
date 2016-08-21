#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include <iostream>
#include "observer.h"
#include "concretesubject.h"
using namespace std;

public class ConcreteObserver : Observer
{
    private string observerState;
    private string name;
    private ConcreteSubject subject;

    public ConcreteSubject Subject
    {
        get { return subject; }
        set { subject = value; }
    }

    public ConcreteObserver(ConcreteSubject subject, string name)
    {
        this.subject = subject;
        this.name = name;
    }

    public override void Update()
    {
        observerState = subject.SubjectState;
        cout<<"The observer's state of "<< name << "is" << observerState << endl;
    }
}
