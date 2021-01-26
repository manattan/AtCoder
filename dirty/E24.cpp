// https://atcoder.jp/contests/apg4b/tasks/APG4b_by
#include <bits/stdc++.h>
using namespace std;

struct Clock {
    int hour;
    int minute;
    int second;

    void set(int h , int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    string to_str() {
        string hourS;
        string minuteS;
        string secondS;
        if (hour < 10) {
            hourS = '0' + to_string(hour);
        } else {
            hourS = to_string(hour);
        }

        if (minute < 10) {
            minuteS = '0' + to_string(minute);
        } else {
            minuteS = to_string(minute);
        }

        if (second < 10) {
            secondS = '0' + to_string(second);
        } else {
            secondS = to_string(second);
        }

        return hourS + ':' + minuteS + ':' + secondS;
    }

    void shift(int diff_second) {
        second += diff_second;
        if (second >= 0) {
            while (second >= 60) {
                second -= 60;
                minute += 1;
            }
            while (minute >= 60) {
                minute -=60;
                hour +=1;
            }
            if (hour >= 24) {
                hour %= 24;
            }
        } else {
            while (second < 0) {
                second += 60;
                minute -= 1;
            }
            while (minute < 0) {
                minute +=60;
                hour -=1;
            }
            if (hour < 0) {
                hour = 24 - abs(hour) % 24;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }
        
    }
};

int main(){

    int hour, minute, second;
    cin >> hour >> minute >> second;
    int diff_second;
    cin >> diff_second;

    Clock clock;

    clock.set(hour, minute, second);

    cout << clock.to_str() << endl;

    clock.shift(diff_second);

    cout << clock.to_str() << endl;
}