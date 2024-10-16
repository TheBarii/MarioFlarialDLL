#include <string>
#include "Packet.hpp"
#include "../../../../Utils/Memory/Memory.hpp"
#include "../../../../Utils/Memory/Game/SignatureAndOffsetManager.hpp"

MinecraftPacketIds Packet::getId() {
    static int off = GET_OFFSET("Packet::getId");
    return Memory::CallVFuncI<MinecraftPacketIds>(off, this);
}