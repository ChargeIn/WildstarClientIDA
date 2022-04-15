#include "../winhttp.h"

//----- (00000001405A7A30) ----------------------------------------------------
void __fastcall sub_1405A7A30(__int64 a1)
{
	__int64* v1; // rbx
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rdi
	_QWORD** v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rcx
	unsigned __int64 v9; // rbp
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rdi
	__int64 v13; // rcx
	_QWORD** v14; // rax
	_QWORD* v15; // rbx
	__int64 v16; // rcx

	v1 = *(__int64**)a1;
	if (*(_QWORD*)a1)
	{
		sub_1405A7870(*(__int64**)a1);
		sub_14018B900((__int64)v1, 0);
	}
	v3 = *(_QWORD**)(a1 + 88);
	*(_QWORD*)a1 = 0i64;
	v4 = (_QWORD*)*v3;
	if ((_QWORD*)*v3 != v3)
	{
		do
		{
			v5 = v4[2];
			if (v5)
			{
				sub_1405A7BF0(v4[2]);
				sub_14018B900(v5, 0);
			}
			v4 = (_QWORD*)*v4;
		} while (v4 != *(_QWORD**)(a1 + 88));
	}
	v6 = *(_QWORD***)(a1 + 88);
	v7 = *v6;
	if (*v6 != v6)
	{
		do
		{
			v8 = (__int64)v7;
			v7 = (_QWORD*)*v7;
			sub_14018B900(v8, 0);
		} while (v7 != *(_QWORD**)(a1 + 88));
	}
	v9 = 0i64;
	**(_QWORD**)(a1 + 88) = *(_QWORD*)(a1 + 88);
	for (*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = *(_QWORD*)(a1 + 88); v9 < *(_QWORD*)(a1 + 16); ++v9)
	{
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v9);
		if (v10)
		{
			do
			{
				v11 = *(_QWORD*)(v10 + 24);
				v12 = *(_QWORD*)(v10 + 8);
				if (v11)
				{
					sub_1405A95C0(*(__int64**)(v10 + 24));
					sub_14018B900(v11, 0);
				}
				v10 = v12;
			} while (v12);
		}
	}
	sub_140019490((_QWORD*)(a1 + 8));
	sub_140008410(a1 + 48);
	v13 = *(_QWORD*)(a1 + 136);
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	sub_140019490((_QWORD*)(a1 + 96));
	sub_14018B900(*(_QWORD*)(a1 + 112), 0);
	*(_QWORD*)(a1 + 112) = 0i64;
	v14 = *(_QWORD***)(a1 + 88);
	v15 = *v14;
	if (*v14 != v14)
	{
		do
		{
			v16 = (__int64)v15;
			v15 = (_QWORD*)*v15;
			sub_14018B900(v16, 0);
		} while (v15 != *(_QWORD**)(a1 + 88));
	}
	**(_QWORD**)(a1 + 88) = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = *(_QWORD*)(a1 + 88);
	sub_14018B900(*(_QWORD*)(a1 + 88), 0);
	sub_140008410(a1 + 48);
	sub_14018B900(*(_QWORD*)(a1 + 56), 0);
	sub_140019490((_QWORD*)(a1 + 8));
	sub_14018B900(*(_QWORD*)(a1 + 24), 0);
	*(_QWORD*)(a1 + 24) = 0i64;
}

