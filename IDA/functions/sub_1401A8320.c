#include "../winhttp.h"

//----- (00000001401A8320) ----------------------------------------------------
__int64 __fastcall sub_1401A8320(__int64 a1)
{
	int* v1; // rdi
	_BYTE* v3; // rax
	__int64 v4; // rcx
	int v5; // eax
	unsigned __int64 v6; // rax
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	int* v9; // rax
	unsigned __int64 v10; // r8

	*(_BYTE*)(a1 + 8) = 0;
	v1 = (int*)(a1 + 280);
	*(_QWORD*)a1 = off_140B57B40;
	*(_QWORD*)(a1 + 104) = 10i64;
	*(_QWORD*)(a1 + 16) = a1 + 24;
	*(_BYTE*)(a1 + 112) = 1;
	*(_DWORD*)(a1 + 132) = -1;
	*(_WORD*)(a1 + 136) = 1;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_DWORD*)(a1 + 128) = 0;
	*(_QWORD*)(a1 + 272) = a1 + 280;
	*(_QWORD*)(a1 + 320) = 20i64;
	v3 = (_BYTE*)(a1 + 202);
	v4 = 64i64;
	do
	{
		*(v3 - 64) = 0;
		*v3++ = 0;
		--v4;
	} while (v4);
	*(_BYTE*)(a1 + 172) = 1;
	*(_WORD*)(a1 + 176) = 257;
	*(_BYTE*)(a1 + 198) = 1;
	*(_BYTE*)(a1 + 200) = 1;
	*(_BYTE*)(a1 + 240) = 1;
	*(_BYTE*)(a1 + 262) = 1;
	*(_BYTE*)(a1 + 264) = 1;
	v5 = *(_DWORD*)(a1 + 324) + 1;
	if (v5 > *(_DWORD*)(a1 + 320))
	{
		v6 = sub_14018A3E0(2i64 * v5);
		v7 = *(_QWORD*)(a1 + 272);
		v8 = v6 >> 1;
		*(_DWORD*)(a1 + 320) = v8;
		if ((int*)v7 == v1)
		{
			v9 = sub_14018B280(2i64 * (int)v8, 0);
			v10 = 2i64 * *(int*)(a1 + 324);
			*(_QWORD*)(a1 + 272) = v9;
			sub_1407DB590(v9, v1, v10);
		}
		else
		{
			*(_QWORD*)(a1 + 272) = sub_14018C320(v7, 2i64 * (int)v8, 0);
		}
	}
	*(_WORD*)(*(_QWORD*)(a1 + 272) + 2i64 * (int)(*(_DWORD*)(a1 + 324))++) = 0;
	return a1;
}
// 140B57B40: using guessed type __int64 (__fastcall *off_140B57B40[21])();

