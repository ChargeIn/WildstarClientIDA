//----- (00000001400CA060) ----------------------------------------------------
__int64 __fastcall sub_1400CA060(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rcx
	__int64 result; // rax

	v2 = dword_140C3C1E0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3C1E0)
		v2 = *(_DWORD*)qword_140C63750;
	sub_1400D42F0(a1, 1, 0, dword_140C3C1F0[v2]);
	sub_1400E8B00(*(_QWORD*)(a1 + 32), a1);
	v3 = *(_QWORD*)(a1 + 360);
	if (v3)
		sub_14010B100((unsigned int*)(v3 + 352));
	result = *(_QWORD*)(a1 + 656) >> 34;
	if ((*(_QWORD*)(a1 + 656) & 0x400000000i64) != 0)
		result = sub_1400E9410(*(_QWORD*)(a1 + 32), *(_DWORD*)(a1 + 24));
	if (!*(_QWORD*)(a1 + 16))
	{
		result = (unsigned int)dword_140C636A8;
		*(_DWORD*)(a1 + 952) = dword_140C636A8;
	}
	return result;
}
// 140C3C1E0: using guessed type int dword_140C3C1E0;
// 140C3C1F0: using guessed type float dword_140C3C1F0[22];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;

