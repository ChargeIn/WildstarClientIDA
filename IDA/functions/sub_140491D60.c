#include "../winhttp.h"

//----- (0000000140491D60) ----------------------------------------------------
__int64 __fastcall sub_140491D60(__int64 a1, int a2, unsigned int a3)
{
	__int64 v4; // r9
	__int64 v5; // rcx
	__int64 v6; // rax
	unsigned __int64 v8; // r10
	unsigned __int64 v9; // r8
	__int64 v10; // rbx
	__int64 v11; // r9
	unsigned __int64 v12; // rdx
	unsigned int v13; // eax
	__int64 v14; // [rsp+10h] [rbp+8h]

	v4 = *(_QWORD*)(qword_140C65968 + 80);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v14 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v14 = *(_QWORD*)(qword_140C65968 + 80);
	if (v14 == v4)
		return 0i64;
	v8 = *(_QWORD*)(v14 + 48);
	if (!v8)
		return 0i64;
	v9 = 0i64;
	v10 = *(_QWORD*)(v14 + 40);
	v11 = *(_QWORD*)(v14 + 48);
	if (v8 > 1)
	{
		do
		{
			v12 = (v11 + v9) >> 1;
			v13 = *(_DWORD*)(**(_QWORD**)(v10 + 8 * v12) + 12i64);
			if (a3 < v13)
			{
				v11 = (v11 + v9) >> 1;
			}
			else
			{
				if (a3 <= v13)
					goto LABEL_19;
				v9 = (v11 + v9) >> 1;
			}
		} while (v11 - v9 > 1);
	}
	v12 = v9;
LABEL_19:
	if (v12 >= v8)
		v12 = v8 - 1;
	return *(_QWORD*)(v10 + 8 * v12);
}
// 140C65968: using guessed type __int64 qword_140C65968;

