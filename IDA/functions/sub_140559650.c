//----- (0000000140559650) ----------------------------------------------------
__int64 __fastcall sub_140559650(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, int a6)
{
	int v7; // eax
	int v12; // edi
	__int64 v13; // rcx
	__int64 v14; // rsi
	__int64 v15; // rcx
	int v16; // eax

	v7 = dword_140C4D2A0;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D2A0)
		v7 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C4D2B0 + v7))
		return 2147500037i64;
	*(_DWORD*)(a1 + 4) = -1;
	v12 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 72) = 300;
	*(_QWORD*)(a1 + 76) = -1i64;
	v13 = *(_QWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 84) = -1;
	*(_DWORD*)(a1 + 128) = 0;
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 152i64))(v13);
	if (!a3 || !*(_QWORD*)(qword_140C65898 + 25744))
		return 2147500037i64;
	v14 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v14)
		return 2147500037i64;
	v15 = sub_1403ACD90(qword_140C65B70, a5, v14);
	if (!v15)
		return 2147500037i64;
	LOBYTE(v12) = a2 != v14;
	*(_DWORD*)(a1 + 4) = v12 + 5;
	v16 = *(_DWORD*)(a3 + 8);
	*(_DWORD*)(a1 + 80) = a4;
	*(_DWORD*)(a1 + 12) = v16;
	*(_DWORD*)(a1 + 76) = a5;
	*(_DWORD*)(a1 + 88) = a6;
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(*(_QWORD*)(v15 + 112) + 112i64);
	sub_140559920(a1);
	return 0i64;
}
// 140559920: using guessed type __int64 __fastcall sub_140559920(_QWORD);
// 140C4D2A0: using guessed type int dword_140C4D2A0;
// 140C4D2B0: using guessed type int dword_140C4D2B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

