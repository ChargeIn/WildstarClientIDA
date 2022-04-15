#include "../winhttp.h"

//----- (0000000140318D70) ----------------------------------------------------
float* __fastcall sub_140318D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // r9
	__int64 v9; // r9
	__int64 v10; // r9
	__int64 v11; // rcx
	float* result; // rax
	__int64 v13; // r9
	float v14; // [rsp+58h] [rbp+10h] BYREF

	switch (*(_DWORD*)(a2 + 104))
	{
	case 1:
		return (float*)sub_140308510(
			*(_QWORD*)(a1 + 32),
			*(_DWORD*)(a2 + 8),
			*(float**)(a1 + 24),
			a4,
			(char*)(a1 + 40));
	case 2:
		sub_140308510(*(_QWORD*)(a1 + 32), *(_DWORD*)(a2 + 32), *(float**)(a1 + 24), a4, (char*)(a1 + 44));
		sub_140308510(*(_QWORD*)(a1 + 32), *(_DWORD*)(a2 + 8), &v14, v13, (char*)(a1 + 40));
		result = *(float**)(a1 + 24);
		*result = (float)((float)(1.0 - *(float*)(a2 + 12)) * (float)(*result - v14)) + v14;
		return result;
	case 3:
		sub_140308510(*(_QWORD*)(a1 + 32), *(_DWORD*)(a2 + 56), *(float**)(a1 + 24), a4, (char*)(a1 + 48));
		sub_140308510(*(_QWORD*)(a1 + 32), *(_DWORD*)(a2 + 32), &v14, v10, (char*)(a1 + 44));
		break;
	case 4:
		sub_140308510(*(_QWORD*)(a1 + 32), *(_DWORD*)(a2 + 80), *(float**)(a1 + 24), a4, 0i64);
		sub_140308510(*(_QWORD*)(a1 + 32), *(_DWORD*)(a2 + 56), &v14, v6, (char*)(a1 + 48));
		v7 = *(_QWORD*)(a1 + 32);
		**(float**)(a1 + 24) = (float)((float)(1.0 - *(float*)(a2 + 60)) * (float)(**(float**)(a1 + 24) - v14)) + v14;
		sub_140308510(v7, *(_DWORD*)(a2 + 32), &v14, v8, (char*)(a1 + 44));
		break;
	default:
		return result;
	}
	v11 = *(_QWORD*)(a1 + 32);
	**(float**)(a1 + 24) = (float)((float)(1.0 - *(float*)(a2 + 36)) * (float)(**(float**)(a1 + 24) - v14)) + v14;
	sub_140308510(v11, *(_DWORD*)(a2 + 8), &v14, v9, (char*)(a1 + 40));
	result = *(float**)(a1 + 24);
	*result = (float)((float)(1.0 - *(float*)(a2 + 12)) * (float)(*result - v14)) + v14;
	return result;
}
// 140318DD6: variable 'v6' is possibly undefined
// 140318E1C: variable 'v8' is possibly undefined
// 140318E51: variable 'v10' is possibly undefined
// 140318E97: variable 'v9' is possibly undefined
// 140318EFB: variable 'v13' is possibly undefined

