//----- (0000000140730C30) ----------------------------------------------------
__int64 __fastcall sub_140730C30(_QWORD* a1)
{
	_DWORD* v1; // rax
	char* v3; // rax
	char* v4; // rdx
	_DWORD* v5; // rax
	_DWORD* v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rbx
	__int64 v9; // rdi
	__int64 v11; // [rsp+20h] [rbp-29h] BYREF
	__int64 v12; // [rsp+28h] [rbp-21h]
	__int64 v13; // [rsp+30h] [rbp-19h]
	__int64 v14; // [rsp+38h] [rbp-11h]
	__int64 v15; // [rsp+40h] [rbp-9h] BYREF
	__int64 v16; // [rsp+48h] [rbp-1h]
	__int64 v17; // [rsp+60h] [rbp+17h] BYREF
	__int64 v18; // [rsp+68h] [rbp+1Fh]
	__int64 v19; // [rsp+80h] [rbp+37h] BYREF
	__int64 v20; // [rsp+88h] [rbp+3Fh]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] != 3)
	{
		v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
		sub_14018F2D0(&v17, v3);
		v4 = (char*)sub_14018F0E0(&v15, word_1409F90FC)[1];
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v4 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v19, v4);
		if (v16)
			sub_14018B900(v16, 0);
		v6 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v7 = 0;
		else
			v7 = sub_140056D60(a1, 3u);
		v8 = v18;
		v9 = v20;
		v11 = 18i64;
		v12 = v18;
		v13 = v20;
		v14 = v7;
		sub_1403F4740(qword_140C65898, 0x1BAu, (__int64)&v11);
		if (v9)
			sub_14018B900(v9, 0);
		if (v8)
			sub_14018B900(v8, 0);
	}
	else
	{
		v11 = (unsigned int)sub_140056D60(a1, 1u);
		v12 = 0i64;
		v13 = 0i64;
		v14 = 0i64;
		sub_1403F4740(qword_140C65898, 0x1BAu, (__int64)&v11);
	}
	return 0i64;
}
// 1409F90FC: using guessed type unsigned __int16 word_1409F90FC[20];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

