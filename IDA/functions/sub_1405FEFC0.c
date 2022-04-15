#include "../winhttp.h"

//----- (00000001405FEFC0) ----------------------------------------------------
__int64 __fastcall sub_1405FEFC0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rdx
	unsigned int v6; // r14d
	__int64 v7; // r8
	__int64 v8; // r9
	__int64 v9; // rdi
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned int v13; // eax
	__int64 v14; // rbx
	unsigned __int64 v15; // rcx
	unsigned __int64 v16; // rdx
	_DWORD* v17; // rax
	__int64 v18; // [rsp+40h] [rbp+8h] BYREF

	result = sub_1405FF370(a1, a2);
	v5 = *(_QWORD*)(a1 + 40);
	v6 = result;
	v7 = *(_QWORD*)(v5 + 8);
	v8 = v5;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == v5 || (v18 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v18 = v5;
	v9 = v18;
	if (v18 != v5)
	{
		v10 = *(_QWORD*)(a1 + 8);
		v11 = *(_QWORD*)(v10 + 8);
		v12 = v10;
		while (v11)
		{
			if (*(_DWORD*)(v11 + 32) < *(_DWORD*)(v18 + 44))
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v12 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		}
		if (v12 == v10 || (v13 = *(_DWORD*)(v12 + 32), v18 = v12, *(_DWORD*)(v9 + 44) < v13))
			v18 = v10;
		v14 = v18;
		if (v18 != v10)
		{
			v15 = *(_QWORD*)(v18 + 48);
			v16 = 0i64;
			if (v15)
			{
				v17 = *(_DWORD**)(v18 + 40);
				while (*v17 != a2)
				{
					++v16;
					++v17;
					if (v16 >= v15)
						goto LABEL_25;
				}
				sub_1401C2F20(v18 + 40, v16);
			}
		LABEL_25:
			if (!*(_QWORD*)(v14 + 48))
			{
				v18 = v14;
				sub_1405FFEA0(a1, &v18);
			}
		}
		v18 = v9;
		sub_1405FFA80(a1 + 32, &v18);
		return v6;
	}
	return result;
}

