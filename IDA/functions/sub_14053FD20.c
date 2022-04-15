//----- (000000014053FD20) ----------------------------------------------------
void __fastcall sub_14053FD20(const void*** a1)
{
	const void*** v1; // rbx
	const void** i; // rcx
	_QWORD* v4; // rdx
	_QWORD* v5; // r8
	const void** v6; // rdx
	const void*** v7; // rbx
	const void** j; // r8
	_QWORD* v9; // rcx
	_QWORD* v10; // rdx
	const void** v11; // rcx
	const void*** v12; // rdi
	const void** k; // rbx
	_QWORD* v14; // rcx
	_QWORD* v15; // rdx
	const void** v16; // rcx
	const void** v17; // r9
	const void** v18; // [rsp+50h] [rbp+30h] BYREF
	const void** v19; // [rsp+58h] [rbp+38h] BYREF
	const void** v20; // [rsp+60h] [rbp+40h] BYREF

	v1 = a1 + 69;
	i = a1[69];
	*v1 = 0i64;
	v18 = i;
	if (i)
	{
		i[1] = &v18;
		for (i = v18; v18; i = v18)
		{
			v4 = i[1];
			if (v4)
				*v4 = i[2];
			v5 = i[2];
			v6 = i + 2;
			if (v5)
				v5[1] = i[1];
			*v6 = 0i64;
			i[1] = v1;
			*v6 = *v1;
			*v1 = i;
			if (*v6)
				*((_QWORD*)*v6 + 1) = v6;
			(*((void(__fastcall**)(const void**, _QWORD)) * i + 10))(i, 0i64);
		}
	}
	v7 = a1 + 67;
	j = a1[67];
	a1[67] = 0i64;
	v19 = j;
	if (j)
	{
		j[1] = &v19;
		for (j = v19; v19; j = v19)
		{
			v9 = j[1];
			if (v9)
				*v9 = j[2];
			v10 = j[2];
			v11 = j + 2;
			if (v10)
				v10[1] = j[1];
			*v11 = 0i64;
			j[1] = v7;
			*v11 = *v7;
			*v7 = j;
			if (*v11)
				*((_QWORD*)*v11 + 1) = v11;
			(*((void(__fastcall**)(const void**, _QWORD)) * j + 10))(j, 0i64);
		}
		i = v18;
	}
	v12 = a1 + 70;
	k = a1[70];
	a1[70] = 0i64;
	v20 = k;
	if (k)
	{
		k[1] = &v20;
		for (k = v20; v20; k = v20)
		{
			v14 = k[1];
			if (v14)
				*v14 = k[2];
			v15 = k[2];
			v16 = k + 2;
			if (v15)
				v15[1] = k[1];
			*v16 = 0i64;
			k[1] = v12;
			*v16 = *v12;
			*v12 = k;
			if (*v16)
				*((_QWORD*)*v16 + 1) = v16;
			if (*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * k + 2))(k) + 76))
				(*((void(__fastcall**)(const void**, _QWORD)) * k + 10))(k, 0i64);
		}
		j = v19;
		i = v18;
	}
	v17 = a1[71];
	if (v17)
	{
		do
		{
			(*(void(__fastcall**)(const void**, __int64, const void**)) * v17)(v17, 1i64, j);
			v17 = a1[71];
		} while (v17);
		i = v18;
		j = v19;
		k = v20;
	}
	if (k)
	{
		sub_1401A4A00(&v20);
		i = v18;
		j = v19;
	}
	if (j)
	{
		sub_1401A4A00(&v19);
		i = v18;
	}
	if (i)
		sub_1401A4A00(&v18);
}
// 14053FEE3: variable 'j' is possibly undefined

