//----- (0000000140622E60) ----------------------------------------------------
void __fastcall sub_140622E60(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	int v10; // [rsp+20h] [rbp-28h] BYREF
	_QWORD* v11; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v12)(); // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	v2 = a1[6];
	if (v2)
	{
		v10 = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v2 + 16i64))(v2, &v10, 0i64))
			goto LABEL_17;
	}
	v3 = a1[7];
	if (v3)
	{
		v10 = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v3 + 16i64))(v3, &v10, 0i64))
			goto LABEL_17;
	}
	v4 = a1[8];
	if (v4)
	{
		v10 = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v4 + 16i64))(v4, &v10, 0i64))
			goto LABEL_17;
	}
	v5 = a1[9];
	if (v5)
	{
		v10 = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v5 + 16i64))(v5, &v10, 0i64))
			goto LABEL_17;
	}
	v6 = a1[10];
	if (v6)
	{
		v10 = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v6 + 16i64))(v6, &v10, 0i64))
			goto LABEL_17;
	}
	if (((v7 = a1[11]) == 0
		|| (v10 = 0, (*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v7 + 16i64))(v7, &v10, 0i64)))
		&& ((v8 = a1[12]) == 0
			|| (v10 = 0, (*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v8 + 16i64))(v8, &v10, 0i64)))
		&& ((v9 = a1[13]) == 0
			|| (v10 = 0, (*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v9 + 16i64))(v9, &v10, 0i64))))
	{
		sub_14061FDB0((__int64)a1);
	}
	else
	{
	LABEL_17:
		v10 = 0;
		v12 = sub_140622E60;
		v11 = a1;
		v13 = 0i64;
		sub_140195960((__int64)(a1 + 134), 0, (__int64)&v10, 4);
	}
}

