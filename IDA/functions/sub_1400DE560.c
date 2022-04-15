//----- (00000001400DE560) ----------------------------------------------------
__int64 __fastcall sub_1400DE560(_QWORD* a1)
{
	int v1; // esi
	__int64 v3; // rbp
	char* v4; // rdx
	_DWORD* v5; // rax
	int* v6; // rdi
	float v7; // xmm6_4
	int v8; // eax
	_DWORD* v9; // rcx
	int v10; // r14d
	__int64 v12; // [rsp+30h] [rbp-68h] BYREF
	__int64 v13; // [rsp+38h] [rbp-60h]
	__int64 v14; // [rsp+50h] [rbp-48h] BYREF
	int* v15; // [rsp+58h] [rbp-40h]

	v1 = 1;
	v3 = sub_1400D66A0(a1, 1u);
	if (v3)
	{
		v4 = (char*)sub_14018F0E0(&v12, word_1409D34B4)[1];
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v4 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v14, v4);
		if (v13)
			sub_14018B900(v13, 0);
		v6 = v15;
		if (*(_WORD*)v15)
		{
			v7 = sub_140056C40(a1, 3u);
			v8 = sub_140056D60(a1, 4u);
			v9 = (_DWORD*)(a1[3] + 64i64);
			v10 = v8;
			if ((unsigned __int64)v9 < a1[2] && v9 != dword_140A12138 && *(int*)(a1[3] + 72i64) > 0)
				v1 = sub_140056D60(a1, 5u);
			sub_14014E400(v3 + 488, v6, v7, v10, v1 != 0);
		}
		sub_14018B900((__int64)v6, 0);
	}
	return 0i64;
}
// 1409D34B4: using guessed type unsigned __int16 word_1409D34B4[24];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

