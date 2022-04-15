//----- (0000000140869430) ----------------------------------------------------
__int64 __fastcall sub_140869430(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v5; // rbx
	__int64 v6; // rdi
	_QWORD* v7; // rcx

	v2 = a1[7];
	v3 = a2;
	if (!v2 || !*(_WORD*)(v2 + 72) && !*(_WORD*)(v2 + 74))
		return 1i64;
	if (*(_BYTE*)(a2 + 29))
	{
		LOBYTE(a2) = *(_DWORD*)a2 == 1;
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 344i64))(a1, a2);
	}
	v5 = (__int64)(a1[22] - a1[21]) >> 3;
	if (!(_DWORD)v5)
		return 1i64;
	v6 = 8i64 * (unsigned int)v5;
	do
	{
		v6 -= 8i64;
		LODWORD(v5) = v5 - 1;
		v7 = *(_QWORD**)(v6 + a1[21]);
		if (!*(_BYTE*)(v3 + 28) || !v7[9])
			(*(void(__fastcall**)(_QWORD*, __int64))(*v7 + 128i64))(v7, v3);
	} while ((_DWORD)v5);
	return 1i64;
}
// 140869458: conditional instruction was optimized away because rax.8!=0

