//----- (0000000140844710) ----------------------------------------------------
char __fastcall sub_140844710(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 i; // rax
	unsigned __int8 v5; // cl
	char result; // al
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // r9
	__int64 j; // rbx
	__int64 k; // rbx

	for (i = qword_140C61F90; i; i = *(_QWORD*)(i + 24))
	{
		v5 = *(_BYTE*)(i + 383);
		a2 = v5;
		LOBYTE(a2) = v5 & 0xCF | (2 * (v5 & 0x10));
		*(_BYTE*)(i + 383) = a2;
	}
	result = sub_1408554C0(word_140C10F30, a2, a3, a4);
	for (j = qword_140C61FD0; j; j = *(_QWORD*)(j + 32))
		result = sub_1408554C0((_WORD*)j, v7, v8, v9);
	for (k = qword_140C61FD8; k; k = *(_QWORD*)(k + 32))
		result = sub_1408554C0((_WORD*)k, v7, v8, v9);
	return result;
}
// 14084476E: variable 'v7' is possibly undefined
// 14084476E: variable 'v8' is possibly undefined
// 14084476E: variable 'v9' is possibly undefined
// 140C10F30: using guessed type _WORD word_140C10F30[12];
// 140C61F90: using guessed type __int64 qword_140C61F90;
// 140C61FD0: using guessed type __int64 qword_140C61FD0;
// 140C61FD8: using guessed type __int64 qword_140C61FD8;

