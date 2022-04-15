#include "../winhttp.h"

//----- (0000000140278A70) ----------------------------------------------------
__int64 __fastcall sub_140278A70(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r14
	__int64* v4; // rbx
	__int64 v5; // rdi
	unsigned int* v6; // rdx
	_QWORD* v7; // rcx
	_QWORD* v8; // r8
	unsigned int** v9; // rsi
	unsigned int* v10; // rdi
	_QWORD* v11; // rbx
	_QWORD* v12; // rcx
	_QWORD* v13; // rax
	__int64* v14; // rax
	__int64 v15; // rax

	sub_14018B900(*(_QWORD*)(a1 + 144), 0);
	*(_QWORD*)(a1 + 144) = 0i64;
	v2 = *(_QWORD*)(a1 + 8584);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 8584) = 0i64;
	}
	v3 = 13i64;
	v4 = (__int64*)(a1 + 8240);
	v5 = 13i64;
	do
	{
		v6 = (unsigned int*)*v4;
		if (*v4)
		{
			v7 = (_QWORD*)(*(_QWORD*)(a1 + 8464) + 88i64 * *v6);
			v8 = (_QWORD*)v7[7];
			if (v8 == (_QWORD*)(v7[9] - 8i64))
			{
				sub_140282860(v7, v4);
			}
			else
			{
				if (v8)
					*v8 = v6;
				v7[7] += 8i64;
			}
			*v4 = 0i64;
		}
		++v4;
		--v5;
	} while (v5);
	*(_DWORD*)(a1 + 8344) = -1;
	v9 = (unsigned int**)(a1 + 8352);
	do
	{
		v10 = *v9;
		if (*v9)
		{
			v11 = (_QWORD*)(*(_QWORD*)(a1 + 8464) + 88i64 * *v10);
			v12 = (_QWORD*)v11[7];
			if (v12 == (_QWORD*)(v11[9] - 8i64))
			{
				if ((unsigned __int64)(v11[2] - ((__int64)(v11[10] - v11[1]) >> 3)) < 2)
					sub_140282940(*(_QWORD*)(a1 + 8464) + 88i64 * *v10, (__int64)v6, 0);
				*(_QWORD*)(v11[10] + 8i64) = sub_14018B280(496i64, 0);
				v13 = (_QWORD*)v11[7];
				if (v13)
					*v13 = v10;
				v14 = (__int64*)(v11[10] + 8i64);
				v11[10] = v14;
				v15 = *v14;
				v11[8] = v15;
				v11[9] = v15 + 496;
				v11[7] = v11[8];
			}
			else
			{
				if (v12)
					*v12 = v10;
				v11[7] += 8i64;
			}
			*v9 = 0i64;
		}
		++v9;
		--v3;
	} while (v3);
	*(_DWORD*)(a1 + 8456) = -1;
	sub_1401981B0((__int64**)(a1 + 6256));
	return 0i64;
}
// 140278B88: variable 'v6' is possibly undefined

