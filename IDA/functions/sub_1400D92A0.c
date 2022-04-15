//----- (00000001400D92A0) ----------------------------------------------------
__int64 __fastcall sub_1400D92A0(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbp
	__int64 result; // rax
	__int64 v10; // rsi
	__int64 v11; // r14
	_QWORD* v12; // rcx
	_DWORD* v13; // rax
	double v14; // xmm0_8
	float v15; // xmm6_4
	int v16; // ebx
	int* v17; // rax

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	result = sub_1400D66A0(a1, 1u);
	v10 = result;
	if (result)
	{
		v11 = sub_14014EBC0((__int64)a1, 2);
		if (!v11)
			sub_140056570(a1, 2u, "must be a window location");
		v12 = *(_QWORD**)(v8 + 16);
		v13 = (_DWORD*)(v12[3] + 80i64);
		if ((unsigned __int64)v13 >= v12[2] || v13 == dword_140A12138 || *(int*)(v12[3] + 88i64) <= 0)
			v14 = 0.0;
		else
			v14 = sub_140056C40(v12, 6u);
		v16 = sub_1400F26A0(v8, 7);
		if (v16 >= 26)
			v16 = 1;
		if (!*(_QWORD*)(v10 + 440))
		{
			v17 = sub_14018B280(256i64, 0);
			if (v17)
				v1 = sub_1400C5220((__int64)v17);
			*(_QWORD*)(v10 + 440) = v1;
		}
		v15 = v14;
		sub_1400C5310(*(_QWORD*)(v10 + 440), v10 + 64, v11, v15, v16);
		return 0i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

