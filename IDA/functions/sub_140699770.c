#include "../winhttp.h"

//----- (0000000140699770) ----------------------------------------------------
__int64 __fastcall sub_140699770(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rsi
	int v7; // ebx
	int v8; // ecx
	int v9; // edx
	int v10; // eax
	int v11; // edx
	__int64 v12; // rdx
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	__int64 v17; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_18;
	v4 = *(_QWORD*)(v2 + 8);
	if (!v4)
		goto LABEL_18;
	v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
	v6 = v5;
	if (!v5)
		goto LABEL_18;
	v7 = *(_DWORD*)(v5 + 16);
	v8 = sub_140056D60(a1, 2u) - 1;
	v9 = 200;
	v10 = 200;
	if (*(_DWORD*)(v6 + 16) == 1)
		v10 = 100;
	if (v7 == 1)
		v9 = 100;
	v11 = v8 + v9 - v10;
	if (v11 >= 0 && v11 < *(_DWORD*)(v6 + 632) && (v12 = *(_QWORD*)(*(_QWORD*)(v6 + 624) + 8i64 * v11)) != 0)
	{
		v13 = (unsigned __int64*)sub_14018F0E0(&v16, *(unsigned __int16**)(v12 + 24))[1];
		if (v13)
		{
			v14 = -1i64;
			do
				++v14;
			while (*((_BYTE*)v13 + v14));
			sub_140058710((__int64)a1, v13, v14);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v17)
		{
			sub_14018B900(v17, 0);
			return 1i64;
		}
	}
	else
	{
	LABEL_18:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1406997A8: variable 'v3' is possibly undefined

