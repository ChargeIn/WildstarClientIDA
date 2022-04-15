//----- (00000001403B4A20) ----------------------------------------------------
__int64 __fastcall sub_1403B4A20(__int64 a1, _DWORD* a2)
{
	_DWORD* v5; // rsi
	int v6; // eax
	unsigned int v7; // ebx
	unsigned int i; // ecx
	_DWORD* v9; // rsi
	int v10; // eax
	unsigned int j; // ecx
	_DWORD* v12; // rsi
	int v13; // eax
	unsigned int k; // ecx
	_DWORD* v15; // rsi
	int v16; // eax
	unsigned int m; // ecx
	_DWORD* v18; // rsi
	int v19; // eax
	unsigned int n; // ecx
	_DWORD* v21; // rsi
	int v22; // eax
	unsigned int ii; // ecx
	_DWORD* v24; // rsi
	int v25; // eax
	unsigned int jj; // ecx
	_DWORD* v27; // rsi
	int v28; // eax
	unsigned int kk; // ecx
	_DWORD* v30; // rsi
	int v31; // eax
	unsigned int v32; // ecx
	_DWORD* v33; // rsi
	int v34; // eax
	unsigned int v35; // ecx
	int v36; // ebx
	_DWORD* mm; // rbp
	__int64 v38; // rax
	int v39; // eax
	unsigned int v40; // ebx
	_DWORD* v41; // rbp
	__int64 v42; // rax
	int v43; // eax

	if (!a2)
		return 89i64;
	switch (a2[2])
	{
	case 1:
		v5 = a2 + 3;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
		v7 = 0;
		for (i = 0; i < 7; ++i)
		{
			if (*v5 && v6 == *v5)
				return v7;
			++v5;
		}
		return 89i64;
	case 2:
		v9 = a2 + 3;
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
		for (j = 0; j < 7; ++j)
		{
			if (*v9 && v10 == *v9)
				return 89;
			++v9;
		}
		return 0i64;
	case 3:
		v12 = a2 + 3;
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
		v7 = 0;
		for (k = 0; k < 7; ++k)
		{
			if (*v12 && v13 == *v12)
				return v7;
			++v12;
		}
		return 89i64;
	case 4:
		v15 = a2 + 3;
		v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
		for (m = 0; m < 7; ++m)
		{
			if (*v15 && v16 == *v15)
				return 89;
			++v15;
		}
		return 0i64;
	case 5:
		v18 = a2 + 3;
		v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1);
		v7 = 0;
		for (n = 0; n < 7; ++n)
		{
			if (*v18 && v19 == *v18)
				return v7;
			++v18;
		}
		return 89i64;
	case 6:
		v21 = a2 + 3;
		v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1);
		for (ii = 0; ii < 7; ++ii)
		{
			if (*v21 && v22 == *v21)
				return 89;
			++v21;
		}
		return 0i64;
	case 7:
		v24 = a2 + 3;
		v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
		v7 = 0;
		for (jj = 0; jj < 7; ++jj)
		{
			if (*v24 && v25 == *v24)
				return v7;
			++v24;
		}
		return 89i64;
	case 8:
		v27 = a2 + 3;
		v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
		for (kk = 0; kk < 7; ++kk)
		{
			if (*v27 && v28 == *v27)
				return 89;
			++v27;
		}
		return 0i64;
	case 9:
		return (*(__int64(__fastcall**)(__int64, _DWORD*, __int64))(*(_QWORD*)a1 + 24i64))(a1, a2 + 3, 7i64);
	case 0xA:
		v36 = 0;
		for (mm = a2 + 3; ; ++mm)
		{
			if (*mm)
			{
				if (*a2 != *mm)
				{
					v38 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
					v39 = sub_1403B4A20(a1, v38);
					if (v39)
					{
						if (v39 != 317)
							break;
					}
				}
			}
			if ((unsigned int)++v36 >= 7)
				return 0i64;
		}
		return 89i64;
	case 0xB:
		v40 = 0;
		v41 = a2 + 3;
		do
		{
			if (*v41)
			{
				if (*a2 != *v41)
				{
					v42 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
					v43 = sub_1403B4A20(a1, v42);
					if (!v43 || v43 == 317)
						return 0i64;
				}
			}
			++v40;
			++v41;
		} while (v40 < 7);
		return 89i64;
	case 0xC:
		v30 = a2 + 3;
		v31 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
		v7 = 0;
		v32 = 0;
		while (!*v30 || v31 != *v30)
		{
			++v32;
			++v30;
			if (v32 >= 7)
				return 89;
		}
		return v7;
	case 0xD:
		v33 = a2 + 3;
		v34 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
		v35 = 0;
		break;
	default:
		return 89i64;
	}
	while (!*v33 || v34 != *v33)
	{
		++v35;
		++v33;
		if (v35 >= 7)
			return 0i64;
	}
	return 89;
}

