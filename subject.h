#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"

public abstract class Subject
{
    private QList<Observer> observers;

    public void Attach(Observer observer)
    {
        observers.Add(observer);
    }

    public void Detach(Observer observer)
    {
        observers.Remove(observer);
    }

    public void Notify()
    {
        foreach (Observer obs in observers)
        {
            obs.Update();
        }
    }
}
