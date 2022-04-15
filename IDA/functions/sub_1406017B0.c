#include "../winhttp.h"

//----- (00000001406017B0) ----------------------------------------------------
__int64 __fastcall sub_1406017B0(__int64 a1, int a2)
{
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rax
	_DWORD* v6; // r8
	unsigned __int64 v7; // rbp
	unsigned __int64 v8; // r14
	int* v9; // rax
	int* v10; // rdx
	int* v11; // rsi
	__int64 v12; // rcx
	__int64 v13; // rax

	v3 = *(_QWORD*)(a1 + 120);
	v4 = 0i64;
	if (v3)
	{
		v6 = *(_DWORD**)(a1 + 112);
		while (*v6 != a2)
		{
			++v4;
			v6 += 2;
			if (v4 >= v3)
				goto LABEL_5;
		}
		return *(_QWORD*)(a1 + 112) + 8 * v4;
	}
	else
	{
	LABEL_5:
		v7 = v3;
		v8 = v3 + 1;
		v9 = sub_14018DB00(*(_QWORD*)(a1 + 112), v3 + 1, 8i64);
		v10 = *(int**)(a1 + 112);
		v11 = v9;
		if (v10 != v9)
		{
			sub_1407DB590(v9, v10, 8i64 * *(_QWORD*)(a1 + 120));
			v12 = *(_QWORD*)(a1 + 112);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			*(_QWORD*)(a1 + 112) = v11;
		}
		v13 = *(_QWORD*)(a1 + 112);
		*(_QWORD*)(a1 + 120) = v8;
		*(_DWORD*)(v13 + 8 * v7) = a2;
		return *(_QWORD*)(a1 + 112) + 8 * v7;
	}
}

