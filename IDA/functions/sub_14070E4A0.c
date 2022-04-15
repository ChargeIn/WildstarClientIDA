//----- (000000014070E4A0) ----------------------------------------------------
__int64 __fastcall sub_14070E4A0(_QWORD* a1)
{
	unsigned int v2; // ebx
	char* v3; // rdx
	_DWORD* v4; // rax
	int v5; // eax
	__int64 v6; // rsi
	int v7; // ebp
	__int64* v8; // r8
	__int64* v9; // rdx
	__int64 v10; // rdx
	__int64 v12; // [rsp+20h] [rbp-48h] BYREF
	__int64 v13; // [rsp+28h] [rbp-40h]
	__int64 v14; // [rsp+30h] [rbp-38h]
	__int64 v15; // [rsp+40h] [rbp-28h] BYREF
	__int64 v16; // [rsp+48h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = (char*)sub_14018F0E0(&v15, word_1409F8A84)[1];
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v12, v3);
	if (v16)
		sub_14018B900(v16, 0);
	if (v2 > 4)
		v2 = 4;
	v5 = sub_1405DF560(qword_140C65898 + 26680, v2);
	v6 = v13;
	v7 = v5;
	if (v5 == v2 && v13 != v14)
	{
		if (v2 == 1)
		{
			v8 = 0i64;
			v9 = &v12;
		}
		else
		{
			if (v2 != 2)
				goto LABEL_16;
			v8 = &v12;
			v9 = 0i64;
		}
		sub_1405DE2E0(qword_140C65898 + 26680, (__int64)v9, (__int64)v8);
	}
LABEL_16:
	v10 = a1[2];
	*(_DWORD*)(v10 + 8) = 3;
	*(double*)v10 = (double)v7;
	a1[2] += 16i64;
	if (v6)
		sub_14018B900(v6, 0);
	return 1i64;
}
// 1409F8A84: using guessed type unsigned __int16 word_1409F8A84[16];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

