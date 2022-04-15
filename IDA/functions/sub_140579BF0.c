#include "../winhttp.h"

//----- (0000000140579BF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140579BF0(__int64* a1, __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v3; // r9
	signed __int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rcx
	_DWORD* v8; // r8
	unsigned __int64 result; // rax
	int* v10; // rdx
	int* v11; // rsi
	unsigned __int64 v12; // r11
	__int64 v13; // r15
	__int64 v14; // r12
	__int64 v15; // r14
	unsigned __int64 v16; // r10
	_DWORD* v17; // r8
	_DWORD* v18; // rcx
	__int64 v19; // rcx
	_DWORD* v20; // rcx
	int* v21; // rcx
	unsigned __int64 v22; // r8
	int* v23; // rcx

	v2 = a1[1];
	v3 = a2 + 1;
	v5 = v2 - 1;
	if (a2 + 1 < v2)
	{
		v6 = 36 * v3;
		do
		{
			v7 = *a1;
			v8 = (_DWORD*)(v6 + *a1 - 36);
			if (v8)
			{
				*v8 = *(_DWORD*)(v6 + v7);
				v8[1] = *(_DWORD*)(v6 + v7 + 4);
				v8[2] = *(_DWORD*)(v6 + v7 + 8);
				v8[3] = *(_DWORD*)(v6 + v7 + 12);
				v8[4] = *(_DWORD*)(v6 + v7 + 16);
				v8[5] = *(_DWORD*)(v6 + v7 + 20);
				v8[6] = *(_DWORD*)(v6 + v7 + 24);
				v8[7] = *(_DWORD*)(v6 + v7 + 28);
				v8[8] = *(_DWORD*)(v6 + v7 + 32);
			}
			++v3;
			v6 += 36i64;
		} while (v3 < a1[1]);
	}
	result = (unsigned __int64)sub_14018DB00(*a1, v5, 36i64);
	v11 = (int*)result;
	if (*a1 != result)
	{
		v12 = 0i64;
		if (v5 >= 4)
		{
			v13 = 4 - result;
			v14 = 40 - result;
			v15 = -68i64 - result;
			v16 = ((unsigned __int64)(v5 - 4) >> 2) + 1;
			v12 = 4 * v16;
			v17 = (_DWORD*)(result + 68);
			do
			{
				if (v17 != (_DWORD*)68)
				{
					v18 = (_DWORD*)((char*)v17 + v15 + *a1);
					*(v17 - 17) = *v18;
					*(v17 - 16) = v18[1];
					*(v17 - 15) = v18[2];
					*(v17 - 14) = v18[3];
					*(v17 - 13) = v18[4];
					*(v17 - 12) = v18[5];
					*(v17 - 11) = v18[6];
					*(v17 - 10) = v18[7];
					result = (unsigned int)v18[8];
					*(v17 - 9) = result;
				}
				if (v17 != (_DWORD*)32)
				{
					v19 = *a1;
					*(v17 - 8) = *(_DWORD*)((char*)v17 + v15 + *a1 + 36);
					*(v17 - 7) = *(_DWORD*)((char*)v17 + v15 + v19 + 40);
					*(v17 - 6) = *(_DWORD*)((char*)v17 + v15 + v19 + 44);
					*(v17 - 5) = *(_DWORD*)((char*)v17 + v15 + v19 + 48);
					*(v17 - 4) = *(_DWORD*)((char*)v17 + v15 + v19 + 52);
					*(v17 - 3) = *(_DWORD*)((char*)v17 + v15 + v19 + 56);
					*(v17 - 2) = *(_DWORD*)((char*)v17 + v15 + v19 + 60);
					*(v17 - 1) = *(_DWORD*)((char*)v17 + v15 + v19 + 64);
					result = *(unsigned int*)((char*)v17 + v15 + v19 + 68);
					*v17 = result;
				}
				if (v17 != (_DWORD*)-4i64)
				{
					v20 = (_DWORD*)((char*)v17 + v13 + *a1);
					v17[1] = *v20;
					v17[2] = v20[1];
					v17[3] = v20[2];
					v17[4] = v20[3];
					v17[5] = v20[4];
					v17[6] = v20[5];
					v17[7] = v20[6];
					v17[8] = v20[7];
					result = (unsigned int)v20[8];
					v17[9] = result;
				}
				v10 = v17 + 10;
				if (v17 != (_DWORD*)-40i64)
				{
					v21 = (_DWORD*)((char*)v17 + v14 + *a1);
					*v10 = *v21;
					v17[11] = v21[1];
					v17[12] = v21[2];
					v17[13] = v21[3];
					v17[14] = v21[4];
					v17[15] = v21[5];
					v17[16] = v21[6];
					v17[17] = v21[7];
					result = (unsigned int)v21[8];
					v17[18] = result;
				}
				v17 += 36;
				--v16;
			} while (v16);
		}
		if (v12 < v5)
		{
			v22 = v5 - v12;
			v10 = &v11[8 * v12 + 8 + v12];
			do
			{
				if (v10 != (int*)32)
				{
					v23 = (int*)((char*)v10 + -32i64 - (_QWORD)v11 + *a1);
					*(v10 - 8) = *v23;
					*(v10 - 7) = v23[1];
					*(v10 - 6) = v23[2];
					*(v10 - 5) = v23[3];
					*(v10 - 4) = v23[4];
					*(v10 - 3) = v23[5];
					*(v10 - 2) = v23[6];
					*(v10 - 1) = v23[7];
					result = (unsigned int)v23[8];
					*v10 = result;
				}
				v10 += 9;
				--v22;
			} while (v22);
		}
		if (*a1)
			result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v10);
		*a1 = (__int64)v11;
	}
	a1[1] = v5;
	return result;
}
// 140579EB9: variable 'v10' is possibly undefined

