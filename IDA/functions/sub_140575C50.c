//----- (0000000140575C50) ----------------------------------------------------
void __fastcall sub_140575C50(const void*** a1)
{
	const void** v1; // rax
	const void** i; // rcx
	_QWORD* v4; // rdx
	_QWORD* v5; // r8
	const void** v6; // rdx
	const void** j; // rcx
	const void** v8; // [rsp+30h] [rbp+8h] BYREF

	v1 = *a1;
	*a1 = 0i64;
	v8 = v1;
	if (v1)
	{
		v1[3] = &v8;
		for (i = v8; v8; i = v8)
		{
			v4 = i[3];
			if (v4)
				*v4 = i[4];
			v5 = i[4];
			v6 = i + 4;
			if (v5)
				v5[3] = i[3];
			*v6 = 0i64;
			i[3] = a1;
			*v6 = *a1;
			*a1 = i;
			if (*v6)
				*((_QWORD*)*v6 + 3) = v6;
			(*((void(__fastcall**)(const void**, __int64, __int64)) * i + 5))(i, 1i64, 1i64);
		}
	}
	for (j = a1[1]; j; j = a1[1])
		(*(void(__fastcall**)(const void**, __int64)) * j)(j, 1i64);
	sub_1407199A0();
	if (v8)
		sub_1401A4A00(&v8);
}

