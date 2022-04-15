#include "../winhttp.h"

//----- (00000001405518E0) ----------------------------------------------------
__int64* __fastcall sub_1405518E0(__int64 a1, __int64* a2)
{
	int v2; // eax
	__int64 v3; // rsi
	int* v6; // rax
	__int64 v7; // r15
	__int64 v8; // rdi
	__int64 v9; // r12
	int* v10; // rax
	int* v11; // r14
	__int64 v12; // rdi
	unsigned int v13; // eax

	v2 = *(_DWORD*)(a1 + 16);
	v3 = 0i64;
	a2[1] = 0i64;
	*a2 = 0i64;
	if (!v2)
		return a2;
	do
	{
		if (!*(_QWORD*)(a1 + 8 * v3 + 24))
			break;
		v6 = sub_14018B280(88i64, 0);
		if (v6)
			v7 = sub_1404DD4C0((__int64)v6, **(_DWORD**)(a1 + 8), v3);
		else
			v7 = 0i64;
		v8 = a2[1];
		v9 = v8 + 1;
		v10 = sub_14018DB00(*a2, v8 + 1, 8i64);
		v11 = v10;
		*(_QWORD*)&v10[2 * v8] = v7;
		v12 = *a2;
		if ((int*)*a2 != v10)
		{
			sub_1407DB590(v10, (int*)*a2, 8 * a2[1]);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			*a2 = (__int64)v11;
		}
		v13 = *(_DWORD*)(a1 + 16);
		v3 = (unsigned int)(v3 + 1);
		a2[1] = v9;
	} while ((unsigned int)v3 < v13);
	return a2;
}

