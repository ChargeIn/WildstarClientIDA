#include "../winhttp.h"

//----- (00000001400593A0) ----------------------------------------------------
int* __fastcall sub_1400593A0(char* a1)
{
	_QWORD* v1; // rax
	bool v2; // bl
	int* result; // rax
	__int64 v4; // rdi
	__int64 v5; // rbp
	int* v6; // rsi
	int v7; // ebx
	__int64 v8; // [rsp+30h] [rbp-28h] BYREF
	__int64 v9; // [rsp+38h] [rbp-20h]
	__int64 v10; // [rsp+68h] [rbp+10h] BYREF

	v1 = sub_14018F2D0(&v8, a1);
	v2 = sub_1401B5B50(*(__int64*)&qword_140C63788, (const __m128i*)v1[1], 1i64, 3, &v10) < 0;
	if (v9)
		sub_14018B900(v9, 0);
	if (v2)
		return 0i64;
	v4 = v10;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
	v6 = sub_14018B280(v5, 8u);
	v7 = (*(__int64(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v4 + 64i64))(v4, v6, v5);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	if (v7 >= 0)
	{
		result = sub_14018B280(24i64, 0);
		*(_QWORD*)result = v6;
		*((_QWORD*)result + 2) = v6;
		*((_QWORD*)result + 1) = (char*)v6 + v5;
	}
	else
	{
		sub_14018B900((__int64)v6, 0);
		return 0i64;
	}
	return result;
}

