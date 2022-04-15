//----- (00000001402B76C0) ----------------------------------------------------
__int64 __fastcall sub_1402B76C0(unsigned int* a1, __int64 a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v6; // r11
	__int64 v7; // rax
	unsigned int v8; // esi
	LPVOID v9; // rax
	LPVOID v10; // r15
	__int64 v11; // r8
	__int64 v12; // rdx
	int v13; // r14d
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // [rsp+40h] [rbp-21h] BYREF
	__int64 v17; // [rsp+48h] [rbp-19h] BYREF
	__int128 v18; // [rsp+50h] [rbp-11h] BYREF
	__int128 v19; // [rsp+60h] [rbp-1h] BYREF
	__int64 v20; // [rsp+70h] [rbp+Fh] BYREF
	int v21; // [rsp+78h] [rbp+17h]
	unsigned int v22; // [rsp+7Ch] [rbp+1Bh]

	if (!a3)
		return 2147942487i64;
	if (!*((_QWORD*)a1 + 5))
		return 2147500035i64;
	if (!sub_1402B1FE0(a1[4], &v18))
		return 2147942450i64;
	result = (*(__int64(__fastcall**)(__int64*, __int64))(*a3 + 24))(a3, v6);
	if ((int)result >= 0)
	{
		if (*(_QWORD*)a1 > 0xFFFFFFFFui64 || *((_QWORD*)a1 + 1) > 0xFFFFFFFFui64)
			return 2147942487i64;
		result = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(*a3 + 32))(a3, *a1, a1[2]);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(__int64*))(*a3 + 40))(a3);
			if ((int)result >= 0)
			{
				v7 = *a3;
				v19 = v18;
				result = (*(__int64(__fastcall**)(__int64*, __int128*))(v7 + 48))(a3, &v19);
				if ((int)result >= 0)
				{
					v8 = 0;
					if (v19 == v18)
					{
						result = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD))(*a3 + 80))(
							a3,
							a1[2],
							a1[6],
							a1[8],
							*((_QWORD*)a1 + 5));
						if ((int)result < 0)
							return result;
						goto LABEL_26;
					}
					v9 = sub_1402B21E0();
					v10 = v9;
					if (!v9)
						return 2147500034i64;
					v11 = a1[2];
					v12 = *a1;
					v17 = 0i64;
					v13 = (*(__int64(__fastcall**)(LPVOID, __int64, __int64, __int128*, unsigned int, unsigned int, _QWORD, __int64*))(*(_QWORD*)v9 + 160i64))(
						v9,
						v12,
						v11,
						&v18,
						a1[6],
						a1[8],
						*((_QWORD*)a1 + 5),
						&v17);
					if (v13 >= 0)
					{
						v16 = 0i64;
						v13 = (*(__int64(__fastcall**)(LPVOID, __int64*))(*(_QWORD*)v10 + 80i64))(v10, &v16);
						if (v13 >= 0)
						{
							v13 = (*(__int64(__fastcall**)(__int64, __int64, __int128*, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)v16 + 64i64))(
								v16,
								v17,
								&v19,
								0i64,
								0i64,
								0i64,
								0);
							if (v13 >= 0)
							{
								v21 = *a1;
								v22 = a1[2];
								v14 = *a3;
								v20 = 0i64;
								v13 = (*(__int64(__fastcall**)(__int64*, __int64, __int64*))(v14 + 88))(a3, v16, &v20);
								if (v13 >= 0)
								{
									if (v16)
									{
										(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
										v16 = 0i64;
									}
									if (v17)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
								LABEL_26:
									v15 = (*(__int64(__fastcall**)(__int64*))(*a3 + 96))(a3);
									if (v15 < 0)
										return (unsigned int)v15;
									return v8;
								}
							}
						}
						if (v16)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
							v16 = 0i64;
						}
					}
					if (v17)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
					return (unsigned int)v13;
				}
			}
		}
	}
	return result;
}
// 1402B772A: variable 'v6' is possibly undefined

