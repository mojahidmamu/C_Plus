#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Bangladesh";
    cout << s.size(); // আউটপুট: 10

    //     4️⃣ s.clear()
    //     🔹 স্ট্রিং - এর সবকিছু মুছে ফেলে। স্ট্রিং খালি করে দেয়। return 0;

    string s = "Hello";
    s.resize(3); // এখন s = "Hel"

    cout << s[0]; // আউটপুট: H

    cout << s.back(); // আউটপুট: o 🔹 শেষ অক্ষর রিটার্ন করে।

    cout << s.front(); // আউটপুট: H 🔹 প্রথম অক্ষর রিটার্ন করে।

    s += " World";
    s.append(" World!");

    s.push_back('!'); //স্ট্রিং-এর শেষে একটি অক্ষর যোগ করে।

    s.erase(2, 3); // ২য় ইনডেক্স থেকে ৩ অক্ষর মুছে ফেলবে

    s.replace(2, 3, "XYZ"); // ২য় ইনডেক্স থেকে ৩ অক্ষর মুছে দিয়ে "XYZ" বসাবে

    s.insert(3, "ABC"); // ৩য় ইনডেক্সে "ABC" বসাবে


}
