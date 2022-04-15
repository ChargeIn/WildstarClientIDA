#include "../winhttp.h"

//----- (00000001407825E0) ----------------------------------------------------
__int64 __fastcall sub_1407825E0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
	int v5; // eax
	__int64 v7; // rbx
	__int64* v8; // rdx
	__int64 result; // rax
	float v10; // xmm0_4
	float v11; // xmm0_4

	v5 = *(_DWORD*)(a3 + 20);
	*(_DWORD*)(a1 + 8) = a2;
	v7 = a1;
	*(_DWORD*)(a1 + 12) = v5;
	*(_QWORD*)(a1 + 16) = a5;
	if (a5)
	{
		v8 = (__int64*)(a5 + 144);
		if (!*(_QWORD*)(a1 + 24))
		{
			*(_QWORD*)(a1 + 24) = v8;
			a1 += 32i64;
			*(_QWORD*)a1 = *v8;
			*v8 = v7;
			if (*(_QWORD*)a1)
				*(_QWORD*)(*(_QWORD*)a1 + 24i64) = a1;
		}
	}
	result = sub_140633CB0(a1, *(_DWORD*)a3, (_QWORD*)(v7 + 56));
	if ((int)result >= 0)
	{
		*(_DWORD*)(v7 + 64) = *(_DWORD*)a3;
		v10 = sub_1401C9770((unsigned __int16*)(a3 + 4));
		*(float*)(v7 + 68) = v10;
		*(_DWORD*)(v7 + 72) = *(_DWORD*)(a3 + 8);
		*(_DWORD*)(v7 + 76) = *(_DWORD*)(a3 + 12);
		*(_DWORD*)(v7 + 80) = *(_DWORD*)(a3 + 16);
		if (v10 == -1.0 || v10 > 0.0000099999997)
			v11 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 56) + 112i64))(*(_QWORD*)(v7 + 56));
		else
			v11 = 0.0;
		*(float*)(v7 + 84) = v11;
		return 0i64;
	}
	return result;
}

