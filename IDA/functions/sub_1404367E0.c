#include "../winhttp.h"

//----- (00000001404367E0) ----------------------------------------------------
__int64 sub_1404367E0()
{
	int* v0; // rax
	int* v1; // rax
	__int64 v2; // rbx

	if (!qword_140C658D0)
	{
		v0 = sub_14018B280(16i64, 0);
		if (v0)
		{
			*((_BYTE*)v0 + 8) = -1;
			qword_140C658D0 = (__int64)v0;
			*(_QWORD*)v0 = off_140B66F48;
		}
		else
		{
			qword_140C658D0 = 0i64;
		}
	}
	if (qword_140C658C8)
		return 0i64;
	v1 = sub_14018B280(136i64, 0);
	v2 = (__int64)v1;
	if (v1)
	{
		*(_QWORD*)v1 = 0i64;
		v1[2] = 19;
		sub_1400522F0((_QWORD*)v1 + 2);
		sub_1400522F0((_QWORD*)(v2 + 56));
		sub_1400522F0((_QWORD*)(v2 + 96));
	}
	else
	{
		v2 = 0i64;
	}
	qword_140C658C8 = v2;
	if ((int)sub_140436310(v2, *(_DWORD*)(qword_140C635F0 + 5896)) >= 0)
	{
		sub_140436AD0(v2 + 16, (unsigned int(__fastcall*)(__int64, __int64, __int64))sub_140436970, 0i64);
		return 0i64;
	}
	if (qword_140C658D0)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C658D0 + 32i64))(qword_140C658D0, 1i64);
	qword_140C658D0 = 0i64;
	if (qword_140C658C8)
		sub_1404368F0((_QWORD*)qword_140C658C8);
	qword_140C658C8 = 0i64;
	return 2147500037i64;
}
// 140B66F48: using guessed type __int64 (__fastcall *off_140B66F48[7])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C658C8: using guessed type __int64 qword_140C658C8;
// 140C658D0: using guessed type __int64 qword_140C658D0;

