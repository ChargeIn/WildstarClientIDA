//----- (0000000140152AA0) ----------------------------------------------------
__int64 __fastcall sub_140152AA0(__int64 a1, int* a2, int* a3, __int64 a4, void(__fastcall*** a5)(_QWORD), _DWORD* a6)
{
	_QWORD* v7; // rcx
	__int64 v8; // rax
	__int64 v10; // rax
	__int64 result; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a4;
	v7 = (_QWORD*)(a1 + 24);
	*(v7 - 3) = &off_140B5C740;
	v8 = 0i64;
	v7[1] = 0i64;
	v7[2] = 0i64;
	v7[3] = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v8;
		while (*((_WORD*)a2 + v8));
	}
	sub_14001C1B0(v7, a2, (__int64)a2 + 2 * v8);
	v10 = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v10;
		while (*((_WORD*)a3 + v10));
	}
	sub_14001C1B0((_QWORD*)(a1 + 56), a3, (__int64)a3 + 2 * v10);
	*(_DWORD*)(a1 + 96) = *a6;
	*(_DWORD*)(a1 + 100) = a6[1];
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = qword_140C77760;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = qword_140C77760;
	if (a5)
		(**a5)(a5);
	result = a1;
	*(_QWORD*)(a1 + 88) = a5;
	return result;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5C740: using guessed type __int64 (__fastcall *off_140B5C740)();
// 140C77760: using guessed type __int64 qword_140C77760;

