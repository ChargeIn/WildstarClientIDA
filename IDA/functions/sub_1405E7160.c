#include "../winhttp.h"

//----- (00000001405E7160) ----------------------------------------------------
__int64 __fastcall sub_1405E7160(__int64* a1, __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v4; // rcx
	signed __int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // r8
	_DWORD* v8; // r9
	__int64 result; // rax
	_DWORD* v10; // rdx
	__int64 v11; // rsi
	unsigned __int64 v12; // r14
	__int64 v13; // r15
	__int64 v14; // r12
	__int64 v15; // r11
	unsigned __int64 v16; // r10
	_DWORD* v17; // r8
	_DWORD* v18; // rcx
	__int64 v19; // rcx
	_DWORD* v20; // rcx
	_DWORD* v21; // rcx
	unsigned __int64 v22; // r8
	char* v23; // rcx

	v2 = a1[1];
	v4 = a2 + 1;
	v5 = v2 - 1;
	if (a2 + 1 < v2)
	{
		v6 = 12 * v4;
		do
		{
			v7 = *a1;
			v8 = (_DWORD*)(v6 + *a1 - 12);
			if (v8)
			{
				*v8 = *(_DWORD*)(v6 + v7);
				v8[1] = *(_DWORD*)(v6 + v7 + 4);
				v8[2] = *(_DWORD*)(v6 + v7 + 8);
			}
			++v4;
			v6 += 12i64;
		} while (v4 < a1[1]);
	}
	result = (__int64)sub_14018DB00(*a1, v5, 12i64);
	v11 = result;
	if (*a1 != result)
	{
		v12 = 0i64;
		if (v5 >= 4)
		{
			v13 = -8 - result;
			v14 = 4 - result;
			v15 = -32 - result;
			v16 = ((unsigned __int64)(v5 - 4) >> 2) + 1;
			v17 = (_DWORD*)(result + 32);
			v12 = 4 * v16;
			do
			{
				if (v17 != (_DWORD*)32)
				{
					v18 = (_DWORD*)((char*)v17 + v15 + *a1);
					*(v17 - 8) = *v18;
					*(v17 - 7) = v18[1];
					result = (unsigned int)v18[2];
					*(v17 - 6) = result;
				}
				if (v17 != (_DWORD*)20)
				{
					v19 = *a1;
					*(v17 - 5) = *(_DWORD*)((char*)v17 + v15 + *a1 + 12);
					*(v17 - 4) = *(_DWORD*)((char*)v17 + v15 + v19 + 16);
					result = *(unsigned int*)((char*)v17 + v15 + v19 + 20);
					*(v17 - 3) = result;
				}
				if (v17 != (_DWORD*)8)
				{
					v20 = (_DWORD*)((char*)v17 + v13 + *a1);
					*(v17 - 2) = *v20;
					*(v17 - 1) = v20[1];
					result = (unsigned int)v20[2];
					*v17 = result;
				}
				v10 = v17 + 1;
				if (v17 != (_DWORD*)-4i64)
				{
					v21 = (_DWORD*)((char*)v17 + v14 + *a1);
					*v10 = *v21;
					v17[2] = v21[1];
					result = (unsigned int)v21[2];
					v17[3] = result;
				}
				v17 += 12;
				--v16;
			} while (v16);
		}
		if (v12 < v5)
		{
			result = 3 * v12;
			v10 = (_DWORD*)(v11 + 12 * v12);
			v22 = v5 - v12;
			do
			{
				if (v10)
				{
					v23 = (char*)v10 + *a1;
					*v10 = *(_DWORD*)&v23[-v11];
					v10[1] = *(_DWORD*)&v23[-v11 + 4];
					result = *(unsigned int*)&v23[-v11 + 8];
					v10[2] = result;
				}
				v10 += 3;
				--v22;
			} while (v22);
		}
		if (*a1)
			result = (*(__int64(__fastcall**)(__int64, _DWORD*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v10);
		*a1 = v11;
	}
	a1[1] = v5;
	return result;
}
// 1405E731E: variable 'v10' is possibly undefined

