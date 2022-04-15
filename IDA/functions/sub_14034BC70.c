#include "../winhttp.h"

//----- (000000014034BC70) ----------------------------------------------------
__int64 __fastcall sub_14034BC70(int* a1, __int64* a2)
{
	__int64 result; // rax
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rsi
	const CHAR* v7; // rbx
	unsigned __int16* v8; // rdx
	__int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+50h] [rbp+8h] BYREF

	v10 = (__int64)a1;
	if (qword_140C7AAB8 || qword_140C7AAC0)
		return 2147549183i64;
	if (!a2)
		return 2147942487i64;
	v4 = (*(__int64(__fastcall**)(__int64*))(*a2 + 32))(a2);
	v5 = *a2;
	v6 = v4;
	v9[0] = v4;
	v7 = 0i64;
	v9[1] = v4 + (*(__int64(__fastcall**)(__int64*))(v5 + 16))(a2);
	v9[2] = 0i64;
	result = sub_14034B850(v9, v6 + 96, v6);
	if ((int)result >= 0)
	{
		if (qword_140C7ABB0)
		{
			sub_14001A270((__int64)&unk_140C7ABA0, *(_QWORD**)(qword_140C7ABA8 + 8));
			*(_QWORD*)(qword_140C7ABA8 + 16) = qword_140C7ABA8;
			*(_QWORD*)(qword_140C7ABA8 + 8) = 0i64;
			*(_QWORD*)(qword_140C7ABA8 + 24) = qword_140C7ABA8;
			qword_140C7ABB0 = 0i64;
		}
		v8 = *(unsigned __int16**)(v6 + 24);
		if (v8)
		{
			sub_14018DD50((int**)&v10, v8);
			v7 = (const CHAR*)v10;
		}
		qword_140C7AAC8 = (__int64)sub_1407DC810(4u, v7);
		if (!qword_140C7AAC8)
		{
			v10 = 0x141DEEE00i64;
			sub_1401A3130(4, 0, &v10, v7);
		}
		sub_1400035C0(&qword_140C7AAB8, (void(__fastcall***)(_QWORD))a2);
		qword_140C7AAC0 = v6;
		if (v7)
			(*(void(__fastcall**)(const CHAR*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 16);
		return 0i64;
	}
	return result;
}
// 140C7AAB8: using guessed type __int64 qword_140C7AAB8;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;
// 140C7ABA8: using guessed type __int64 qword_140C7ABA8;
// 140C7ABB0: using guessed type __int64 qword_140C7ABB0;

