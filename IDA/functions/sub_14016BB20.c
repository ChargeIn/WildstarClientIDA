//----- (000000014016BB20) ----------------------------------------------------
__int64 __fastcall sub_14016BB20(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rax
	_QWORD* v7; // rsi
	_QWORD* v8; // rdi
	char* v9; // rdx
	_DWORD* v10; // rax
	__m128i* v11; // rdi
	_QWORD* v12; // rbx
	char* v13; // rdx
	_DWORD* v14; // rax
	__m128i* v15; // rbx
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	__m128i* v18; // [rsp+28h] [rbp-40h]
	__int64 v19; // [rsp+40h] [rbp-28h] BYREF
	__m128i* v20; // [rsp+48h] [rbp-20h]

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = sub_1400D66A0(a1, 1u);
	v7 = (_QWORD*)v6;
	if (v6 && (*(_BYTE*)(v6 + 432) & 8) != 0)
	{
		v8 = *(_QWORD**)(v1 + 400);
		v9 = (char*)sub_14018F0E0(&v17, word_1409DCE3C)[1];
		v10 = (_DWORD*)(v8[3] + 16i64);
		if ((unsigned __int64)v10 < v8[2] && v10 != dword_140A12138 && *(int*)(v8[3] + 24i64) > 0)
			v9 = (char*)sub_140056BB0(v8, 2u, 0i64);
		sub_14018F2D0(&v19, v9);
		if (v18)
			sub_14018B900((__int64)v18, 0);
		v11 = v20;
		v12 = *(_QWORD**)(v1 + 400);
		v13 = (char*)sub_14018F0E0(&v19, (unsigned __int16*)v20)[1];
		v14 = (_DWORD*)(v12[3] + 32i64);
		if ((unsigned __int64)v14 < v12[2] && v14 != dword_140A12138 && *(int*)(v12[3] + 40i64) > 0)
			v13 = (char*)sub_140056BB0(v12, 3u, 0i64);
		sub_14018F2D0(&v17, v13);
		if (v20)
			sub_14018B900((__int64)v20, 0);
		v15 = v18;
		sub_140168BC0(v7, v11, v18);
		if (v15)
			sub_14018B900((__int64)v15, 0);
		if (v11)
			sub_14018B900((__int64)v11, 0);
	}
	return 0i64;
}
// 1409DCE3C: using guessed type unsigned __int16 word_1409DCE3C[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

