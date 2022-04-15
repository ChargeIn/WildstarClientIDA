//----- (0000000140154D40) ----------------------------------------------------
__int64 __fastcall sub_140154D40(_QWORD* a1)
{
	void(__fastcall * **v1)(_QWORD); // rdi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v8; // rsi
	char* v9; // rax
	__int64 v10; // rcx
	int* v11; // rsi
	unsigned int v12; // ebx
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	int* v14; // [rsp+28h] [rbp-20h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (!v3)
		goto LABEL_5;
	v5 = *(_QWORD*)(qword_140C63650 + 760);
	v6 = 0i64;
	while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
	{
		v6 = ++v4;
		if (v4 >= v3)
			goto LABEL_5;
	}
	v8 = *(_QWORD*)(v5 + 8i64 * v4);
	if (v8)
	{
		v9 = (char*)sub_140056BB0(a1, 1u, 0i64);
		sub_14018F2D0(&v13, v9);
		v10 = *(_QWORD*)(v8 + 360);
		v11 = v14;
		if (v14)
			v1 = (void(__fastcall***)(_QWORD))sub_1401545C0(v10, v14);
		v12 = sub_140154C60(a1, v1);
		if (v11)
			sub_14018B900((__int64)v11, 0);
		return v12;
	}
	else
	{
	LABEL_5:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C63650: using guessed type __int64 qword_140C63650;

