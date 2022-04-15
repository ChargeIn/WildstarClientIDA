//----- (0000000140704C00) ----------------------------------------------------
__int64 __fastcall sub_140704C00(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rdi
	void(__fastcall * **v7)(_QWORD); // rax
	__int64 v8; // rbx
	__int64 v9; // rcx

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C63650 + 760);
		v4 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v4 = (unsigned int)v1;
			if ((unsigned int)v1 >= v2)
				goto LABEL_5;
		}
		v5 = *(_QWORD*)(v3 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v5 = 0i64;
	}
	v6 = *(_QWORD*)(qword_140C65898 + 29504);
	if (v5 == v6)
	{
		v7 = (void(__fastcall***)(_QWORD))sub_1400D6530(a1, 1);
		v8 = (__int64)v7;
		if (*(void(__fastcall****)(_QWORD))(v6 + 3712) != v7)
		{
			if (v7)
				(**v7)(v7);
			v9 = *(_QWORD*)(v6 + 3712);
			if (v9)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				*(_QWORD*)(v6 + 3712) = 0i64;
			}
			*(_QWORD*)(v6 + 3712) = v8;
			if (v8)
				sub_1400D42F0(v8, 1, 1, 4.0);
		}
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

