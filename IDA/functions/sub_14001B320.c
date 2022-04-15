//----- (000000014001B320) ----------------------------------------------------
__int64 __fastcall sub_14001B320(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned int v3; // r10d

	v3 = *(_DWORD*)a1 >> a2;
	if (((a2 + a3 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x20)
		v3 |= *(unsigned __int8*)(a1 + 4) << (32 - a2);
	if (a3 >= 0x20)
		return v3;
	else
		return v3 & ((1 << a3) - 1);
}

