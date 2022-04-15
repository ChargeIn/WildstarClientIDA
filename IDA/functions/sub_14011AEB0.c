//----- (000000014011AEB0) ----------------------------------------------------
__int64 __fastcall sub_14011AEB0(_QWORD* a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	int v4; // r14d
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rsi
	_DWORD* v9; // rcx
	char* v10; // rdx
	__int64 v11; // rcx
	const __m128i* v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rbp
	_DWORD* v15; // rcx
	__int64 result; // rax
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	const __m128i* v18; // [rsp+28h] [rbp-20h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	v5 = 0;
	if (v3)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
		{
			v7 = ++v5;
			if (v5 >= v3)
				goto LABEL_23;
		}
		v8 = *(_QWORD*)(v6 + 8i64 * v5);
		if (v8)
		{
			v9 = dword_140A12138;
			if (a1[3] < a1[2])
				v9 = (_DWORD*)a1[3];
			if (v9[2] != 4)
			{
				if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v9))
				{
					v10 = 0i64;
					goto LABEL_17;
				}
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v9 = dword_140A12138;
				if (a1[3] < a1[2])
					v9 = (_DWORD*)a1[3];
			}
			v10 = (char*)(*(_QWORD*)v9 + 32i64);
		LABEL_17:
			sub_14018F2D0(&v17, v10);
			v11 = v8 + 240;
			v12 = v18;
			v13 = sub_140108E80(v11, v18);
			v14 = v13;
			if (v13)
			{
				if (sub_140118070(v13))
				{
					LODWORD(v17) = 0;
					if (sub_140100DA0(v14, (__int64)&v17))
						v4 = 1;
				}
			}
			if (v12)
				sub_14018B900((__int64)v12, 0);
		}
	}
LABEL_23:
	v15 = (_DWORD*)a1[2];
	result = 1i64;
	LOBYTE(v1) = v4 != 0;
	v15[2] = 1;
	*v15 = v1;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

