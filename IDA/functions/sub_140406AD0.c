#include "../winhttp.h"

//----- (0000000140406AD0) ----------------------------------------------------
void __fastcall sub_140406AD0(__int64 a1)
{
	__int64 v1; // r14
	_WORD* v2; // rbp
	__int64 v3; // rsi
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	__int64 v6; // rax
	__int64* v7; // rbx
	__int64 v8; // rbx
	int v9; // ecx
	int v10; // [rsp+20h] [rbp-C8h]
	__int64 v11; // [rsp+30h] [rbp-B8h] BYREF
	__int64 v12; // [rsp+38h] [rbp-B0h]
	_WORD* v13; // [rsp+40h] [rbp-A8h]
	__int64 v14; // [rsp+50h] [rbp-98h] BYREF
	__int64 v15; // [rsp+58h] [rbp-90h]
	__int64 v16; // [rsp+60h] [rbp-88h]
	void* lpv; // [rsp+78h] [rbp-70h]
	__int64 v18; // [rsp+98h] [rbp-50h]
	__int64 v19; // [rsp+B8h] [rbp-30h]
	__int64 v20; // [rsp+100h] [rbp+18h] BYREF

	sub_14040B680(&v14, a1, 1);
	v1 = v15;
	v2 = lpv;
	if (v15 == v16)
		goto LABEL_6;
	v3 = qword_140C658A0;
	v20 = v15;
	v4 = (*(__int64(__fastcall**)(__int64*))(qword_140C658A0 + 40))(&v20);
	v5 = *(_QWORD**)(*(_QWORD*)(v3 + 32) + 8 * (v4 % *(_QWORD*)(v3 + 24)));
	if (!v5)
		goto LABEL_6;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v3 + 48))(&v20, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			goto LABEL_6;
	}
	v7 = v5 + 3;
	if (!v7 || (v8 = *v7) == 0)
	{
	LABEL_6:
		v6 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
		v10 = 1;
	LABEL_7:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v6, v10);
		goto LABEL_8;
	}
	if (!(unsigned int)sub_1403E1170(v2, 0))
	{
		v6 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
		v10 = 20;
		goto LABEL_7;
	}
	v11 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	v12 = *(_QWORD*)(v8 + 16);
	v9 = **(_DWORD**)(v8 + 8);
	v13 = v2;
	LODWORD(v11) = v9;
	sub_1403F4740(qword_140C65898, 0x1BDu, (__int64)&v11);
LABEL_8:
	if (v19)
		sub_14018B900(v19, 0);
	if (v18)
		sub_14018B900(v18, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	if (v1)
		sub_14018B900(v1, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

