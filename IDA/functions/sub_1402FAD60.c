#include "../winhttp.h"

//----- (00000001402FAD60) ----------------------------------------------------
int* __fastcall sub_1402FAD60(_QWORD* a1, unsigned int a2, int a3)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	int* result; // rax
	int* v8; // rcx
	int** v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // r8
	int v13[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v4 = a2;
	v13[0] = 0;
	result = (int*)(*(__int64(__fastcall**)(_QWORD*, int*, _QWORD))(v3 + 16))(a1, v13, 0i64);
	if ((_DWORD)result)
	{
		v11 = a1[8];
		if ((unsigned int)v4 < *(_DWORD*)(v11 + 728))
		{
			result = *(int**)(v11 + 736);
			v12 = *((unsigned __int16*)result + v4);
			if ((unsigned int)v12 < *(_DWORD*)(v11 + 712))
			{
				result = (int*)a1[139];
				if (result[v12] != a3)
				{
					result[v12] = a3;
					return (int*)sub_1402F5C20((__int64)a1, 2);
				}
			}
		}
	}
	else
	{
		result = sub_14018B280(40i64, 0);
		v8 = result;
		if (result)
		{
			*(_QWORD*)result = &off_140B64078;
			*((_QWORD*)result + 2) = 0i64;
			*((_QWORD*)result + 3) = 0i64;
			*((_QWORD*)result + 1) = a1;
			v9 = (int**)(a1 + 9);
			if (!*((_QWORD*)result + 2))
			{
				*((_QWORD*)result + 2) = v9;
				*((_QWORD*)result + 3) = *v9;
				*v9 = result;
				v10 = *((_QWORD*)result + 3);
				if (v10)
					*(_QWORD*)(v10 + 16) = v8 + 6;
			}
			result = (int*)off_140B63F68;
			v8[8] = v4;
			v8[9] = a3;
			*(_QWORD*)v8 = off_140B63F68;
		}
	}
	return result;
}
// 140B63F68: using guessed type __int64 (__fastcall *off_140B63F68[35])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402FAD60: using guessed type int var_18[6];

