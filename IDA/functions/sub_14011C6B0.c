#include "../winhttp.h"

//----- (000000014011C6B0) ----------------------------------------------------
__int64 __fastcall sub_14011C6B0(__int64 a1)
{
	int v1; // esi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rax
	int v8; // ebp
	int* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rcx
	__int64* v15; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = 0;
	if (v7)
	{
		v9 = *(int**)(v7 + 2832);
		v1 = *v9;
		v8 = v9[1];
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v10 = *(_QWORD*)(a1 + 16);
	v11 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140058710(a1, (unsigned __int64*)"x", 1ui64);
	v12 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	v13 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)L"y", 1ui64);
	v14 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = (double)v8;
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v15, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return 1i64;
}
// 1409D6644: using guessed type wchar_t aY_18[2];
// 140C63650: using guessed type __int64 qword_140C63650;

