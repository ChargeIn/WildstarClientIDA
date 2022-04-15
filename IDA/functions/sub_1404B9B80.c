#include "../winhttp.h"

//----- (00000001404B9B80) ----------------------------------------------------
__int64 __fastcall sub_1404B9B80(__int64 a1)
{
	__int64 v2; // rbx
	int v3; // edi
	int* v4; // rax
	int* v5; // r14
	int* v6; // rdx
	__int64 v7; // rcx
	int v9; // [rsp+40h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 840) >= 0xAui64)
	{
		if (**(_DWORD**)(a1 + 832) + 1000 >= (unsigned int)dword_140C636A8)
		{
			sub_1403CC530(qword_140C65898, 0x76u);
			return 1i64;
		}
		else
		{
			sub_1401C2F20(a1 + 832, 0i64);
			v9 = dword_140C636A8;
			sub_140003460((__int64*)(a1 + 832), &v9);
			return 0i64;
		}
	}
	else
	{
		v2 = *(_QWORD*)(a1 + 840);
		v3 = dword_140C636A8;
		v4 = sub_14018DB00(*(_QWORD*)(a1 + 832), v2 + 1, 4i64);
		v5 = v4;
		v4[v2] = v3;
		v6 = *(int**)(a1 + 832);
		if (v6 != v4)
		{
			sub_1407DB590(v4, v6, 4i64 * *(_QWORD*)(a1 + 840));
			v7 = *(_QWORD*)(a1 + 832);
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			*(_QWORD*)(a1 + 832) = v5;
		}
		*(_QWORD*)(a1 + 840) = v2 + 1;
		return 0i64;
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

