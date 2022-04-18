#include "../winhttp.h"

//----- (0000000140407090) ----------------------------------------------------
void __fastcall sub_140407090(__int64 a1)
{
	int v1; // ebp
	__int64 v2; // rdi
	__int64 v3; // rcx
	__int64 v4; // r14
	__int64 v5; // rsi
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // rdi
	_QWORD* v8; // rbx
	unsigned __int16* v9; // rbx
	__int16* v10; // rax
	__int64 v11; // rax
	void* v12; // rsi
	__int64 v13; // rax
	int v14; // edx
	__int64 v15; // [rsp+20h] [rbp-C8h]
	__int64 v16; // [rsp+30h] [rbp-B8h] BYREF
	__int64 v17; // [rsp+38h] [rbp-B0h]
	void* v18; // [rsp+40h] [rbp-A8h]
	__int64 v19; // [rsp+48h] [rbp-A0h]
	__int64 v20; // [rsp+50h] [rbp-98h] BYREF
	__int64 v21; // [rsp+58h] [rbp-90h]
	__int64 v22; // [rsp+60h] [rbp-88h]
	void* lpv; // [rsp+78h] [rbp-70h]
	__int64 v24; // [rsp+98h] [rbp-50h]
	unsigned __int16* v25; // [rsp+B8h] [rbp-30h]
	unsigned __int16* v26; // [rsp+C0h] [rbp-28h]
	__int64 v27; // [rsp+100h] [rbp+18h] BYREF

	v1 = 0;
	v2 = 0i64;
	sub_14040B680(&v20, a1, 1);
	v4 = v21;
	if (v21 != v22)
	{
		v5 = qword_140C658A0;
		v27 = v21;
		v6 = (*(__int64(__fastcall**)(__int64*))(qword_140C658A0 + 40))(&v27);
		v3 = *(_QWORD*)(v5 + 32);
		v7 = v6;
		v8 = *(_QWORD**)(v3 + 8 * (v6 % *(_QWORD*)(v5 + 24)));
		if (!v8)
			goto LABEL_6;
		while (v7 != *v8 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v5 + 48))(&v27, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				goto LABEL_6;
		}
		if (v8 == (_QWORD*)-24i64)
			LABEL_6:
		v2 = 0i64;
		else
			v2 = v8[3];
	}
	v9 = v25;
	if (v25 == v26
		|| (v10 = sub_14034BDD0(v3, 215974), (unsigned int)sub_14018E2C0((__int64)v10, v9))
		&& (unsigned int)sub_14018E2C0((__int64)&unk_1409E869C, v9))
	{
		v1 = 1;
	}
	if (!v2)
	{
		v11 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v11, 1);
	}
	v12 = lpv;
	if ((unsigned int)sub_1403E1170(lpv, 0))
	{
		v16 = 0i64;
		v17 = 0i64;
		v18 = 0i64;
		v19 = 0i64;
		v17 = *(_QWORD*)(v2 + 16);
		v14 = **(_DWORD**)(v2 + 8);
		v18 = v12;
		LODWORD(v19) = v1;
		LODWORD(v16) = v14;
		sub_1403F4740(qword_140C65898, 0x1CEu, (__int64)&v16);
	}
	else
	{
		v13 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
		LODWORD(v15) = 20;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v13, v15);
	}
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v24)
		sub_14018B900(v24, 0);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v4)
		sub_14018B900(v4, 0);
}
// 140407135: variable 'v3' is possibly undefined
// 1404071F0: variable 'v15' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

