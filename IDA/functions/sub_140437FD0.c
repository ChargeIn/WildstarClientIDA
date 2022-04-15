//----- (0000000140437FD0) ----------------------------------------------------
__int64 __fastcall sub_140437FD0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 result; // rax
	int v6; // edx
	int v7; // eax
	__int64 v8; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C658D8 + 8);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v8 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v8 = *(_QWORD*)(qword_140C658D8 + 8);
	result = v8;
	if (v8 != v2)
	{
		v6 = dword_140C3B390;
		v7 = dword_140C3B390;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
			v7 = *(_DWORD*)qword_140C63750;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
			v6 = *(_DWORD*)qword_140C63750;
		return sub_14001A770(
			(__int64)&off_140C3B380,
			v6,
			*((_DWORD*)&off_140C3B380 + v7 + 8) & (unsigned int)~(1 << *(_DWORD*)(**(_QWORD**)(v8 + 40) + 8i64)));
	}
	return result;
}
// 140C3B380: using guessed type __int64 (__fastcall *off_140C3B380)();
// 140C3B390: using guessed type int dword_140C3B390;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C658D8: using guessed type __int64 qword_140C658D8;

