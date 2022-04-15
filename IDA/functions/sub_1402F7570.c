#include "../winhttp.h"

//----- (00000001402F7570) ----------------------------------------------------
int* __fastcall sub_1402F7570(__int64 a1, int a2, void(__fastcall*** a3)(_QWORD, _QWORD*), int a4)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	int* result; // rax
	unsigned int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rbp
	__int64 v13; // rbp
	int* v14; // rbx
	int* v15; // rax
	unsigned int v16; // ecx
	__int64 v17; // rcx
	int v18[6]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)a1;
	v5 = a2;
	v18[0] = 0;
	if ((*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(v4 + 16))(a1, v18, 0i64))
	{
		if ((_DWORD)v5)
		{
			v11 = *(_QWORD*)(a1 + 64);
			if ((unsigned int)v5 >= *(_DWORD*)(v11 + 400))
				v10 = -1;
			else
				v10 = *(unsigned __int16*)(*(_QWORD*)(v11 + 408) + 2 * v5);
		}
		else
		{
			v10 = 0;
		}
		v12 = v10;
		result = *(int**)(a1 + 840);
		v13 = 88 * v12;
		v14 = *(int**)&result[v13 + 4];
		if (!v14)
		{
			v15 = sub_14018B280(80i64, 0);
			v14 = v15;
			if (v15)
			{
				*v15 = 0;
				*((_QWORD*)v15 + 1) = 0i64;
			}
			else
			{
				v14 = 0i64;
			}
			*(_QWORD*)(*(_QWORD*)(a1 + 840) + v13 * 4 + 16) = v14;
			result = *(int**)(a1 + 1216);
			++* (_DWORD*)(a1 + 308);
			for (; result; result = (int*)*((_QWORD*)result + 152))
			{
				v16 = *(_DWORD*)(a1 + 308);
				if (result[77] >= v16)
					break;
				result[77] = v16;
			}
			++* (_DWORD*)(a1 + 856);
		}
		*v14 = 1;
		if (*((void(__fastcall****)(_QWORD, _QWORD*))v14 + 1) != a3)
		{
			if (a3)
				result = (int*)((__int64(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*))) * *a3)(a3);
			v17 = *((_QWORD*)v14 + 1);
			if (v17)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			*((_QWORD*)v14 + 1) = a3;
		}
		v14[1] = a4;
	}
	else
	{
		result = sub_14018B280(128i64, 0);
		if (result)
			return (int*)sub_1402EFF50((__int64)result, a1, v5, a3, a4);
	}
	return result;
}
// 1402F7570: using guessed type int var_18[6];

