#ifndef PACKET_HPP
#define PACKET_HPP

#include <vector>
#include <cstdint>
#include <cstring>

class packetw {
public:
    packetw();
    template<typename T>
    void w(T v);
    uint8_t* data();
private:
    int offset;
    std::vector<uint8_t> buffer;
};

#endif
