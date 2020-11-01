#include <bits/stdc++.h>
using namespace std;

// map: dictionary

void map_test()
{
    map<string, int> score;
    score["Alice"] = 100;
    score["Bob"] = 89;
    score["Charlie"] = 95;

    cout << score.at("Alice") << endl;
    cout << score.at("Bob") << endl;
    cout << score.at("Charlie") << endl;

    score["Dave"] = 50;
    score["Charlie"] = 70;

    cout << score.at("Dave") << endl;
    cout << score.at("Charlie") << endl;

    if (score.count("Alice"))
    {
        cout << "Alice: " << score.at("Alice") << endl;
    }
    if (score.count("Jiro"))
    {
        cout << "Jiro: " << score.at("Jiro") << endl;
    }

    cout << score.size() << endl;

    for (auto p : score)
    {
        auto k = p.first;
        auto v = p.second;

        cout << k << " => " << v << endl;
    }
}

// queue

void queue_test()
{
    queue<int> q;
    q.push(10);
    q.push(3);
    q.push(6);
    q.push(1);

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}

// priority_queue: 最も大きいものを取り出す

void priority_queue_test()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(3);
    pq.push(6);
    pq.push(1);

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    //小さい順に取り出す
    priority_queue<int, vector<int>, greater<int>> pq_2;
    pq_2.push(10);
    pq_2.push(6);
    pq_2.push(3);
    pq_2.push(1);

    while (!pq_2.empty())
    {
        cout << pq_2.top() << endl;
        pq_2.pop();
    }
}

// set: 重複のないデータのまとまり

void set_test()
{
    set<int> s;

    s.insert(3);
    s.insert(7);
    s.insert(8);
    s.insert(10);

    s.insert(3);

    cout << "size: " << s.size() << endl;

    if (s.count(7))
        cout << "found 7" << endl;
    if (s.count(5))
        cout << "found 5" << endl;
}

// deque: queueとstackの操作を同時に行える

void deque_test()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(1);
    d.push_back(3);

    cout << d.front() << endl;
    d.pop_front();

    cout << d.back() << endl;
    d.pop_back();

    d.push_front(5);
    d.push_back(2);

    cout << d.at(1) << endl;
}

// lower_bound/ upper_bound

int main()
{
    vector<int> a = {0, 10, 13, 14, 20};

    cout << *lower_bound(a.begin(), a.end(), 12) << endl;
    cout << *lower_bound(a.begin(), a.end(), 14) << endl;
    cout << *upper_bound(a.begin(), a.end(), 10) << endl;
}