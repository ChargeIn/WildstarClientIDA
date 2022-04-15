//----- (000000014085C6E0) ----------------------------------------------------
void __fastcall sub_14085C6E0(_QWORD* a1, int a2)
{
	int v3; // edx
	int v4; // edx
	int v5; // edx
	int v6; // edx
	__int64 v7; // rbx
	char v8; // al
	__int64 v9; // rbx
	bool v10; // al
	__int64 v11; // r8
	__int64 v12; // rdx
	bool v13; // al
	bool v14; // al
	bool v15; // al

	v3 = a2 - 24;
	if (!v3)
	{
		v9 = *a1;
		v15 = sub_14085A670(a1, 0);
		v11 = 1i64;
		v12 = v15;
		goto LABEL_11;
	}
	v4 = v3 - 1;
	if (!v4)
	{
		v9 = *a1;
		v14 = sub_14085A670(a1, 1u);
		v11 = 2i64;
		v12 = 2 * (unsigned int)v14;
		goto LABEL_11;
	}
	v5 = v4 - 1;
	if (!v5)
	{
		v9 = *a1;
		v13 = sub_14085A670(a1, 2u);
		v11 = 4i64;
		v12 = 4 * (unsigned int)v13;
		goto LABEL_11;
	}
	v6 = v5 - 1;
	if (!v6)
	{
		v9 = *a1;
		v10 = sub_14085A670(a1, 3u);
		v11 = 8i64;
		v12 = 8 * (unsigned int)v10;
	LABEL_11:
		(*(void(__fastcall**)(_QWORD*, __int64, __int64, _QWORD, _QWORD))(v9 + 216))(a1, v12, v11, 0i64, 0i64);
		return;
	}
	if (v6 == 1)
	{
		v7 = *a1;
		v8 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 464i64))(a1, 0i64);
		(*(void(__fastcall**)(_QWORD*, _QWORD, __int64))(v7 + 216))(a1, 16 * (unsigned int)(v8 != 0), 16i64);
	}
}

