#include "packet.hpp"

packetw::packetw(int size) : offset(0), buffer(size) {}

template <typename T>
packetw::w(T v) {
    std::memcpy(&buffer[offset], &v, sizeof(T));
    offset += sizeof(T);
}

packetw::data() {
    return buffer.data();
}
