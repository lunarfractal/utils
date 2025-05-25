#ifndef PACKET_HPP
#define PACKET_HPP

#include <vector>
#include <cstdint>
#include <cstring>
#include <string>

class packetw {
public:
    packetw(int size);

    packetw& i8(int8_t v);
    packetw& i16(int16_t v);
    packetw& i32(int32_t v);
    packetw& i64(int64_t v);
    packetw& u8(uint8_t v);
    packetw& u16(uint16_t v);
    packetw& u32(uint32_t v);
    packetw& u64(uint64_t v);
    packetw& f32(float v);
    packetw& f64(double v);
    packetw& string(std::u16string &v);

    uint8_t* data();
private:
    int offset;
    std::vector<uint8_t> buffer;
};

#endif
