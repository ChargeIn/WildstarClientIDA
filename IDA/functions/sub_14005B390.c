#include "../winhttp.h"

//----- (000000014005B390) ----------------------------------------------------
void __fastcall sub_14005B390(__int64 a1, _QWORD* a2)
{
	__int64* v3; // rdi
	__int64 v4; // r8
	bool v5; // zf
	int v6; // eax
	__int64 v7; // r9
	__int64* v8; // rdx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	if (!a1 || (v3 = (__int64*)(a1 + 32), a1 == -32))
	{
		v5 = *((_DWORD*)a2 + 7) == 0;
		v9 = 0i64;
		if (!v5)
			return;
		v7 = a2[2];
		v4 = 8i64;
		v8 = &v9;
		goto LABEL_9;
	}
	v4 = *(_QWORD*)(a1 + 16) + 1i64;
	v5 = *((_DWORD*)a2 + 7) == 0;
	v9 = v4;
	if (v5)
	{
		v6 = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(*a2, &v9, 8i64, a2[2]);
		v4 = v9;
		*((_DWORD*)a2 + 7) = v6;
	}
	if (!*((_DWORD*)a2 + 7))
	{
		v7 = a2[2];
		v8 = v3;
	LABEL_9:
		*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, __int64))a2[1])(*a2, v8, v4, v7);
	}
}

