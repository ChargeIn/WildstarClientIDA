//----- (00000001402B7500) ----------------------------------------------------
__int64 __fastcall sub_1402B7500(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	int v8; // eax
	bool v9; // zf
	__int64 v10; // rbx
	__int64* v11; // rcx
	__int64 v12; // rax
	int v13; // edi
	__int64 v14; // [rsp+50h] [rbp+8h] BYREF

	result = sub_1402B2FE0(a4, *(_DWORD*)(a1 + 48), *(_QWORD*)a1, *(_QWORD*)(a1 + 8), 1i64, 1i64);
	if ((int)result < 0)
		return result;
	if (!*(_QWORD*)(a4 + 48))
		return 2147500035i64;
	v8 = *(_DWORD*)(a4 + 68);
	if (v8 < 2)
		return 2147500035i64;
	if (v8 <= 3)
	{
		v9 = *(_QWORD*)(a4 + 40) == 0i64;
		goto LABEL_8;
	}
	if (v8 != 4)
		return 2147500035i64;
	v9 = *(_QWORD*)(a4 + 32) == 0i64;
LABEL_8:
	if (v9)
		return 2147500035i64;
	v10 = *(_QWORD*)(a4 + 72);
	if (!v10)
		return 2147500035i64;
	v11 = (__int64*)sub_1402B21E0();
	if (!v11)
		return 2147500034i64;
	if (!*a2 && !a2[1])
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a3 + 56i64))(
			a3,
			0i64,
			*(unsigned int*)(v10 + 24),
			*(unsigned int*)(v10 + 32),
			*(_QWORD*)(v10 + 40));
		if ((int)result < 0)
			return result;
		return 0i64;
	}
	v12 = *v11;
	v14 = 0i64;
	v13 = (*(__int64(__fastcall**)(__int64*, __int64*))(v12 + 80))(v11, &v14);
	if (v13 >= 0)
	{
		v13 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD*, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)v14 + 64i64))(
			v14,
			a3,
			a2,
			0i64,
			0i64,
			0i64,
			0);
		if (v13 >= 0)
		{
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v14 + 56i64))(
				v14,
				0i64,
				*(unsigned int*)(v10 + 24),
				*(unsigned int*)(v10 + 32),
				*(_QWORD*)(v10 + 40));
			if (v13 >= 0)
			{
				if (v14)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
				return 0i64;
			}
		}
	}
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
	return (unsigned int)v13;
}

