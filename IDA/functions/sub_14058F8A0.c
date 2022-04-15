#include "../winhttp.h"

//----- (000000014058F8A0) ----------------------------------------------------
int* __fastcall sub_14058F8A0(__int64 a1, unsigned __int64* a2)
{
	__int64 v2; // r8
	int* v5; // rax
	int* v6; // rbx
	unsigned __int64 v7; // rax
	int* v9; // [rsp+20h] [rbp-99h] BYREF
	int* v10; // [rsp+28h] [rbp-91h] BYREF
	__int128 v11; // [rsp+30h] [rbp-89h] BYREF
	char v12[8]; // [rsp+48h] [rbp-71h] BYREF
	int* v13; // [rsp+50h] [rbp-69h]
	__int64 v14; // [rsp+58h] [rbp-61h]
	__int64 v15; // [rsp+68h] [rbp-51h]
	unsigned __int64 v16; // [rsp+90h] [rbp-29h] BYREF
	_QWORD v17[11]; // [rsp+98h] [rbp-21h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(int**)(v2 + 8);
	v6 = (int*)v2;
	while (v5)
	{
		if (*((_QWORD*)v5 + 4) < *a2)
		{
			v5 = (int*)*((_QWORD*)v5 + 3);
		}
		else
		{
			v6 = v5;
			v5 = (int*)*((_QWORD*)v5 + 2);
		}
	}
	if (v6 == (int*)v2 || *a2 < *((_QWORD*)v6 + 4))
	{
		v11 = 0i64;
		v13 = sub_14018B280(40i64, 0);
		v14 = 0i64;
		*(_BYTE*)v13 = 0;
		*((_QWORD*)v13 + 1) = 0i64;
		*((_QWORD*)v13 + 2) = v13;
		*((_QWORD*)v13 + 3) = v13;
		v7 = *a2;
		v15 = 0i64;
		v16 = v7;
		sub_14058FA40((__int64)v17, (__int64)&v11);
		v10 = v6;
		sub_140590670(a1, &v9, (_QWORD**)&v10, &v16);
		v6 = v9;
		sub_140582D30(v17);
		if (v15)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
		if (v14)
		{
			sub_140590310((__int64)v12, *((_QWORD**)v13 + 1));
			*((_QWORD*)v13 + 2) = v13;
			*((_QWORD*)v13 + 1) = 0i64;
			*((_QWORD*)v13 + 3) = v13;
			v14 = 0i64;
		}
		sub_14018B900((__int64)v13, 0);
		if (*((_QWORD*)&v11 + 1))
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*((_QWORD*)&v11 + 1) - 16i64) + 8i64))(*((_QWORD*)&v11 + 1) - 16i64);
		if ((_QWORD)v11)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	}
	return v6 + 10;
}
// 14058F8A0: using guessed type _QWORD var_78[11];
// 14058F8A0: using guessed type char var_C8[8];

