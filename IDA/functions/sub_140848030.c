//----- (0000000140848030) ----------------------------------------------------
__int64 __fastcall sub_140848030(__int64 a1, __int64 a2)
{
	int v4; // eax
	int v6; // edx
	int v7; // ecx

	v4 = sub_140861310(*(_BYTE**)(a1 + 16));
	if (v4 == 63)
	{
		if (*(int*)(a2 + 408) < 0 && (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 32i64) & 2) == 0)
			*(_BYTE*)(a1 + 93) = 1;
		return 63i64;
	}
	if (v4 != 1)
		return 2i64;
	if (*(char*)(a2 + 382) < 0)
		v6 = (unsigned __int16)(0x5DC00u / dword_140C110B4);
	else
		v6 = 1024;
	v7 = *(_DWORD*)(a2 + 408);
	if (v7 >= v6 * (HIDWORD(qword_140C61B20) + 1))
		return 63i64;
	if (v7 < 0 && (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 32i64) & 2) == 0)
		*(_BYTE*)(a1 + 93) = 1;
	return 1i64;
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140C61B20: using guessed type __int64 qword_140C61B20;

