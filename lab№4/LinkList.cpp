#include <iostream>
#include <fstream>
#include "LinkList.h"

using namespace std;

linklist::linklist()
{ 
        head = NULL;
        tail = NULL;
}
    
linklist::~linklist()
{
        element *temp = head;

        while(head)
        {
            head = head -> next;
            delete temp;
            temp = head;
        }
}

 void linklist::additem(int d)
{
       element *newElement = new element();
       newElement -> data = d;
       newElement -> next = NULL;
        
       if (head == NULL)
          head = newElement;
       else 
          tail->next = newElement;
       
       tail = newElement; 
}
    
void linklist::PrintList()
{
        element *temp = head;

        while(temp)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
}