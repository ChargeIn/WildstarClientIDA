//----- (00000001405510D0) ----------------------------------------------------
__int64 __fastcall sub_1405510D0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // eax
	__int64 v6; // rdx
	int v7; // eax

	v2 = *(_DWORD*)(a1 + 16);
	if (a2 == v2 || a2 > v2)
		return 0i64;
	if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8)) == 3)
		return 1i64;
	v6 = sub_1405FC7B0(*(_QWORD*)qword_140C65B80, **(_DWORD**)(a1 + 8));
	if (!v6)
		return 0i64;
	if (a2 < 6)
	{
		v7 = 1 << (a2 + 2);
		if (v7)
			return (unsigned int)v7 & *(_DWORD*)(v6 + 68);
	}
	return 0i64;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

