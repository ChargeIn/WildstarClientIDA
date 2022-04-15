#include "../winhttp.h"

//----- (000000014089BF60) ----------------------------------------------------
__int64 __fastcall sub_14089BF60(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // r9
	int* v5; // r8
	int v6; // eax
	int v7; // ecx
	int v8; // edx
	int v9; // r8d
	__int64 result; // rax

	v3 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 32i64);
	v4 = v3;
	if (!v3)
		return 0i64;
	*(_QWORD*)v3 = off_1409A9A38;
	*(_BYTE*)(v3 + 24) = 0;
	if (a1)
		v5 = (int*)(a1 + 8);
	else
		v5 = 0i64;
	v6 = *v5;
	v7 = v5[1];
	v8 = v5[2];
	v9 = v5[3];
	*(_DWORD*)(v4 + 8) = v6;
	*(_DWORD*)(v4 + 12) = v7;
	*(_DWORD*)(v4 + 16) = v8;
	*(_DWORD*)(v4 + 20) = v9;
	result = v4;
	*(_BYTE*)(v4 + 24) = -1;
	return result;
}
// 1409A9A38: using guessed type __int64 (__fastcall *off_1409A9A38[6])();

