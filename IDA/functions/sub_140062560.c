#include "../winhttp.h"

//----- (0000000140062560) ----------------------------------------------------
_QWORD* __fastcall sub_140062560(__int64 a1, int* a2, unsigned __int64 a3, unsigned int a4)
{
	__int64 v8; // rax
	_QWORD* v9; // rbx
	char v10; // dl
	__int64 v11; // r8
	__int64 v12; // rbp
	int v13; // edx

	if (a3 + 1 > 0xFFFFFFFFFFFFFFDDui64)
		sub_14005ABE0(a1, aMemoryAllocati);
	v8 = sub_140064780(a1, 0i64, 0i64, a3 + 33);
	*(_QWORD*)(v8 + 16) = a3;
	*(_DWORD*)(v8 + 12) = a4;
	v9 = (_QWORD*)v8;
	v10 = *(_BYTE*)(*(_QWORD*)(a1 + 32) + 32i64) & 3;
	*(_BYTE*)(v8 + 8) = 4;
	*(_BYTE*)(v8 + 10) = 0;
	*(_BYTE*)(v8 + 9) = v10;
	sub_1407DB590((int*)(v8 + 32), a2, a3);
	*((_BYTE*)v9 + a3 + 32) = 0;
	v11 = *(_QWORD*)(a1 + 32);
	v12 = (*(_DWORD*)(v11 + 12) - 1) & a4;
	*v9 = *(_QWORD*)(8 * v12 + *(_QWORD*)v11);
	*(_QWORD*)(8 * v12 + *(_QWORD*)v11) = v9;
	v13 = *(_DWORD*)(v11 + 12);
	if (++ * (_DWORD*)(v11 + 8) > (unsigned int)v13 && v13 <= 1073741822)
		sub_140062450(a1, 2 * v13);
	return v9;
}

