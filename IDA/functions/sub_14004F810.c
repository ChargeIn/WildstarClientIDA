#include "../winhttp.h"

//----- (000000014004F810) ----------------------------------------------------
void __fastcall sub_14004F810(_QWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rcx
	int i; // edi
	__int64 v5; // rcx
	_QWORD* v6; // rbx
	int j; // edi
	__int64 v8; // rcx
	_QWORD* v9; // rbx
	int k; // edi
	__int64 v11; // rcx

	sub_140019490(a1 + 185);
	sub_14018B900(a1[187], 0);
	v2 = a1 + 182;
	a1[187] = 0i64;
	v3 = a1[182];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	for (i = 16; i >= 0; --i)
	{
		v5 = *(v2 - 2);
		v2 -= 2;
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	}
	v6 = a1 + 148;
	for (j = 22; j >= 0; --j)
	{
		v8 = *(v6 - 2);
		v6 -= 2;
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	}
	v9 = a1 + 102;
	for (k = 2; k >= 0; --k)
	{
		v11 = *(v9 - 2);
		v9 -= 2;
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	}
	sub_140019490(a1 + 85);
	sub_14018B900(a1[87], 0);
	a1[87] = 0i64;
	sub_140019490(a1 + 80);
	sub_14018B900(a1[82], 0);
	a1[82] = 0i64;
	sub_1400BA220(a1 + 2);
}

