//----- (00000001401E02B0) ----------------------------------------------------
__int64 __fastcall sub_1401E02B0(__int64 a1, int a2, int a3)
{
	__int64 v3; // r15
	__int64 v4; // rsi
	__int64 v7; // rdi
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rcx

	v3 = a2;
	v4 = a3;
	if ((unsigned __int64)a2 >= 0x48 || (unsigned __int64)a3 >= 0x48)
		return 2147500037i64;
	if (a2 == a3)
		return 0i64;
	v7 = *(_QWORD*)(a1 + 8i64 * a2 + 328);
	if (v7)
		(**(void(__fastcall***)(_QWORD))v7)(*(_QWORD*)(a1 + 8i64 * a2 + 328));
	v8 = *(_QWORD*)(a1 + 8 * v4 + 328);
	if (v8)
		(**(void(__fastcall***)(_QWORD))v8)(*(_QWORD*)(a1 + 8 * v4 + 328));
	if (!v7)
	{
		if (!v8)
			return 0i64;
		goto LABEL_16;
	}
	if (!v8 || *(_QWORD*)(v7 + 24) != *(_QWORD*)(v8 + 24) || *(_DWORD*)(v7 + 32) != *(_DWORD*)(v8 + 32))
	{
		*(_DWORD*)(v7 + 40) = v4;
		if (!v8)
		{
		LABEL_17:
			if (*(_QWORD*)(a1 + 8 * v3 + 328) != v8)
			{
				if (v8)
					(**(void(__fastcall***)(__int64))v8)(v8);
				v9 = *(_QWORD*)(a1 + 8 * v3 + 328);
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				*(_QWORD*)(a1 + 8 * v3 + 328) = v8;
			}
			if (*(_QWORD*)(a1 + 8 * v4 + 328) != v7)
			{
				if (v7)
					(**(void(__fastcall***)(__int64))v7)(v7);
				v10 = *(_QWORD*)(a1 + 8 * v4 + 328);
				if (v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
				*(_QWORD*)(a1 + 8 * v4 + 328) = v7;
			}
			*(_DWORD*)(a1 + 3168) &= 0xFFFFFF9D;
			goto LABEL_30;
		}
	LABEL_16:
		*(_DWORD*)(v8 + 40) = v3;
		goto LABEL_17;
	}
LABEL_30:
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	return 0i64;
}

