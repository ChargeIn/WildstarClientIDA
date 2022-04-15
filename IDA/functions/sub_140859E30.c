//----- (0000000140859E30) ----------------------------------------------------
__int64 __fastcall sub_140859E30(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v3; // rbp
	__int64 v5; // rbx
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rsi

	v2 = a1[7];
	v3 = a2;
	if (!v2 || !*(_WORD*)(v2 + 72) && !*(_WORD*)(v2 + 74))
		return 1i64;
	if (*(_BYTE*)(a2 + 29))
	{
		LOBYTE(a2) = *(_DWORD*)a2 == 1;
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 344i64))(a1, a2);
	}
	*(_BYTE*)(v3 + 28) = 1;
	v5 = (__int64)(a1[15] - a1[14]) >> 3;
	if ((_DWORD)v5)
	{
		v6 = 8i64 * (unsigned int)v5;
		do
		{
			v6 -= 8i64;
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v6 + a1[14]) + 128i64))(*(_QWORD*)(v6 + a1[14]), v3);
			LODWORD(v5) = v5 - 1;
		} while ((_DWORD)v5);
	}
	v7 = (__int64)(a1[18] - a1[17]) >> 3;
	if ((_DWORD)v7)
	{
		v8 = 8i64 * (unsigned int)v7;
		do
		{
			v8 -= 8i64;
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v8 + a1[17]) + 128i64))(*(_QWORD*)(v8 + a1[17]), v3);
			LODWORD(v7) = v7 - 1;
		} while ((_DWORD)v7);
	}
	return 1i64;
}
// 140859E57: conditional instruction was optimized away because rax.8!=0

