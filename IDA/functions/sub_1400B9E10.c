//----- (00000001400B9E10) ----------------------------------------------------
void __fastcall sub_1400B9E10(__int64** a1, __int64* a2, __int64* a3, __int64 a4)
{
	__int64* v8; // rcx
	__int64* v9; // rcx
	__int64 v10; // rax
	__int64* v11; // rdx
	__int64* v12; // rcx
	__int64* v13; // rcx
	__int64* v14; // rcx

	if (*a1 && ((_BYTE)a1[4] & 2) != 0)
	{
		v8 = a1[3];
		if (v8)
		{
			(*(void(__fastcall**)(__int64*))(*v8 + 8))(v8);
			a1[3] = 0i64;
		}
		v9 = *a1;
		v10 = **a1;
		if (a4)
		{
			(*(void(__fastcall**)(__int64*, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v10 + 24))(
				v9,
				a4,
				0i64,
				0i64,
				0i64,
				0i64,
				0i64);
		}
		else
		{
			v11 = a1[2];
			if (v11)
				(*(void(__fastcall**)(__int64*, __int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v10 + 24))(
					v9,
					v11,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
			else
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*, __int64, int))(v10 + 56))(v9, 0i64, a1[1], 500i64, 4);
		}
	}
	*((_DWORD*)a1 + 8) &= 0xFFFFFFF9;
	v12 = a1[1];
	if (v12)
	{
		(*(void(__fastcall**)(__int64*))(*v12 + 8))(v12);
		a1[1] = 0i64;
	}
	v13 = a1[2];
	if (v13)
	{
		(*(void(__fastcall**)(__int64*))(*v13 + 8))(v13);
		a1[2] = 0i64;
	}
	a1[1] = a2;
	a1[2] = a3;
	if (a2)
		(*(void(__fastcall**)(__int64*)) * a2)(a2);
	v14 = a1[2];
	if (v14)
		(*(void(__fastcall**)(__int64*)) * v14)(v14);
}

