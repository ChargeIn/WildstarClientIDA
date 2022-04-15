#include "../winhttp.h"

//----- (00000001408F9710) ----------------------------------------------------
__int64 __fastcall sub_1408F9710(__int64 a1)
{
	unsigned int v1; // r10d
	unsigned int v3; // edx
	__int64 v4; // r10
	__int64 v5; // r8
	float v6; // xmm3_4
	__int64 v7; // rcx
	__int64 v8; // r8
	__int64 result; // rax
	float v10; // xmm3_4
	__int64 v11; // rcx
	__int64 v12; // rcx

	v1 = *(_DWORD*)(a1 + 468);
	if (v1 <= 1)
	{
		v12 = *(_QWORD*)(a1 + 56);
		*(_DWORD*)(a1 + 504) = *(_DWORD*)(v12 + 4);
		result = *(unsigned int*)(v12 + 8);
		*(_DWORD*)(a1 + 508) = result;
	}
	else
	{
		v3 = *(_DWORD*)(a1 + 472);
		v4 = v1 - 1;
		if (v3 < (unsigned int)v4)
		{
			v5 = v3 + 1;
			while (*(float*)(a1 + 488) >= *(float*)(*(_QWORD*)(a1 + 56) + 12 * v5))
			{
				++v3;
				v5 = (unsigned int)(v5 + 1);
				if (v3 >= (unsigned int)v4)
					goto LABEL_8;
			}
			*(_DWORD*)(a1 + 472) = v3;
		}
	LABEL_8:
		v6 = *(float*)(a1 + 488);
		v7 = *(unsigned int*)(a1 + 472);
		if (v6 >= *(float*)(a1 + 500))
		{
			v11 = *(_QWORD*)(a1 + 56);
			*(_DWORD*)(a1 + 504) = *(_DWORD*)(v11 + 12 * v4 + 4);
			result = *(unsigned int*)(v11 + 12 * v4 + 8);
			*(_DWORD*)(a1 + 508) = result;
		}
		else
		{
			v8 = *(_QWORD*)(a1 + 56);
			result = 3i64 * (unsigned int)(v7 + 1);
			v10 = (float)(v6 - *(float*)(v8 + 12 * v7))
				/ (float)(*(float*)(v8 + 12i64 * (unsigned int)(v7 + 1)) - *(float*)(v8 + 12 * v7));
			*(float*)(a1 + 504) = (float)((float)(*(float*)(v8 + 12i64 * (unsigned int)(v7 + 1) + 4)
				- *(float*)(v8 + 12 * v7 + 4))
				* v10)
				+ *(float*)(v8 + 12 * v7 + 4);
			*(float*)(a1 + 508) = (float)((float)(*(float*)(v8 + 12i64 * (unsigned int)(v7 + 1) + 8)
				- *(float*)(v8 + 12 * v7 + 8))
				* v10)
				+ *(float*)(v8 + 12 * v7 + 8);
		}
	}
	return result;
}

