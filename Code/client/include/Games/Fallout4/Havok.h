#pragma once

#if TP_FALLOUT4

struct bhkCharRigidBodyController
{
    virtual ~bhkCharRigidBodyController();

    uint8_t unk8[0x300 - 0x8];
    uint32_t flags;
};

#endif
