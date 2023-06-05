#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PubllishedVideoTitles;
};

int main(){
    YoutubeChannel ytChannel;
    ytChannel.Name = "Spike";
    ytChannel.OwnerName = "Mei";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PubllishedVideoTitles = {"xxx","sss","www"};

    cout << "Name: " <<ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount" << ytChannel.SubscribersCount << endl;
    cout << "Videos: " <<endl;
    for (string videoTitle : ytChannel.PubllishedVideoTitles)
    {
        cout << videoTitle <<endl;
    }
    
    return 0;
}