#include "../winhttp.h"

//----- (0000000140308510) ----------------------------------------------------
unsigned __int64 __fastcall sub_140308510(__int64 a1, unsigned int a2, float* a3, __int64 a4, char* a5)
{
	unsigned int v5; // r9d
	unsigned __int64 result; // rax
	char* v10; // rbx
	__int64 v11; // rdx
	__int64 v12; // rcx
	unsigned int v13; // r9d
	unsigned int v14; // r8d
	float v15; // xmm4_4
	__int64 v16; // rdi
	__int64 v17; // r14
	__int64 v18; // r8
	float v19; // xmm3_4
	__int64 v20; // r8
	unsigned int v21; // edx
	__int64 v22; // rcx
	__int64 v23; // rdi
	float v24; // xmm4_4
	char v25; // [rsp+28h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		result = 0i64;
		*a3 = (float)0 * 0.0039215689;
		return result;
	}
	if (v5 == 1)
	{
		result = *(_QWORD*)(a1 + 16);
		*a3 = (float)*(unsigned __int8*)result * 0.0039215689;
		return result;
	}
	v10 = a5;
	if (a5)
	{
		v11 = *(unsigned int*)a5;
		v12 = *(_QWORD*)(a1 + 8);
		v13 = *(_DWORD*)(v12 + 4 * v11);
		if (v13 <= a2)
		{
			v14 = *(_DWORD*)(v12 + 4i64 * (unsigned int)(v11 + 1));
			if (a2 < v14)
			{
				v15 = (float)*(unsigned __int8*)(*(_QWORD*)(a1 + 16) + v11);
				result = *(unsigned __int8*)(*(_QWORD*)(a1 + 16) + (unsigned int)(v11 + 1));
				*a3 = (float)((float)((float)(int)(a2 - v13) / (float)(int)(v14 - v13))
					* (float)((float)((float)*(unsigned __int8*)(*(_QWORD*)(a1 + 16) + (unsigned int)(v11 + 1))
						* 0.0039215689)
						- (float)(v15 * 0.0039215689)))
					+ (float)(v15 * 0.0039215689);
				return result;
			}
		}
		v16 = (unsigned int)(v11 + 1);
		*(_DWORD*)a5 = v16;
		v5 = *(_DWORD*)a1;
		if ((unsigned int)v16 < *(_DWORD*)a1 - 1)
		{
			v17 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v17 + 4 * v16) <= a2 && a2 < *(_DWORD*)(v17 + 4i64 * (unsigned int)(v11 + 2)))
			{
				v18 = *(_QWORD*)(a1 + 16);
				result = *(unsigned __int8*)((unsigned int)(v11 + 2) + v18);
				v19 = (float)*(unsigned __int8*)(v18 + v16) * 0.0039215689;
				*a3 = (float)((float)((float)(int)(a2 - *(_DWORD*)(v17 + 4 * v16))
					/ (float)(*(_DWORD*)(v17 + 4i64 * (unsigned int)(v11 + 2)) - *(_DWORD*)(v17 + 4 * v16)))
					* (float)((float)((float)*(unsigned __int8*)((unsigned int)(v11 + 2) + v18) * 0.0039215689) - v19))
					+ v19;
				return result;
			}
		}
	}
	else
	{
		v10 = &v25;
	}
	v20 = 0i64;
	v21 = v5;
	while ((unsigned int)v20 < v21)
	{
		v22 = (unsigned int)v20 + ((v21 - (unsigned int)v20) >> 1);
		if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v22))
			v20 = (unsigned int)(v22 + 1);
		else
			v21 = v20 + ((v21 - (unsigned int)v20) >> 1);
	}
	v23 = (unsigned int)(v20 - 1);
	if ((_DWORD)v20)
	{
		if (v5 == (_DWORD)v20)
		{
			*a3 = (float)*(unsigned __int8*)(*(_QWORD*)(a1 + 16) + v23) * 0.0039215689;
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v10 = result;
		}
		else
		{
			v24 = (float)*(unsigned __int8*)(*(_QWORD*)(a1 + 16) + v23);
			result = *(unsigned __int8*)(v20 + *(_QWORD*)(a1 + 16));
			*a3 = (float)((float)((float)(int)(a2 - *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v23))
				/ (float)(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v20)
					- *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v23)))
				* (float)((float)((float)*(unsigned __int8*)(v20 + *(_QWORD*)(a1 + 16)) * 0.0039215689)
					- (float)(v24 * 0.0039215689)))
				+ (float)(v24 * 0.0039215689);
			*(_DWORD*)v10 = v23;
		}
	}
	else
	{
		result = *(_QWORD*)(a1 + 16);
		*a3 = (float)*(unsigned __int8*)result * 0.0039215689;
		*(_DWORD*)v10 = 0;
	}
	return result;
}

