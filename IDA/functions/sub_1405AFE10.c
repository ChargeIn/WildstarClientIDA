#include "../winhttp.h"

//----- (00000001405AFE10) ----------------------------------------------------
void __fastcall sub_1405AFE10(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx
	int v4; // eax
	_QWORD* i; // rdi
	__int64 v6; // rbx
	int v7; // eax
	int v8; // [rsp+20h] [rbp-48h] BYREF
	int v9; // [rsp+24h] [rbp-44h]
	__int64 v10; // [rsp+28h] [rbp-40h]
	__int64 v11; // [rsp+30h] [rbp-38h]
	__int64 v12; // [rsp+38h] [rbp-30h]

	v2 = a1[36];
	if (v2)
	{
		(*(void(__fastcall**)(__int64, int* (__fastcall*)(__int64, __int64, __int64, int, int, _QWORD*), _QWORD*))(*(_QWORD*)v2 + 648i64))(
			v2,
			sub_1405B0220,
			a1);
		v3 = a1[36];
		v4 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
		v8 = 1109;
		v10 = 0x40000000i64;
		v11 = 0i64;
		v12 = 0i64;
		v9 = (int)((double)v4 * 2.328306436538696e-10 * 4294967296.0);
		(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v8);
	}
	for (i = (_QWORD*)a1[39]; i != (_QWORD*)a1[40]; ++i)
	{
		v6 = *i;
		if (*i)
			(**(void(__fastcall***)(_QWORD))v6)(*i);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v6 + 648i64))(v6, 0i64, a1);
		v7 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
		v8 = 1111;
		v10 = 0x40000000i64;
		v11 = 0i64;
		v12 = 0i64;
		v9 = (int)((double)v7 * 2.328306436538696e-10 * 4294967296.0);
		(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v6 + 584i64))(v6, 0i64, &v8);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	}
}
// 140C77890: using guessed type __int64 qword_140C77890;

