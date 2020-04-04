//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <iostream>
#include <string>
#include <vector>
#include "IDirectionable.h"
#include "Hyperlink.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;

class TopTenList : public IDirectionable
{
  private:
    vector<Hyperlink> _list;

  public:
    TopTenList();
    void display_forward();
    void display_backward();
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
};

#endif
