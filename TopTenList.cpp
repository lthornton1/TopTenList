//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::display_forward(){
  cout<<"Printing Top 10 in Forward order:"<<endl;
  for(int i = 0; i < (int)_list.size() ; i++){
    Hyperlink temp = get(i);
        cout<<"Number "<<i+1<<": "<<temp.text<<", url: "<<temp.url<<endl;
  }
}

void TopTenList::display_backward(){
  cout<<"Printing Top 10 in Backward order:"<<endl;
  for(int i = (int)_list.size()-1; i >= 0 ; i--){
    Hyperlink temp = get(i);
    cout<<"Number "<<i+1<<": "<<temp.text<<", url: "<<temp.url<<endl;
  }
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
  return _list[index];
}
