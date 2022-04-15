#include "../winhttp.h"

//----- (00000001400036F0) ----------------------------------------------------
void __fastcall sub_1400036F0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64* v6; // rbx
	int i; // edi
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx

	sub_140003610(a1);
	v2 = a1[45];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	v3 = a1[44];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	v4 = a1[43];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = a1[42];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	v6 = a1 + 44;
	for (i = 2; i >= 0; --i)
	{
		v8 = *(v6 - 7);
		v6 -= 5;
		sub_14018B900(v8, 0);
		v9 = *(v6 - 1);
		*(v6 - 2) = 0i64;
		sub_14018B900(v9, 0);
		v10 = *v6;
		*(v6 - 1) = 0i64;
		sub_14018B900(v10, 0);
		v11 = v6[1];
		*v6 = 0i64;
		sub_14018B900(v11, 0);
		v6[1] = 0i64;
		v6[2] = 0i64;
	}
}

