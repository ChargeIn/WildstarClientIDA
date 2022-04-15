//----- (00000001400DFB90) ----------------------------------------------------
__int64 __fastcall sub_1400DFB90(_QWORD* a1)
{
	_QWORD* v2; // rsi
	char* v3; // rax
	__int64 v4; // r9
	unsigned __int64 v5; // r8
	unsigned int v6; // edx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rbx
	_QWORD* v11; // rax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v14; // [rsp+28h] [rbp-20h]

	v2 = (_QWORD*)sub_1400D66A0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v13, v3);
	v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C63650 + 768);
	v6 = 0;
	if (v5)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
		{
			v8 = ++v6;
			if (v6 >= v5)
				goto LABEL_7;
		}
		v4 = *(_QWORD*)(v7 + 8i64 * v6);
	}
LABEL_7:
	v9 = *(_QWORD*)(v4 + 368);
	v10 = *(_QWORD*)(v9 + 24);
	v11 = sub_14010E2E0(*(_QWORD**)(v9 + 16), v10, v14);
	if (v11 != (_QWORD*)v10 && *v11)
		sub_1400C7140(v2, (_QWORD*)*v11, 0);
	if (v14)
		sub_14018B900((__int64)v14, 0);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

