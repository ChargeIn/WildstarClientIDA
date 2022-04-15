//----- (000000014045D9C0) ----------------------------------------------------
__int64 __fastcall sub_14045D9C0(__int64 a1, _DWORD* a2, int a3)
{
	__int64 v3; // rsi
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // ecx
	_QWORD* v11; // r9
	unsigned __int64 v12; // r8
	unsigned __int64 v13; // rdx
	_DWORD* v14; // rax
	__int64 v15; // r12
	__int64 result; // rax
	__int64 v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rbx
	unsigned __int64 v22; // rbp
	_QWORD* v23; // r15
	__int64 v24; // rbx
	int v25; // eax
	__int64 v26; // r8
	__int64 v27; // rdx
	int v28; // eax
	__int64 v29; // rax
	int v30; // eax
	BOOL v31; // eax
	_BOOL8 v32; // rsi
	__int64** v33; // rbx
	__int64 v34; // rdi
	__int64* v35; // rcx
	__int64 v36; // rax
	void(__fastcall * **v37)(_QWORD, __int64, __int64); // rcx
	int v38; // [rsp+28h] [rbp-40h]
	__int64 v39; // [rsp+70h] [rbp+8h]

	v3 = a3;
	v38 = *(_DWORD*)(a1 + 8);
	sub_1400035B0();
	v7 = *(_QWORD*)(a1 + 1176);
	v8 = *(_QWORD*)(v7 + 8);
	v9 = v7;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < (int)v3)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v9 == v7 || (v39 = v9, (int)v3 < *(_DWORD*)(v9 + 32)))
		v39 = *(_QWORD*)(a1 + 1176);
	if (v39 != v7)
	{
		v10 = a2[3];
		v11 = *(_QWORD**)(v39 + 40);
		if (v10)
		{
			v12 = v11[1];
			v13 = 0i64;
			if (v12)
			{
				v14 = (_DWORD*)*v11;
				while (*v14 != v10)
				{
					++v13;
					++v14;
					if (v13 >= v12)
						goto LABEL_18;
				}
				sub_1401C2F20((__int64)v11, v13);
			}
		}
		else
		{
			v11[1] = v6;
		}
	}
LABEL_18:
	v15 = 2 * v3;
	result = *(_QWORD*)(a1 + 16 * v3 + 728) != 0i64;
	if (*(_QWORD*)(a1 + 16 * v3 + 728))
	{
		v17 = qword_140C65898;
		*(_DWORD*)(a1 + 6312) = 1;
		v18 = *(_QWORD*)(v17 + 120);
		if (v18 && *(_DWORD*)(a1 + 8) == *(_DWORD*)(v18 + 8))
			*(_DWORD*)(v17 + 28568) = 1;
		sub_14045E1D0(a1, v3);
		v19 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
		if (v19 && *(_DWORD*)(v19 + 128) == 7)
		{
			v20 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
			v21 = v20;
			if (!v20 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v20 + 32i64))(v20))
				v21 = 0i64;
			sub_14045E1D0(v21, v3);
		}
		v22 = 0i64;
		if (*(_QWORD*)(a1 + 16 * v3 + 728))
		{
			v23 = (_QWORD*)(a1 + 16 * (v3 + 45));
			while (1)
			{
				v24 = *(_QWORD*)(*v23 + 8 * v22);
				v25 = a2[2];
				v26 = *(unsigned int*)(v24 + 24);
				v27 = *(unsigned int*)(v24 + 28);
				if ((!v25 || (_DWORD)v26 == v25) && ((v28 = a2[3]) == 0 || v28 == (_DWORD)v27))
				{
					v29 = *(_QWORD*)(a1 + 5584);
					if (v29)
					{
						while ((_DWORD)v26 && *(_DWORD*)(*(_QWORD*)(v29 + 80) + 92i64) != (_DWORD)v26
							|| (_DWORD)v27 && *(_DWORD*)(v29 + 100) != (_DWORD)v27)
						{
							v29 = *(_QWORD*)(v29 + 48);
							if (!v29)
								goto LABEL_41;
						}
					}
					else
					{
					LABEL_41:
						v29 = *(_QWORD*)(a1 + 5592);
						if (!v29)
						{
						LABEL_47:
							v29 = 0i64;
						LABEL_48:
							if (a2[4] && v29 && (*(_BYTE*)(v29 + 340) & 4) != 0)
							{
								++v22;
							}
							else
							{
								v30 = *(_DWORD*)(a1 + 4208);
								v31 = (v30 & 0x18000) != 0 || (v30 & 0x20000) != 0;
								v32 = v31;
								v33 = (__int64**)(v24 + 48);
								v34 = 3i64;
								do
								{
									v35 = *v33;
									if (*v33)
									{
										v36 = *v35;
										if (v32)
											(*(void(__fastcall**)(__int64*, _QWORD, __int64))(v36 + 40))(v35, 0i64, 1i64);
										else
											(*(void(__fastcall**)(__int64*, __int64, __int64))(v36 + 32))(v35, v27, v26);
									}
									++v33;
									--v34;
								} while (v34);
								v37 = *(void(__fastcall****)(_QWORD, __int64, __int64))(*v23 + 8 * v22);
								if (v37)
									(**v37)(v37, 1i64, v26);
								*(_QWORD*)(*v23 + 8 * v22) = 0i64;
								sub_140007270((__int64)v23, v22);
							}
							goto LABEL_67;
						}
						while ((_DWORD)v26 && *(_DWORD*)(*(_QWORD*)(v29 + 80) + 92i64) != (_DWORD)v26
							|| (_DWORD)v27 && *(_DWORD*)(v29 + 100) != (_DWORD)v27)
						{
							v29 = *(_QWORD*)(v29 + 64);
							if (!v29)
								goto LABEL_47;
						}
					}
					if (*(_DWORD*)(*(_QWORD*)(v29 + 176) + 16i64) == 4)
						goto LABEL_48;
					++v22;
				}
				else
				{
					++v22;
				}
			LABEL_67:
				if (v22 >= *(_QWORD*)(a1 + 8 * v15 + 728))
				{
					LODWORD(v3) = a3;
					return sub_1400EA3E0(
						*(_QWORD*)(qword_140C65898 + 29504),
						"RemoveCCState",
						byte_1409E9BEC,
						(unsigned int)v3,
						*(_DWORD*)(a1 + 8),
						v38);
				}
			}
		}
		return sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"RemoveCCState",
			byte_1409E9BEC,
			(unsigned int)v3,
			*(_DWORD*)(a1 + 8),
			v38);
	}
	return result;
}
// 14045DC13: conditional instruction was optimized away because rax.8!=0
// 14045DA83: variable 'v6' is possibly undefined
// 14045DC6B: variable 'v27' is possibly undefined
// 14045DC6B: variable 'v26' is possibly undefined
// 1409E9BEC: using guessed type _BYTE byte_1409E9BEC[40];
// 140C65898: using guessed type __int64 qword_140C65898;

