#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "subject.h"

public class ConcreteSubject : Subject
{
    private string subjectState;

    public string SubjectState
    {
        get { return subjectState; }
        set { subjectState = value; }
    }
}
