//----- (0000000140525820) ----------------------------------------------------
_BOOL8 __fastcall sub_140525820(__int64 a1, int* a2)
{
	bool v4; // zf
	int v5; // eax

	sub_1400D23B0(a1, a2);
	*(_DWORD*)(a1 + 848) = *a2;
	*(_DWORD*)(a1 + 852) = a2[1];
	*(_BYTE*)(a1 + 1436) ^= (*(_BYTE*)(a1 + 1436) ^ ((unsigned __int64)*(unsigned int*)(a1 + 656) >> 21)) & 1;
	if (*(char*)(a1 + 28) < 0)
	{
		v5 = dword_140C636A8;
		if (*(_DWORD*)(a1 + 1480) == -1)
			*(_DWORD*)(a1 + 1480) = dword_140C636A8;
		if ((*(_BYTE*)(a1 + 1436) & 0x20) != 0 && *(_DWORD*)(a1 + 1484) == -1)
			*(_DWORD*)(a1 + 1484) = v5;
	}
	else
	{
		v4 = (*(_BYTE*)(a1 + 1436) & 0x20) == 0;
		*(_QWORD*)(a1 + 1480) = -1i64;
		if (!v4)
			*(_BYTE*)(a1 + 1436) &= 0x1Fu;
	}
	sub_1400C3F20(a1 + 1024, a2);
	return (*(_BYTE*)(a1 + 1436) & 0x20) == 0;
}
// 140C636A8: using guessed type int dword_140C636A8;

