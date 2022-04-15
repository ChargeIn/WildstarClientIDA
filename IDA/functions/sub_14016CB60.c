#include "../winhttp.h"

//----- (000000014016CB60) ----------------------------------------------------
void __fastcall sub_14016CB60(__int64 a1, __int64 a2)
{
	unsigned int v2; // edi
	__int64 v4; // rcx
	_QWORD* v5; // rsi
	_QWORD** v6; // rax
	_QWORD* v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx

	v2 = 0;
	if (*(_QWORD*)(a1 + 24))
	{
		v4 = 0i64;
		do
		{
			v5 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v4);
			if (*v5)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 8i64))(*v5);
				*v5 = 0i64;
			}
			v4 = ++v2;
		} while ((unsigned __int64)v2 < *(_QWORD*)(a1 + 24));
	}
	sub_1400579E0(*(_QWORD*)(*(_QWORD*)a1 + 400i64), a2, *(_DWORD*)(a1 + 112));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 120));
	v6 = *(_QWORD***)(a1 + 96);
	v7 = *v6;
	if (*v6 != v6)
	{
		do
		{
			v8 = (__int64)v7;
			v7 = (_QWORD*)*v7;
			sub_14018B900(v8, 0);
		} while (v7 != *(_QWORD**)(a1 + 96));
	}
	**(_QWORD**)(a1 + 96) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 8i64) = *(_QWORD*)(a1 + 96);
	sub_14018B900(*(_QWORD*)(a1 + 96), 0);
	v9 = *(_QWORD*)(a1 + 32);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 56);
	if (v10)
		sub_14018B900(v10, 0);
	v11 = *(_QWORD*)(a1 + 16);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
}
// 14016CBC7: variable 'a2' is possibly undefined
// 140C63678: using guessed type __int64 qword_140C63678;

