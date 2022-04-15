//----- (000000014038FB20) ----------------------------------------------------
_QWORD* __fastcall sub_14038FB20(_QWORD* a1, __int64 a2, __int64 a3)
{
	_QWORD* v4; // rdx
	_QWORD* v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rdx
	_QWORD* v9; // rcx
	__int64 v10; // rax

	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	a1[5] = 0i64;
	*a1 = a2;
	v4 = (_QWORD*)(a2 + 120);
	a1[1] = a3;
	if (!a1[2])
	{
		a1[2] = v4;
		v5 = a1 + 3;
		*v5 = *v4;
		*v4 = a1;
		if (*v5)
			*(_QWORD*)(*v5 + 16i64) = v5;
	}
	v6 = (_QWORD*)(a1[1] + 1120i64);
	if (!a1[4])
	{
		a1[4] = v6;
		a1[5] = *v6;
		*v6 = a1;
		v7 = a1[5];
		if (v7)
			*(_QWORD*)(v7 + 32) = a1 + 5;
	}
	v8 = a1[1];
	if (v8 == *(_QWORD*)(v8 + 32))
	{
		if (*(_DWORD*)(v8 + 76))
		{
			if (!*(_QWORD*)(v8 + 1184))
			{
				v9 = (_QWORD*)(*(_QWORD*)(v8 + 16) + 5040i64);
				*(_QWORD*)(v8 + 1184) = v9;
				*(_QWORD*)(v8 + 1192) = *v9;
				*v9 = v8;
				v10 = *(_QWORD*)(v8 + 1192);
				if (v10)
					*(_QWORD*)(v10 + 1184) = v8 + 1192;
			}
		}
	}
	return a1;
}

