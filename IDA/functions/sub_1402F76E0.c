#include "../winhttp.h"

//----- (00000001402F76E0) ----------------------------------------------------
int* __fastcall sub_1402F76E0(__int64 a1, int a2, _OWORD* a3)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	int* result; // rax
	unsigned int v8; // eax
	__int64 v9; // rax
	__int64 v10; // rsi
	__int64 v11; // rsi
	int* v12; // rdi
	int* v13; // rax
	unsigned int v14; // ecx
	__int64 v15; // rcx
	int v16[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *(_QWORD*)a1;
	v4 = a2;
	v16[0] = 0;
	if ((*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(v3 + 16))(a1, v16, 0i64))
	{
		if ((_DWORD)v4)
		{
			v9 = *(_QWORD*)(a1 + 64);
			if ((unsigned int)v4 >= *(_DWORD*)(v9 + 400))
				v8 = -1;
			else
				v8 = *(unsigned __int16*)(*(_QWORD*)(v9 + 408) + 2 * v4);
		}
		else
		{
			v8 = 0;
		}
		v10 = v8;
		result = *(int**)(a1 + 840);
		v11 = 88 * v10;
		v12 = *(int**)&result[v11 + 4];
		if (!v12)
		{
			v13 = sub_14018B280(80i64, 0);
			v12 = v13;
			if (v13)
			{
				*v13 = 0;
				*((_QWORD*)v13 + 1) = 0i64;
			}
			else
			{
				v12 = 0i64;
			}
			*(_QWORD*)(v11 * 4 + *(_QWORD*)(a1 + 840) + 16) = v12;
			result = *(int**)(a1 + 1216);
			++* (_DWORD*)(a1 + 308);
			for (; result; result = (int*)*((_QWORD*)result + 152))
			{
				v14 = *(_DWORD*)(a1 + 308);
				if (result[77] >= v14)
					break;
				result[77] = v14;
			}
			++* (_DWORD*)(a1 + 856);
		}
		*v12 = 2;
		*((_OWORD*)v12 + 1) = *a3;
		*((_OWORD*)v12 + 2) = a3[1];
		*((_OWORD*)v12 + 3) = a3[2];
		*((_OWORD*)v12 + 4) = a3[3];
		v15 = *((_QWORD*)v12 + 1);
		if (v15)
		{
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			*((_QWORD*)v12 + 1) = 0i64;
		}
	}
	else
	{
		result = sub_14018B280(128i64, 0);
		if (result)
			return (int*)sub_1402F0000((__int64)result, a1, v4, a3);
	}
	return result;
}
// 1402F76E0: using guessed type int var_18[6];

