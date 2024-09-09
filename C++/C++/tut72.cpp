#include <iostream>
#include <list>

using namespace std;
void display(list<int> l)
{
    list<int>::iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;    // list of zero lenght
    list<int> list2(3); // empty  list of size 7
    list1.push_back(53);
    list1.push_back(2);
    list1.push_back(85);
    list1.push_back(9);
    list1.push_back(5);
    //   list1.pop_front();// this will pop out element from front
    // list1.remove(9);// this will remove *all* selected element from the list
    // if there are two 9's in list then above member function removes all 9's from the list

    // list1.sort();//this will sort the list

    display(list1);
    // list2.push_back(55);// this will add 55 at last that is 8th element cause it already have 7 elements
    // note that in list1 it was an empty list so we push back elemnts
    // but as for list2 we already allocated space for 7 elements so if we push back new element it will at
    // position of 8th

    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 49;
    iter++;
    *iter = 5;
    iter++;
    display(list2);
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    display(list1);
    
    return 0;
}
    