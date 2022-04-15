//----- (00000001402E30E0) ----------------------------------------------------
__int64 __fastcall sub_1402E30E0(__int64 a1, int* a2, __int64 a3, int a4)
{
	int v4; // eax
	int* (__fastcall * v5)(__int64, int, int); // rax
	void(__fastcall * v7)(__int64, int*); // rcx
	int* v8; // rax
	int* v9; // rbx
	__int64 v11; // rbx
	void(__fastcall * v12)(__int64, __int64); // rdi
	__int64 v13; // rsi
	__int64 v14; // rdi
	void(__fastcall * v15)(__int64, __int64); // rbx
	__int64 v16; // rsi
	__int64 v17; // [rsp+20h] [rbp-68h] BYREF
	int v18; // [rsp+28h] [rbp-60h]
	__int64 v19; // [rsp+30h] [rbp-58h]
	int v20; // [rsp+38h] [rbp-50h]
	unsigned int v21; // [rsp+3Ch] [rbp-4Ch]
	__int64 v22; // [rsp+40h] [rbp-48h]
	int* v23; // [rsp+48h] [rbp-40h]
	void* v24; // [rsp+50h] [rbp-38h]
	void(__fastcall * v25)(__int64, int*); // [rsp+58h] [rbp-30h]
	__int64 v26; // [rsp+60h] [rbp-28h]

	v4 = *a2;
	v19 = a1;
	v17 = a3;
	v18 = a4;
	v20 = v4;
	v5 = sub_1402E30D0;
	v7 = (void(__fastcall*)(__int64, int*))sub_14002D9C0;
	v26 = 0i64;
	v24 = sub_1402E30D0;
	if (byte_140C1E4AC != 49)
		return 2147500037i64;
	v22 = 0i64;
	if (!sub_1402E30D0)
	{
		v5 = (int* (__fastcall*)(__int64, int, int))sub_1401CD9D0;
		v26 = 0i64;
		v24 = sub_1401CD9D0;
	}
	if (!sub_14002D9C0)
		v7 = (void(__fastcall*)(__int64, int*))sub_1401CD9E0;
	v25 = v7;
	v8 = v5(0i64, 1, 7144);
	v9 = v8;
	if (!v8)
		return 2147500037i64;
	v23 = v8;
	*((_QWORD*)v8 + 7) = 0i64;
	if ((unsigned int)sub_1401ABB20((__int64)&v17))
	{
		v25(v26, v9);
		return 2147500037i64;
	}
	if ((unsigned int)sub_1401ABDA0((__int64)&v17, 4) != 1)
	{
		v11 = (__int64)v23;
		if (v23)
		{
			v12 = (void(__fastcall*)(__int64, __int64))v25;
			if (v25)
			{
				v13 = v26;
				if (*((_QWORD*)v23 + 7))
					((void(__fastcall*)(__int64))v25)(v26);
				v12(v13, v11);
			}
		}
		return 2147500037i64;
	}
	*(_QWORD*)a2 = v21;
	v14 = (__int64)v23;
	if (v23)
	{
		v15 = (void(__fastcall*)(__int64, __int64))v25;
		if (v25)
		{
			v16 = v26;
			if (*((_QWORD*)v23 + 7))
				((void(__fastcall*)(__int64))v25)(v26);
			v15(v16, v14);
		}
	}
	return 0i64;
}
// 140C1E4AC: using guessed type char byte_140C1E4AC;

