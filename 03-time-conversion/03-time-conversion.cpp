#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

string timeConversion(string s) {
    string period = s.substr(8, 2);
    int hour = stoi(s.substr(0, 2));
    string rest = s.substr(2, 6);

    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    } else {
        if (hour != 12) {
            hour += 12;
        }
    }

    string hourStr = to_string(hour);
    if (hour < 10) {
        hourStr = "0" + hourStr;
    }

    return hourStr + rest;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}