#ifndef PACKET_HPP
#define PACKET_HPP

#include <vector>
#include <cstdint>
#include <cstring>
#include <string>

class packetw {
public:
    packetw(int size);

    void i8(int8_t v);
    void i16(int16_t v);
    void i32(int32_t v);
    void i64(int64_t v);
    void u8(uint8_t v);
    void u16(uint16_t v);
    void u32(uint32_t v);
    void u64(uint64_t v);
    void f32(float v);
    void f64(double v);
    void string(std::u16string v);

    uint8_t* data();
private:
    int offset;
    std::vector<uint8_t> buffer;
};

#endif
