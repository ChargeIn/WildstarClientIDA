#include "../winhttp.h"

//----- (00000001407C2CA0) ----------------------------------------------------
__int64 __fastcall sub_1407C2CA0(__int64* a1)
{
	__int64 v1; // rbx
	int* v3; // rdx
	__int64 v4; // rax
	int* v5; // rax
	int v6; // edi

	v1 = 0i64;
	if (!byte_140C890F5)
	{
		v3 = sub_14018B280(24i64, 0);
		if (v3)
		{
			*((_QWORD*)v3 + 1) = 2i64;
			*((_QWORD*)v3 + 2) = 0i64;
			*(_QWORD*)v3 = &unk_140C3ACC0;
		}
		else
		{
			v3 = 0i64;
		}
		v4 = qword_140C63770;
		byte_140C890F5 = 1;
		qword_140C63770 = (__int64)v3;
		*((_QWORD*)v3 + 2) = v4;
	}
	v5 = sub_14018B280(6736i64, 0);
	if (v5)
		v1 = sub_1407C2D70((__int64)v5);
	v6 = sub_1407C3B60(v1);
	if (v6 >= 0)
	{
		*a1 = v1;
		return 0i64;
	}
	else
	{
		if (v1)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v1 + 320i64))(v1, 1i64);
		return (unsigned int)v6;
	}
}
// 140C63770: using guessed type __int64 qword_140C63770;
// 140C890F5: using guessed type char byte_140C890F5;

