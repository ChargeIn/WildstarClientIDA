#include "../winhttp.h"

//----- (000000014088F140) ----------------------------------------------------
char __fastcall sub_14088F140(__int64 a1, __int64 a2, unsigned int* a3, signed int* a4)
{
	char result; // al
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	_DWORD* v10; // r15
	int v11; // edi
	int v12; // ebx
	int v13; // eax
	int v14; // r9d
	int v15; // r8d
	signed int v16; // edx

	if ((*(_BYTE*)(a1 + 98) & 0xFu) > 1)
		return 0;
	v8 = *(_QWORD*)(a2 + 168);
	if ((*(_DWORD*)(v8 + 16) & 0x7C) == 4)
		*a3 = *(_DWORD*)(v8 + 40);
	else
		*a3 = 0;
	*a3 = (*a3 + 1023) & 0xFFFFFC00;
	v9 = *(_QWORD**)(a1 + 16);
	v10 = *(_DWORD**)(a2 + 576);
	v11 = *(_DWORD*)(v9[13] + 72i64);
	v12 = sub_14088FDC0(v9, *(_QWORD*)(a1 + 136));
	v13 = sub_140892310(*(_QWORD*)(a1 + 128));
	v14 = v10[2];
	v15 = v12 - v11 + v13;
	if ((int)(*a3 + v15) >= v14 + v10[3])
		return 0;
	v16 = (v15 + *a3 + v10[5] - v14) % v10[4];
	result = 1;
	if (v16 < 0)
		v16 = 0;
	*a4 = v16;
	return result;
}

