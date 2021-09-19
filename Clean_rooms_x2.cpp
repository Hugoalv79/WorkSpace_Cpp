#include <iostream>

using namespace std;

int main() {
    int small_rooms;
    int large_rooms;
    double tax {0.06};
    const double Fee_SmallRoom {25};
    const double Fee_largeRoom {35};
    const int valid_days {30};

    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms;
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << Fee_SmallRoom << endl;
    cout << "Price per large room: $" << Fee_largeRoom << endl;

    double total_cost {(Fee_SmallRoom*small_rooms)+(Fee_largeRoom*large_rooms)};
    cout<<"Cost: $"<<total_cost<<endl;
    cout<<"Tax: $"<<tax*total_cost<<endl;
    cout<<"=================================================================="<<endl;
    cout<<"Total estimate: $"<<(total_cost * tax)+total_cost<<endl;
    cout<<"This estimate is valid for "<<valid_days<<" days"<<endl;
    cout<<endl;

}