#include "../winhttp.h"

//----- (0000000140508000) ----------------------------------------------------
__int64 __fastcall sub_140508000(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v2; // rdi
	unsigned int v3; // r14d
	unsigned int v4; // r12d
	unsigned int v5; // r13d
	unsigned int v6; // r15d
	int v7; // ebp
	unsigned __int64* v8; // rsi
	unsigned int i; // ebx
	int v10; // eax
	char v11; // r8
	__int64 v12; // r9
	__int64 v13; // r10
	__int64 v14; // rax
	unsigned int v15[4]; // [rsp+50h] [rbp-48h] BYREF

	result = sub_140506EA0(a1);
	v2 = result;
	if (result)
	{
		v3 = *(_DWORD*)(result + 728);
		v4 = *(_DWORD*)(result + 720);
		v5 = *(_DWORD*)(result + 724);
		v6 = *(_DWORD*)(result + 716);
		v7 = 0;
		v8 = (unsigned __int64*)(result + 1096);
		for (i = 0; i < 2; ++i)
		{
			if (!i || *(v8 - 2))
			{
				v15[0] = v6;
				v15[1] = v4;
				v15[2] = v5;
				v15[3] = v3;
				v10 = sub_140506500(v2);
				v7 += sub_140506750(232i64 * i, 232i64 * i + v2 + 1080, v15, v12, *v8, v11, v10, v13, 1);
				if ((*(_BYTE*)(v2 + 664) & 1) != 0)
					break;
				v7 += (int)(float)(*(float*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(v2 + 696) + 96i64)
					+ 32i64))(*(_QWORD*)(*(_QWORD*)(v2 + 696)
						+ 96i64))
					+ 20)
					+ 1.0);
			}
			v8 += 29;
		}
		v14 = a1[2];
		*(double*)v14 = (double)v7;
		*(_DWORD*)(v14 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 14050811F: variable 'v12' is possibly undefined
// 14050811F: variable 'v11' is possibly undefined
// 14050811F: variable 'v13' is possibly undefined
// 140C63678: using guessed type __int64 qword_140C63678;

