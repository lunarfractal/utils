#include "packet.hpp"

packetw::packetw(int size) : offset(0), buffer(size) {}

packetw& packetw::i8(int8_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(int8_t));
    offset += sizeof(int8_t);
    return *this;
}

packetw& packetw::i16(int16_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(int16_t));
    offset += sizeof(int16_t);
    return *this;
}

packetw& packetw::i32(int32_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(int32_t));
    offset += sizeof(int32_t);
    return *this;
}

packetw& packetw::i64(int64_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(int64_t));
    offset += sizeof(int64_t);
    return *this;
}

packetw& packetw::u8(uint8_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    return *this;
}

packetw& packetw::u16(uint16_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(uint16_t));
    offset += sizeof(uint16_t);
    return *this;
}

packetw& packetw::u32(uint32_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(uint32_t));
    offset += sizeof(uint32_t);
    return *this;
}

packetw& packetw::u64(uint64_t v) {
    std::memcpy(&buffer[offset], &v, sizeof(uint64_t));
    offset += sizeof(uint64_t);
    return *this;
}

packetw& packetw::f32(float v) {
    std::memcpy(&buffer[offset], &v, sizeof(float));
    offset += sizeof(float);
    return *this;
}

packetw& packetw::f64(double v) {
    std::memcpy(&buffer[offset], &v, sizeof(double));
    offset += sizeof(double);
    return *this;
}

packetw& packetw::string(std::u16string &v) {
    std::memcpy(&buffer[offset], v.data(), 2 * v.length());
    offset += 2 * v.length();
    buffer.insert(buffer.end(), {0,0});
    offset += 2;
    return *this;
}

uint8_t* packetw::data() {
    return buffer.data();
}
