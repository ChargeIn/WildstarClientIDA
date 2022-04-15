#include "../winhttp.h"

//----- (00000001405E7330) ----------------------------------------------------
__int64 __fastcall sub_1405E7330(__int64 a1, __int64 a2)
{
	unsigned int v2; // r9d
	__int64 v4; // rcx
	_DWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // r11
	__int64 v8; // rdx
	int v9; // ecx

	*(_QWORD*)(a1 + 48) = 4i64;
	v2 = 0;
	*(_QWORD*)a1 = off_140B6E4A0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_DWORD*)(a1 + 72) = 1414420037;
	*(_DWORD*)(a1 + 140) = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	if (a2)
	{
		v4 = a1 - a2;
		v5 = (_DWORD*)(a2 + 28);
		v6 = v4 - 20;
		v7 = v4 - 8;
		v8 = v4 + 4;
		do
		{
			if (!*v5)
				break;
			++* (_QWORD*)(a1 + 56);
			*(_DWORD*)((char*)v5 + v6) = *v5;
			*(_DWORD*)((char*)v5 + v7) = v5[3];
			v9 = v5[6];
			if (v9)
				*(_DWORD*)((char*)v5 + v8) = v9;
			++v2;
			++v5;
		} while (v2 < 3);
	}
	return a1;
}
// 140B6E4A0: using guessed type __int64 (__fastcall *off_140B6E4A0[19])();

