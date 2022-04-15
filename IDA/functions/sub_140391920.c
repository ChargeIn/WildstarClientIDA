//----- (0000000140391920) ----------------------------------------------------
__int64 __fastcall sub_140391920(__int64 a1, float a2, void(__fastcall*** a3)(_QWORD), __int64 a4, __int64 a5, int a6)
{
	void(__fastcall * **v7)(_QWORD); // rcx

	*(float*)(a1 + 12) = a2;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a3;
	*(_QWORD*)(a1 + 24) = a4;
	*(_QWORD*)a1 = off_140B65FC8;
	if (a3)
		(**a3)(a3);
	v7 = *(void(__fastcall****)(_QWORD))(a1 + 24);
	if (v7)
		(**v7)(v7);
	if ((a6 & 0x8003F) != 0)
	{
		if ((a6 & 1) != 0)
			*(_DWORD*)(a1 + 64) = *(_DWORD*)(a5 + 32);
		if ((a6 & 2) != 0)
			*(_OWORD*)(a1 + 32) = *(_OWORD*)a5;
		if ((a6 & 4) != 0)
		{
			*(_DWORD*)(a1 + 68) = *(_DWORD*)(a5 + 36);
			*(_DWORD*)(a1 + 72) = *(_DWORD*)(a5 + 40);
			*(_DWORD*)(a1 + 76) = *(_DWORD*)(a5 + 44);
			*(_DWORD*)(a1 + 80) = *(_DWORD*)(a5 + 48);
		}
		if ((a6 & 8) != 0)
		{
			*(_QWORD*)(a1 + 48) = *(_QWORD*)(a5 + 16);
			*(_QWORD*)(a1 + 56) = *(_QWORD*)(a5 + 24);
		}
		if ((a6 & 0x10) != 0)
			*(_DWORD*)(a1 + 84) = *(_DWORD*)(a5 + 52);
		if ((a6 & 0x20) != 0)
			*(_DWORD*)(a1 + 88) = *(_DWORD*)(a5 + 56);
		if ((a6 & 0x80000) != 0)
			*(_DWORD*)(a1 + 92) = *(_DWORD*)(a5 + 60);
	}
	return a1;
}
// 140B65FC8: using guessed type __int64 (__fastcall *off_140B65FC8[10])();

