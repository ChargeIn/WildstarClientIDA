//----- (000000014057D900) ----------------------------------------------------
__int64 __fastcall sub_14057D900(__int64 a1, __int64 a2)
{
	unsigned int v2; // eax
	unsigned __int64 v3; // r8

	if (a1 != -528)
	{
		v2 = *(_DWORD*)(a2 + 16);
		v3 = (unsigned __int64)v2 >> 6;
		if (v3 < 2)
			*(_QWORD*)(a1 + 528 + 8 * v3) |= 1i64 << (v2 & 0x3F);
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildPerkUnlocked", byte_1409EA6EC, a1, *(_DWORD*)(a2 + 16));
	return 0i64;
}
// 1409EA6EC: using guessed type _BYTE byte_1409EA6EC[32];
// 140C65898: using guessed type __int64 qword_140C65898;

