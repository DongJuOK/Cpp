﻿#include <iostream>

using namespace std;

class Packet
{
private:
    int* bit = nullptr;
public:
    Packet(int value)
    {
        if (bit == nullptr)
        {
            bit = new int;
        }

        *bit = value;
    }

    Packet(const Packet& clone)
    {
        bit = new int;

        *bit = *clone.bit;
    }

    ~Packet()
    {
        delete bit;
    }

};

int main()
{
#pragma region 얕은 복사
    // 객체를 복사할 때 주소 값을 복사하여 같은
    // 메모리 공간을 가리키게 하는 복사입니다.

    // int * pointer = new int;
    // int * reference = pointer;
    // 
    // *pointer = 10;
    // 
    // cout << "pointer의 값 : " << pointer << endl;
    // cout << "reference의 값 : " << reference << endl;
    // 
    // cout << "pointer가 가리키는 값 : " << *pointer << endl;
    // cout << "reference가 가리키는 값 : " << *reference << endl;
    // 
    // delete pointer;
    // delete reference;

    // 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
    // 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
    // 서로 참조된 객체도 함께 영향을 받습니다.
#pragma endregion

#pragma region 깊은 복사
    // 객체를 복사할 때, 참조 값이 아닌 객체 자체로 새로
    // 복사하여 서로 다른 메모리를 생성하는 복사입니다.

    // Packet packet(10);
    // 
    // Packet protocol(packet);

#pragma endregion

    return 0;
}

