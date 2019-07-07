#include "common.h"
#include "patcher.h"
#include "ParticleObject.h"

WRAPPER void CParticleObject::AddObject(uint16 type, const CVector &pos, bool remove) { EAXJMP(0x4BC4D0); }
WRAPPER void CParticleObject::AddObject(uint16 type, const CVector &pos, float size, bool remove) { EAXJMP(0x4BC520); }
WRAPPER void CParticleObject::AddObject(uint16 type, const CVector &pos, const CVector &dir, float size, bool remove) { EAXJMP(0x4BC570); }

// Converted from static void __cdecl CParticleObject::Initialise() 0x42C760
void CParticleObject::Initialise()
{
	((void (__cdecl *)())0x4BC440)();
}

// Converted from static void __cdecl CParticleObject::UpdateAll() 0x4BCA30
void CParticleObject::UpdateAll()
{
	((void (__cdecl *)())0x4BCA30)();
}

STARTPATCHES
	InjectHook(0x4BC420, &CParticleObject::dtor, PATCH_JUMP);
ENDPATCHES