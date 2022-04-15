#include "../winhttp.h"

//----- (00000001408F0970) ----------------------------------------------------
__int64 __fastcall sub_1408F0970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	__int64 result; // rax
	int v8; // edx
	int i; // ecx
	int v10; // eax
	__int64 v11; // rax
	int v12; // ecx
	int v13; // edx
	unsigned int v14; // eax
	unsigned int v15; // esi
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18; // rcx

	if ((a5[1] & 0x3FFFF) != 4)
		return 78i64;
	*(_QWORD*)(a1 + 56) = a2;
	v8 = 0;
	for (i = a5[1] & 0x3FFFF; i; i &= i - 1)
		++v8;
	*(_DWORD*)(a1 + 16) = v8;
	v10 = *a5;
	*(_QWORD*)(a1 + 8) = a4;
	*(_DWORD*)(a1 + 20) = v10;
	sub_1408F1E20(a4, (float)v10);
	v11 = *(_QWORD*)(a1 + 8);
	v12 = *(_DWORD*)(a1 + 16);
	v13 = *(_DWORD*)(v11 + 64);
	v14 = (int)(float)((float)((float)((float)v13 * *(float*)(v11 + 44)) * 0.0099999998) + 0.5);
	if (v14 < v13)
		v13 = v14;
	*(_DWORD*)(a1 + 40) = v13;
	if (v12)
	{
		if (v13)
		{
			v15 = (v13 + 3) & 0xFFFFFFFC;
			v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 8 * v15 * v12);
			*(_QWORD*)(a1 + 24) = v16;
			if (!v16)
				return 52i64;
			v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 12 * v15);
			*(_QWORD*)(a1 + 32) = v17;
			if (!v17)
				return 52i64;
		}
	}
	sub_1408F0E10(a1);
	v18 = *(_QWORD*)(a1 + 8);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(v18 + 16);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(v18 + 20);
	result = 1i64;
	*(float*)(a1 + 72) = 1.0 - 125.6637061435917 / (double)*(int*)(a1 + 20);
	return result;
}

