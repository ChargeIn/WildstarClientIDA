//----- (000000014011D270) ----------------------------------------------------
__int64 __fastcall sub_14011D270(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	char* v6; // rax
	__int64 v7; // rcx
	__m128i* v8; // rbx
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__m128i* v11; // [rsp+28h] [rbp-20h]

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
	v6 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v10, v6);
	v7 = v1 + 2688;
	v8 = v11;
	sub_1400F5000(v7, v11);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

