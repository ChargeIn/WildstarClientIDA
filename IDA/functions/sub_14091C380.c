//----- (000000014091C380) ----------------------------------------------------
__int64 __fastcall sub_14091C380(unsigned int** a1, int* a2, __int64* a3, int a4)
{
	unsigned int* v4; // rdi
	int v6; // edx
	int v9; // edx
	int v10; // edx
	int v11; // r10d
	int v12; // r8d
	_QWORD* v13; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rsi
	_QWORD* v16; // rax
	_QWORD* v17; // rax
	int v18; // edx
	_QWORD* v19; // rax
	_QWORD* v20; // rax
	bool v21; // zf
	_QWORD* v22; // rbx
	_QWORD* v23; // rax
	__int64 v24; // [rsp+28h] [rbp-20h]

	v4 = *a1;
	v6 = *a2;
	if (v6 < 0)
		return 0i64;
	v9 = v6 - 1;
	if (!v9)
	{
		if (a4)
			sub_1409309E0((__int64)a1);
		v20 = sub_140931B80(v4, (a2[1] != 0) + 2, 1, 0i64, 512, a2[2]);
		v21 = *v4 == 0;
		goto LABEL_27;
	}
	v10 = v9 - 1;
	if (!v10)
	{
		if (a4)
			sub_1409309E0((__int64)a1);
		sub_140932A90(v4, 27, 1, 0i64, 1, 0i64, 512, a2[2]);
		v20 = sub_140931B80(v4, 3 - (a2[1] != 0), 1, 0i64, 512, a2[3] - a2[2]);
		v21 = *v4 == 0;
	LABEL_27:
		v22 = v20;
		if (v21)
		{
			v23 = sub_14092D590((__int64)v4, 16i64);
			if (v23)
			{
				v23[1] = *a3;
				*v23 = v22;
				*a3 = (__int64)v23;
			}
		}
		return 1i64;
	}
	if (v10 != 2)
		return 0i64;
	v11 = a2[2];
	v12 = a2[3];
	if (v11 + 1 != v12 || a2[4] + 1 != a2[5])
	{
		v18 = a2[4];
		if (v12 - v11 == a2[5] - v18 && ((v18 - v11 - 1) & (v18 - v11)) == 0)
		{
			if (a4)
				sub_1409309E0((__int64)a1);
			sub_140932A90(v4, 31, 1, 0i64, 1, 0i64, 512, a2[4] - a2[2]);
			sub_140932A90(v4, 27, 1, 0i64, 1, 0i64, 512, a2[4]);
			v19 = sub_140931B80(v4, 3 - (a2[1] != 0), 1, 0i64, 512, a2[5] - a2[4]);
			sub_14091B490(v4, a3, (__int64)v19);
			return 1i64;
		}
		return 0i64;
	}
	if (a4)
		sub_1409309E0((__int64)a1);
	v24 = a2[2];
	if (a2[1])
	{
		v13 = sub_140931B80(v4, 0, 1, 0i64, 512, v24);
		sub_14091B490(v4, a3, (__int64)v13);
		v14 = sub_140931B80(v4, 0, 1, 0i64, 512, a2[4]);
		sub_14091B490(v4, a3, (__int64)v14);
	}
	else
	{
		v15 = sub_140931B80(v4, 0, 1, 0i64, 512, v24);
		v16 = sub_140931B80(v4, 1, 1, 0i64, 512, a2[4]);
		sub_14091B490(v4, a3, (__int64)v16);
		v17 = sub_140932570((__int64)v4);
		if (v15)
		{
			if (v17)
			{
				v15[2] &= ~2ui64;
				v15[2] |= 1ui64;
				v15[3] = v17;
			}
		}
	}
	return 1i64;
}

