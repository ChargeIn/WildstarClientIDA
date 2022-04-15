#include "../winhttp.h"

//----- (00000001407162F0) ----------------------------------------------------
__int64 __fastcall sub_1407162F0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	float v4; // xmm0_4
	__int64 v6; // rcx
	int v8; // esi
	__int64 result; // rax
	float v11; // xmm3_4
	float v12; // xmm0_4
	float v13; // xmm4_4
	float v14; // xmm2_4
	float v15; // [rsp+40h] [rbp+18h] BYREF

	v4 = *(float*)a1;
	v6 = *(_QWORD*)(a1 + 16);
	v15 = v4;
	v8 = a3;
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, float*))(*(_QWORD*)v6 + 16i64))(v6, a2, a3, &v15);
	v11 = v15;
	if (a4)
	{
		result = *(_QWORD*)(a1 + 16);
		if (!*(_DWORD*)(result + 12) || *(_DWORD*)(a2 + 3412))
		{
			result = 0i64;
			*(_DWORD*)(a1 + 12) = v8;
			*(_QWORD*)(a1 + 4) = 0i64;
		}
		else
		{
			v12 = *(float*)a1;
			*(_DWORD*)(a1 + 8) = 1065353216;
			*(float*)(a1 + 4) = v12 - v11;
		}
	}
	v13 = *(float*)(a1 + 8);
	if (v13 > 0.0)
	{
		result = (unsigned int)(v8 - *(_DWORD*)(a1 + 12));
		v14 = fmaxf(0.0, v13 - (float)((float)((float)(int)result * 0.001) * 2.0));
		*(float*)(a1 + 8) = v14;
		v11 = v11 + (float)(v14 * *(float*)(a1 + 4));
	}
	*(_DWORD*)(a1 + 12) = v8;
	*(float*)a1 = v11;
	return result;
}

