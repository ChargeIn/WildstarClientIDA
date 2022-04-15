#include "../winhttp.h"

//----- (0000000140661770) ----------------------------------------------------
__int64 __fastcall sub_140661770(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // r9d
	int v5; // ebx
	_QWORD* v6; // rdx
	int v7; // eax
	__int64 v8; // r8
	unsigned __int64 v9; // r8
	unsigned __int64 v10; // rax
	__int64 v11; // r10
	_DWORD* v12; // rcx
	unsigned int v13; // edx
	_DWORD* v14; // rcx
	_DWORD* v15; // rax
	__int64 v17; // [rsp+38h] [rbp+10h] BYREF

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(_DWORD*)(v3 + 8);
		v5 = 0;
		v6 = *(_QWORD**)(qword_140C65898 + 27728);
		if (v6 && (!v6[12] ? (v8 = 0i64) : (v8 = *(_QWORD*)(v6[11] + 8i64 * v6[13])), (*(_DWORD*)(v8 + 8) & 0x2000) != 0))
		{
			v9 = v6[15];
			v10 = 0i64;
			if (v9)
			{
				v11 = v6[14];
				v12 = (_DWORD*)(v11 + 4);
				while (*v12 != v4)
				{
					++v10;
					v12 += 2;
					if (v10 >= v9)
						goto LABEL_16;
				}
				v13 = *(_DWORD*)(v11 + 8 * v10);
				if (v13)
				{
					v17 = v13;
					sub_1403F4900(qword_140C65898, 0x432u, (__int64)&v17);
				}
			}
		LABEL_16:
			v7 = 1;
		}
		else
		{
			v7 = 0;
		}
		v14 = *(_DWORD**)(a1 + 16);
		LOBYTE(v5) = v7 != 0;
		v14[2] = 1;
		*v14 = v5;
	}
	else
	{
		v15 = *(_DWORD**)(a1 + 16);
		*v15 = 0;
		v15[2] = 1;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

