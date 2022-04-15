#include "../winhttp.h"

//----- (00000001403F6F80) ----------------------------------------------------
__int64 __fastcall sub_1403F6F80(__int64 a1, int* a2)
{
	_QWORD* v2; // rbp
	unsigned int v4; // esi
	__int64 v5; // rdi
	__int64 v6; // r12
	__int16 v7; // r14
	__int64 v8; // rbx
	unsigned __int64 v9; // rax
	__int64 v10; // r10
	unsigned __int64 v11; // rdx
	int* v12; // rcx
	__int64 v13; // r10
	_QWORD* v15; // rax
	_QWORD* v16; // rcx
	__int64 i; // rdi
	_QWORD* v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // [rsp+20h] [rbp-98h] BYREF
	__int64 v21; // [rsp+28h] [rbp-90h]
	__int64 v22[10]; // [rsp+40h] [rbp-78h]

	v2 = (_QWORD*)(qword_140C65898 + 31920);
	v4 = 0;
	v5 = 0i64;
	v6 = (*(_QWORD*)(qword_140C65898 + 31936) - *(_QWORD*)(qword_140C65898 + 31928)) / 112i64;
	if ((int)v6 > 0)
	{
		v7 = *(_WORD*)a2;
		v8 = *(_QWORD*)(qword_140C65898 + 31928);
		do
		{
			v9 = 0i64;
			if (v7)
			{
				do
					++v9;
				while (*((_WORD*)a2 + v9));
			}
			v10 = *(_QWORD*)(v8 + 8);
			if ((*(_QWORD*)(v8 + 16) - v10) >> 1 == v9)
			{
				v11 = 0i64;
				if (!v9)
					return v4;
				v12 = a2;
				v13 = v10 - (_QWORD)a2;
				while (*(_WORD*)((char*)v12 + v13) == *(_WORD*)v12)
				{
					++v11;
					v12 = (int*)((char*)v12 + 2);
					if (v11 >= v9)
						return v4;
				}
			}
			++v5;
			++v4;
			v8 += 112i64;
		} while (v5 < (int)v6);
	}
	v15 = sub_1403F6A00(&v20, a2);
	v16 = (_QWORD*)v2[2];
	if (v16 == (_QWORD*)v2[3])
	{
		sub_1403FBCF0(v2, v2[2], (__int64)v15);
	}
	else
	{
		if (v16)
			sub_1403F6CE0(v16, (__int64)v15);
		v2[2] += 112i64;
	}
	for (i = 0i64; i < 10; ++i)
	{
		v18 = (_QWORD*)v22[i];
		if (v18)
		{
			if (*v18)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v18 + 8i64))(*v18);
				*v18 = 0i64;
			}
			v19 = v18[3];
			if (v19)
				sub_14018B900(v19, 0);
			sub_14018B900((__int64)v18, 0);
		}
	}
	if (v21)
		sub_14018B900(v21, 0);
	return (unsigned int)v6;
}
// 1403F7065: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403F6F80: using guessed type __int64 var_78[10];

