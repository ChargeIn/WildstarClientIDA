#include "../winhttp.h"

//----- (00000001405CEE40) ----------------------------------------------------
void __fastcall sub_1405CEE40(__int64 a1, __int64 a2)
{
	*(_DWORD*)(a1 + 88) = 0;
	if ((*(_BYTE*)(a2 + 8) & 1) == 0)
		*(_DWORD*)(a1 + 88) = 4;
	if ((*(_BYTE*)(a2 + 8) & 2) == 0)
		*(_DWORD*)(a1 + 88) |= 8u;
	if ((*(_BYTE*)(a2 + 8) & 4) == 0)
		*(_DWORD*)(a1 + 88) |= 0x10u;
	if ((*(_BYTE*)(a2 + 8) & 8) == 0)
		*(_DWORD*)(a1 + 88) |= 0x20u;
	if ((*(_BYTE*)(a2 + 8) & 0x10) == 0)
		*(_DWORD*)(a1 + 88) |= 0x40u;
	if ((*(_BYTE*)(a2 + 8) & 0x20) == 0)
		*(_DWORD*)(a1 + 88) |= 0x80u;
	if ((*(_BYTE*)(a2 + 8) & 0x40) == 0)
		*(_DWORD*)(a1 + 88) |= 0x100u;
	if (*(char*)(a2 + 8) >= 0)
		*(_DWORD*)(a1 + 88) |= 0x200u;
	if ((*(_DWORD*)(a2 + 8) & 0x100) == 0)
		*(_DWORD*)(a1 + 88) |= 0x400u;
	if ((*(_DWORD*)(a2 + 8) & 0x200) == 0)
		*(_DWORD*)(a1 + 88) |= 0x1000u;
	if ((*(_DWORD*)(a2 + 8) & 0x400) == 0)
		*(_DWORD*)(a1 + 88) |= 0x2000u;
	if ((*(_DWORD*)(a2 + 8) & 0x800) == 0)
		*(_DWORD*)(a1 + 88) |= 0x4000u;
	if ((*(_DWORD*)(a2 + 8) & 0x1000) == 0)
		*(_DWORD*)(a1 + 88) |= 0x8000u;
	if ((*(_DWORD*)(a2 + 8) & 0x2000) == 0)
		*(_DWORD*)(a1 + 88) |= 0x10000u;
	if ((*(_DWORD*)(a2 + 8) & 0x4000) == 0)
		*(_DWORD*)(a1 + 88) |= 0x80000u;
	if ((*(_DWORD*)(a2 + 8) & 0x8000) == 0)
		*(_DWORD*)(a1 + 88) |= 0x100000u;
	if ((*(_DWORD*)(a2 + 8) & 0x10000) == 0)
		*(_DWORD*)(a1 + 88) |= 0x200000u;
	if ((*(_DWORD*)(a2 + 8) & 0x20000) == 0)
		*(_DWORD*)(a1 + 88) |= 0x20000u;
}

