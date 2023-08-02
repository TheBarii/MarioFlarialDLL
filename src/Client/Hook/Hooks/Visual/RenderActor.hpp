#pragma once
#include "../Hook.hpp"
#include "../../../../SDK/Client/Actor/Actor.hpp"

class RenderActorHook : public Hook { 

private:
    static void callback(void* a1, void* a2, Actor* actor, Vec3<float> a4, Vec3<float> a5, Vec2<float>* a6, void* a7);

public:

    typedef void(__thiscall* original)(void* a1, void* a2, Actor* actor, Vec3<float> a4, Vec3<float> a5, Vec2<float>* a6, void* a7);

    static inline original renderActorOriginal = nullptr;

    RenderActorHook() : Hook("Render Actor", "48 89 5C 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 07 4C 89 4C 24 ? 49 8B D8 4C 8B F2 48 8B F9 4C 8B 6D 77 49 8B 00 49 8B C8 48 8B 80 ? ? ? ? FF 15 ? ? ? ? 8B F0 48 8D 0D ? ? ? ?") {}

    void enableHook() override;
};