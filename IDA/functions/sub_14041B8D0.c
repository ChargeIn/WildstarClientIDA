#include "../winhttp.h"

//----- (000000014041B8D0) ----------------------------------------------------
__int64 __fastcall sub_14041B8D0(__int64 a1)
{
	unsigned int v1; // ebx
	_DWORD v3[6]; // [rsp+20h] [rbp-578h] BYREF
	char v4[8]; // [rsp+38h] [rbp-560h] BYREF
	__int64 v5; // [rsp+40h] [rbp-558h]
	char v6[8]; // [rsp+58h] [rbp-540h] BYREF
	__int64 v7; // [rsp+60h] [rbp-538h]
	char v8[8]; // [rsp+78h] [rbp-520h] BYREF
	__int64 v9; // [rsp+80h] [rbp-518h]
	char v10[8]; // [rsp+98h] [rbp-500h] BYREF
	__int64 v11; // [rsp+A0h] [rbp-4F8h]
	__int64 v12; // [rsp+C0h] [rbp-4D8h]
	__int64 v13; // [rsp+3C0h] [rbp-1D8h]

	sub_14066DC40((__int64)v3, a1);
	v1 = sub_14066E000(v3);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		v12 = 0i64;
	}
	if (v13)
		sub_14018B900(v13, 0);
	sub_140008410((__int64)v10);
	sub_14018B900(v11, 0);
	sub_140008410((__int64)v8);
	sub_14018B900(v9, 0);
	sub_140008410((__int64)v6);
	sub_14018B900(v7, 0);
	sub_140008410((__int64)v4);
	sub_14018B900(v5, 0);
	return v1;
}
// 14041B8D0: using guessed type _DWORD var_578[6];
// 14041B8D0: using guessed type char var_500[8];
// 14041B8D0: using guessed type char var_520[8];
// 14041B8D0: using guessed type char var_540[8];
// 14041B8D0: using guessed type char var_560[8];

