#include "../winhttp.h"

//----- (00000001407A7140) ----------------------------------------------------
int* __fastcall sub_1407A7140(__int64* a1, unsigned __int64 a2, __int64 a3)
{
	unsigned __int64 v6; // rbp
	int* result; // rax
	int* v8; // rdx
	unsigned __int64 v9; // r9
	int* v10; // rsi
	__int64 v11; // r8
	__int64 v12; // r9
	__int64 v13; // rcx
	int* v14; // rcx
	char* v15; // rcx

	v6 = a1[1] + 1;
	result = sub_14018DB00(*a1, v6, 112i64);
	v9 = a1[1];
	v10 = result;
	if (v9 > a2)
	{
		v11 = -144i64 - (_QWORD)result;
		v8 = &result[28 * v9 + 36];
		v12 = v9 - a2;
		do
		{
			v8 -= 28;
			result = v8 - 8;
			if (v8 != (int*)32)
			{
				v13 = (__int64)v8 + v11 + *a1;
				*(_OWORD*)result = *(_OWORD*)v13;
				*((_OWORD*)v8 - 1) = *(_OWORD*)(v13 + 16);
				*(_OWORD*)v8 = *(_OWORD*)(v13 + 32);
				*((_OWORD*)v8 + 1) = *(_OWORD*)(v13 + 48);
				*((_OWORD*)v8 + 2) = *(_OWORD*)(v13 + 64);
				v8[12] = *(_DWORD*)(v13 + 80);
				v8[13] = *(_DWORD*)(v13 + 84);
				v8[14] = *(_DWORD*)(v13 + 88);
				*((_QWORD*)v8 + 8) = *(_QWORD*)(v13 + 96);
				result = (int*)*(unsigned int*)(v13 + 104);
				v8[18] = (int)result;
			}
			--v12;
		} while (v12);
	}
	v14 = &v10[28 * a2];
	if (v14)
	{
		*(_OWORD*)v14 = *(_OWORD*)a3;
		*((_OWORD*)v14 + 1) = *(_OWORD*)(a3 + 16);
		*((_OWORD*)v14 + 2) = *(_OWORD*)(a3 + 32);
		*((_OWORD*)v14 + 3) = *(_OWORD*)(a3 + 48);
		*((_OWORD*)v14 + 4) = *(_OWORD*)(a3 + 64);
		v14[20] = *(_DWORD*)(a3 + 80);
		v14[21] = *(_DWORD*)(a3 + 84);
		v14[22] = *(_DWORD*)(a3 + 88);
		*((_QWORD*)v14 + 12) = *(_QWORD*)(a3 + 96);
		result = (int*)*(unsigned int*)(a3 + 104);
		v14[26] = (int)result;
	}
	if ((int*)*a1 != v10)
	{
		if (a2)
		{
			v8 = v10 + 8;
			do
			{
				if (v8 != (int*)32)
				{
					v15 = (char*)v8 + -32i64 - (_QWORD)v10 + *a1;
					*((_OWORD*)v8 - 2) = *(_OWORD*)v15;
					*((_OWORD*)v8 - 1) = *((_OWORD*)v15 + 1);
					*(_OWORD*)v8 = *((_OWORD*)v15 + 2);
					*((_OWORD*)v8 + 1) = *((_OWORD*)v15 + 3);
					*((_OWORD*)v8 + 2) = *((_OWORD*)v15 + 4);
					v8[12] = *((_DWORD*)v15 + 20);
					v8[13] = *((_DWORD*)v15 + 21);
					v8[14] = *((_DWORD*)v15 + 22);
					*((_QWORD*)v8 + 8) = *((_QWORD*)v15 + 12);
					result = (int*)*((unsigned int*)v15 + 26);
					v8[18] = (int)result;
				}
				v8 += 28;
				--a2;
			} while (a2);
		}
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v8);
		*a1 = (__int64)v10;
	}
	a1[1] = v6;
	return result;
}
// 1407A72F6: variable 'v8' is possibly undefined

