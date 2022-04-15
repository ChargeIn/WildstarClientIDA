//----- (0000000140559500) ----------------------------------------------------
__int64 __fastcall sub_140559500(__int64 a1, __int64 a2, unsigned int a3)
{
	int v4; // eax
	unsigned __int64 v5; // rbp
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int64 v10; // rax
	float v11; // xmm6_4

	v4 = dword_140C4D2A0;
	v5 = a3;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D2A0)
		v4 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C4D2B0 + v4))
		return 2147500037i64;
	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 72) = 300;
	*(_QWORD*)(a1 + 76) = -1i64;
	v8 = *(_QWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 84) = -1;
	*(_DWORD*)(a1 + 128) = 0;
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 152i64))(v8);
	if (!a2 || !*(_QWORD*)(qword_140C65898 + 25744))
		return 2147500037i64;
	if (v5 >= *(_QWORD*)(qword_140C65898 + 2712))
		return 2147500037i64;
	v9 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 2704) + 8 * v5);
	if (!v9)
		return 2147500037i64;
	*(_DWORD*)(a1 + 4) = 4;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 76) = v5;
	v10 = sub_140200220(0x1B2u);
	if (v10)
		v11 = *(float*)(v10 + 24);
	else
		v11 = 0.85000002;
	*(float*)(a1 + 60) = v11 * *(float*)(*(_QWORD*)(sub_1405A4B80(v9, 1) + 112) + 112i64);
	sub_140559920(a1);
	return 0i64;
}
// 140559920: using guessed type __int64 __fastcall sub_140559920(_QWORD);
// 140C4D2A0: using guessed type int dword_140C4D2A0;
// 140C4D2B0: using guessed type int dword_140C4D2B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

