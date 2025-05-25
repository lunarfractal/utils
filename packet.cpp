#include "packet.hpp"

packetw::packetw(int size) : offset(0), buffer(size) {}

void packetw::i8(int8_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(int8_t));
    offset += sizeof(int8_t);
}

void packetw::i16(int16_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(int16_t));
    offset += sizeof(int16_t);
}

void packetw::i32(int32_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(int32_t));
    offset += sizeof(int32_t);
}

void packetw::i64(int64_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(int64_t));
    offset += sizeof(int64_t);
}

void packetw::u8(uint8_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(uint8_t));
    offset += sizeof(uint8_t);
}

void packetw::u16(uint16_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(uint16_t));
    offset += sizeof(uint16_t);
}

void packetw::u32(uint32_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(uint32_t));
    offset += sizeof(uint32_t);
}

void packetw::u64(uint64_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(uint64_t));
    offset += sizeof(uint64_t);
}

void packetw::f32(float v) {
    std::memcpy(&buffer[offset], &v, sizeof(float));
    offset += sizeof(float);
}

void packetw::f64(double v) {
    std::memcpy(&buffer[offset], &v, sizeof(double));
    offset += sizeof(double);
}

void packetw::string(std::u16string v) {
    std::memcpy(&buffer[offset], v.data(), 2 * v.length());
    offset += 2 * v.length();
    buffer.insert(buffer.end(), {0,0});
    offset += 2;
}

uint8_t* packetw::data() {
    return buffer.data();
}
