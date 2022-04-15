#include "../winhttp.h"

//----- (0000000140723B70) ----------------------------------------------------
void __fastcall sub_140723B70(__int64 a1)
{
	_DWORD* v2; // rcx
	_QWORD** v3; // rax
	_QWORD* v4; // rdi
	__int64 v5; // rcx
	_QWORD** v6; // rax
	_QWORD* v7; // rdi
	__int64 v8; // rcx
	_QWORD** v9; // rax
	_QWORD* v10; // rdi
	__int64 v11; // rcx
	_QWORD** v12; // rax
	_QWORD* v13; // rdi
	__int64 v14; // rcx

	sub_140019490((_QWORD*)(a1 + 8));
	v2 = *(_DWORD**)a1;
	if (*(_QWORD*)a1)
	{
		if (*(v2 - 2))
			(**(void(__fastcall***)(_DWORD*, __int64))v2)(v2, 3i64);
		else
			sub_14018B900((__int64)(v2 - 2), 0);
	}
	*(_QWORD*)a1 = 0i64;
	v3 = *(_QWORD***)(a1 + 104);
	v4 = *v3;
	if (*v3 != v3)
	{
		do
		{
			v5 = (__int64)v4;
			v4 = (_QWORD*)*v4;
			sub_14018B900(v5, 0);
		} while (v4 != *(_QWORD**)(a1 + 104));
	}
	**(_QWORD**)(a1 + 104) = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8i64) = *(_QWORD*)(a1 + 104);
	sub_14018B900(*(_QWORD*)(a1 + 104), 0);
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
	**(_QWORD**)(a1 + 88) = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = *(_QWORD*)(a1 + 88);
	sub_14018B900(*(_QWORD*)(a1 + 88), 0);
	v9 = *(_QWORD***)(a1 + 72);
	v10 = *v9;
	if (*v9 != v9)
	{
		do
		{
			v11 = (__int64)v10;
			v10 = (_QWORD*)*v10;
			sub_14018B900(v11, 0);
		} while (v10 != *(_QWORD**)(a1 + 72));
	}
	**(_QWORD**)(a1 + 72) = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = *(_QWORD*)(a1 + 72);
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	v12 = *(_QWORD***)(a1 + 56);
	v13 = *v12;
	if (*v12 != v12)
	{
		do
		{
			v14 = (__int64)v13;
			v13 = (_QWORD*)*v13;
			sub_14018B900(v14, 0);
		} while (v13 != *(_QWORD**)(a1 + 56));
	}
	**(_QWORD**)(a1 + 56) = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) = *(_QWORD*)(a1 + 56);
	sub_14018B900(*(_QWORD*)(a1 + 56), 0);
	sub_140019490((_QWORD*)(a1 + 8));
	sub_14018B900(*(_QWORD*)(a1 + 24), 0);
	*(_QWORD*)(a1 + 24) = 0i64;
}

