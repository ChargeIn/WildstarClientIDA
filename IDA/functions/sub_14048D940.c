#include "../winhttp.h"

//----- (000000014048D940) ----------------------------------------------------
__int64 __fastcall sub_14048D940(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // rax
	_DWORD* v5; // rbx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdi
	unsigned int v10; // edx
	__int64 v11; // rcx
	__int64 result; // rax
	__int64 v13; // [rsp+50h] [rbp+8h]
	__int64 v14; // [rsp+50h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 16);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v13 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v13 = *(_QWORD*)(a1 + 16);
	if (v13 == v2)
		return 0i64;
	v5 = *(_DWORD**)(v13 + 40);
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 48);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a2)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v14 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v14 = v6;
	if (v14 == v6)
	{
		v9 = 0i64;
	}
	else
	{
		v9 = *(_QWORD*)(v14 + 40);
		if (v9)
		{
			if (*(_DWORD*)(v9 + 48))
			{
				v10 = v5[22];
			}
			else
			{
				if (!v5[7])
					goto LABEL_30;
				v10 = v5[23];
			}
			if (v10)
			{
				v11 = sub_140487750(v7, v10, 1);
				if (v11)
				{
					result = sub_140487E40(v11, 0, 0i64, 0, 0, 0, 0i64);
					if ((_DWORD)result)
						return result;
				}
			}
		}
	}
	if (!v5[7])
	{
	LABEL_30:
		if (!v5[8])
			return (unsigned int)v5[15];
	}
	result = (unsigned int)v5[9];
	if (!(_DWORD)result || v9 && *(_DWORD*)(v9 + 48))
		return (unsigned int)v5[15];
	return result;
}

