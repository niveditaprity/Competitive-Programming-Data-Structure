#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string time) {
    /*
     * Write your code here.
     */
     string output = time.substr(0, 8);
    string ampm = time.substr(time.size() - 2);
    string hourString = time.substr(0, 2);

    if (ampm == "PM" && hourString != "12") {
        int hour = stoi(hourString);
        hour = (hour + 12) % 24;

        stringstream ss;
        ss << hour;

        output[0] = ss.str()[0];
        output[1] = ss.str()[1];
    }
    else if (ampm == "AM" && hourString == "12") {
        output[0] = output[1] = '0';
    }

    return output;

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
