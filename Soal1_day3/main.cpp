#include <iostream>

using namespace std;

int main()
{
    char huruf_2311102051;
    string defaultstat_2311102051 = "huruf konsonan";

    cout << "masukan huruf : ";
    cin >> huruf_2311102051;

    if (huruf_2311102051=='a'||huruf_2311102051=='A'||
        huruf_2311102051=='i'||huruf_2311102051=='I'||
        huruf_2311102051=='u'||huruf_2311102051=='U'||
        huruf_2311102051=='e'||huruf_2311102051=='E'||
        huruf_2311102051=='o'||huruf_2311102051=='O')
    {
        defaultstat_2311102051 = "huruf vokal";
    }
    cout << defaultstat_2311102051 << endl;
    return 0;
}
