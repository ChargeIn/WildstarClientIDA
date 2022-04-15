#include "../winhttp.h"

//----- (00000001400FAD30) ----------------------------------------------------
__int64 __fastcall sub_1400FAD30(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // r10
	__int64 v4; // r8
	int v5; // edx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned __int16* v9; // r11
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v12; // rbx
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	v2 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v4 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v4 = *v2;
	*(_DWORD*)(v4 + 8) = *((_DWORD*)v2 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	v5 = *(_DWORD*)(a1 + 24);
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = v5 + 1;
	v7 = *(_QWORD*)(v6 + 16);
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)v5;
	*(_QWORD*)(v6 + 16) += 16i64;
	v8 = *(_QWORD*)(a1 + 16);
	v10 = (unsigned __int64*)sub_14018F0E0(&v14, v9)[1];
	if (v10)
	{
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v10 + v11));
		sub_140058710(v8, v10, v11);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
		*(_QWORD*)(v8 + 16) += 16i64;
	}
	if (v15)
		sub_14018B900(v15, 0);
	v12 = *(_QWORD*)(a1 + 16);
	sub_14005EA50(
		v12,
		(__int64*)(*(_QWORD*)(v12 + 16) - 48i64),
		(int*)(*(_QWORD*)(v12 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v12 + 16) - 16i64));
	*(_QWORD*)(v12 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FAD57: variable 'v3' is possibly undefined
// 1400FADA2: variable 'v9' is possibly undefined

