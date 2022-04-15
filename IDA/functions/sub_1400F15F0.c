#include "../winhttp.h"

//----- (00000001400F15F0) ----------------------------------------------------
__int64 __fastcall sub_1400F15F0(__int64 a1, int* a2, int* a3, int* a4, int a5, __int64 a6)
{
	_QWORD* v7; // rcx
	__int64 v8; // rbx
	__int64 v11; // r8
	int* v13; // rdx
	__int64 v14; // rax

	*(_BYTE*)a1 = 1;
	*(_DWORD*)(a1 + 4) = 0;
	v7 = (_QWORD*)(a1 + 8);
	v8 = -1i64;
	v7[1] = 0i64;
	v7[2] = 0i64;
	v7[3] = 0i64;
	v11 = -1i64;
	do
		++v11;
	while (*((_BYTE*)a2 + v11));
	sub_14001B240(v7, a2, (__int64)a2 + v11);
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	while (*((_BYTE*)a3 + ++v8) != 0)
		;
	sub_14001B240((_QWORD*)(a1 + 40), a3, (__int64)a3 + v8);
	v13 = (int*)&unk_1409D3F64;
	v14 = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	if (a4)
		v13 = a4;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	if (*(_WORD*)v13)
	{
		do
			++v14;
		while (*((_WORD*)v13 + v14));
	}
	sub_14001C1B0((_QWORD*)(a1 + 72), v13, (__int64)v13 + 2 * v14);
	*(_QWORD*)(a1 + 104) = a6;
	*(_DWORD*)(a1 + 116) = 0;
	*(_DWORD*)(a1 + 112) = a5;
	return a1;
}

