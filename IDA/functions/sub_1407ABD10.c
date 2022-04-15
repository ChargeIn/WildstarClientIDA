//----- (00000001407ABD10) ----------------------------------------------------
__int64 __fastcall sub_1407ABD10(__int64 a1, unsigned int a2, unsigned int a3, int a4, int a5, unsigned int a6)
{
	int v6; // ebx
	unsigned int v7; // r11d
	unsigned __int64 v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // r9
	__int64 v13; // rax

	v6 = dword_140C54A20;
	v7 = 0;
	v10 = 1i64;
	if (*(_DWORD*)qword_140C63750 < dword_140C54A20)
		v6 = *(_DWORD*)qword_140C63750;
	v11 = 0i64;
	if (*((_BYTE*)&dword_140C54A30 + v6))
		v10 = 8i64;
	while (1)
	{
		v12 = (unsigned int)dword_140B53390[8 * a2 + v11];
		v13 = *(_QWORD*)(a1 + 8 * (a6 + 2 * (v12 + 8i64 * a3)) + 160);
		if (v13)
			break;
	LABEL_11:
		if ((_DWORD)v12)
		{
			v11 = ++v7;
			if (v7 < v10)
				continue;
		}
		return 0i64;
	}
	while (!*(_QWORD*)v13
		|| (a5 & *(_DWORD*)(v13 + 16)) != *(_DWORD*)(v13 + 12)
		|| *(_DWORD*)(a1 + 92) && **(_DWORD**)v13 != 7)
	{
		v13 = *(_QWORD*)(v13 + 32);
		if (!v13)
			goto LABEL_11;
	}
	if (*(_DWORD*)(v13 + 8) != a4)
		return 0i64;
	return *(_QWORD*)v13;
}
// 1407ABD71: conditional instruction was optimized away because rax.8 is in (==1|==8)
// 140B53390: using guessed type int dword_140B53390[64];
// 140C54A20: using guessed type int dword_140C54A20;
// 140C54A30: using guessed type int dword_140C54A30;
// 140C63750: using guessed type __int64 qword_140C63750;

