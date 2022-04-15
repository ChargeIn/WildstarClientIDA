#include "../winhttp.h"

//----- (0000000140401B70) ----------------------------------------------------
__int64 __fastcall sub_140401B70(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
	__int64* v4; // rdi
	__int64 result; // rax
	_QWORD* v9; // rdx
	unsigned __int64 i; // rbx
	int* v11; // rax
	int* v12; // r9
	_WORD* v13; // r8
	_WORD* v14; // rcx
	__int64 v15; // rdx

	v4 = (__int64*)(a1 + 288);
	result = *(_QWORD*)(a1 + 288);
	if (result)
	{
		do
		{
			if (*(_QWORD*)result)
				**(_QWORD**)result = *(_QWORD*)(result + 8);
			v9 = *(_QWORD**)(result + 8);
			if (v9)
				*v9 = *(_QWORD*)result;
			*(_QWORD*)result = 0i64;
			*(_QWORD*)(result + 8) = 0i64;
			sub_14018B900(result, 0);
			result = *v4;
		} while (*v4);
	}
	for (i = 0i64; i < a4; ++i)
	{
		v11 = sub_14018B280(96i64, 0);
		v12 = v11;
		if (v11)
		{
			*(_QWORD*)v11 = 0i64;
			*((_QWORD*)v11 + 1) = 0i64;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = *(_WORD**)(a2 + 8 * i);
		v14 = v12 + 4;
		v15 = 33i64;
		while (v15 != -2147483613 && *v13)
		{
			*v14++ = *v13++;
			if (!--v15)
			{
				--v14;
				break;
			}
		}
		*v14 = 0;
		v12[21] = *(_DWORD*)(a3 + 4 * i) & 1;
		v12[22] = (*(_DWORD*)(a3 + 4 * i) >> 1) & 1;
		result = (*(_DWORD*)(a3 + 4 * i) >> 2) & 1;
		v12[23] = result;
		if (!*(_QWORD*)v12)
		{
			*(_QWORD*)v12 = v4;
			*((_QWORD*)v12 + 1) = *v4;
			*v4 = (__int64)v12;
			result = *((_QWORD*)v12 + 1);
			if (result)
				*(_QWORD*)result = v12 + 2;
		}
	}
	return result;
}
// 140401C3A: conditional instruction was optimized away because rdx.8!=0

