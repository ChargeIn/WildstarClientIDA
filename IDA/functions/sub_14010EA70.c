//----- (000000014010EA70) ----------------------------------------------------
char __fastcall sub_14010EA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
	__int64 v6; // rax
	__int64 v7; // r14
	__int64 v10; // rax
	__int64 v11; // r8
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // rbp
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rdi
	__int64 v17; // rsi
	__int64 v18; // rax
	__int64 v19; // rdi
	__int64* v20; // rsi
	__int64 v21; // rbp
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rcx
	unsigned __int64 v26; // rax
	_QWORD* v27; // rdx
	unsigned __int64 v28; // r8
	_QWORD* v29; // rcx
	unsigned __int64 v30; // r9
	_QWORD* v31; // rdx
	unsigned __int64 v32; // rax
	_QWORD* v33; // rcx
	unsigned __int64 v34; // rbp
	_QWORD* v35; // rax
	unsigned __int64 v36; // r8
	_QWORD* v37; // rcx
	unsigned __int64 v38; // rdx
	__int64 v39; // rax
	int v41; // [rsp+60h] [rbp+8h] BYREF

	v6 = *(_QWORD*)(a1 + 1048);
	v7 = a3;
	if (*(_QWORD*)(a1 + 1040) != v6 || a3)
	{
		v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
		v11 = *(_QWORD*)(a1 + 1048);
		v12 = *(_QWORD*)(a1 + 1056);
		v13 = v10;
		if (v7 + v10 + *(_QWORD*)(a1 + 1040) - v11 <= v12 || (v7 = v11 + v12 - *(_QWORD*)(a1 + 1040) - v10) != 0)
		{
			v14 = *(_QWORD*)(a1 + 1088);
			if (!v14
				|| (v15 = *(_QWORD*)(a1 + 1040),
					v41 = 1,
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD*)v14 + 136i64))(
						v14,
						v15,
						v11,
						a2,
						v7),
					v16 = *(_QWORD*)(a1 + 1088),
					v17 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080)),
					v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 64i64))(v16),
					sub_1400D4070(a1, 0x26u, (char*)a1, "SS>b", v18, v17, &v41),
					v41))
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 1080) + 136i64))(
					*(_QWORD*)(a1 + 1080),
					*(_QWORD*)(a1 + 1040),
					*(_QWORD*)(a1 + 1048),
					a2,
					v7);
				sub_14010EF50(a1, *(_QWORD*)(a1 + 1040), *(_QWORD*)(a1 + 1048));
				*(_QWORD*)(a1 + 1040) += v7;
				v24 = *(_QWORD*)(a1 + 1040);
				v25 = *(_QWORD*)(a1 + 1080);
				*(_QWORD*)(a1 + 1048) = v24;
				*(_QWORD*)(a1 + 1024) = v24;
				*(_QWORD*)(a1 + 1032) = -1i64;
				*(_BYTE*)(a1 + 1064) = 0;
				v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 72i64))(v25);
				if (v13 >= v26)
				{
					if (v13 > v26)
					{
						v33 = *(_QWORD**)(a1 + 1224);
						v34 = v13 - v26;
						v35 = (_QWORD*)*v33;
						v36 = *(_QWORD*)(a1 + 1040) - v7;
						if ((_QWORD*)*v33 != v33)
						{
							do
							{
								v37 = (_QWORD*)v35[2];
								v38 = v37[1];
								if (v38 > v36)
								{
									*v37 -= v34;
									v37[1] = v38 - v34;
								}
								v35 = (_QWORD*)*v35;
							} while (v35 != *(_QWORD**)(a1 + 1224));
						}
					}
				}
				else
				{
					v27 = *(_QWORD**)(a1 + 1224);
					v28 = v26 - v13;
					v29 = (_QWORD*)*v27;
					v30 = *(_QWORD*)(a1 + 1040) - v7;
					if ((_QWORD*)*v27 != v27)
					{
						do
						{
							v31 = (_QWORD*)v29[2];
							v32 = v31[1];
							if (v32 > v30)
							{
								*v31 += v28;
								v31[1] = v28 + v32;
							}
							v29 = (_QWORD*)*v29;
						} while (v29 != *(_QWORD**)(a1 + 1224));
					}
				}
				sub_14010EE40((_QWORD*)a1);
				v39 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
				LOBYTE(v6) = sub_1400D4070(a1, 0x27u, (char*)a1, L"S", v39);
			}
			else
			{
				v19 = *(_QWORD*)(a1 + 1080);
				v20 = *(__int64**)(a1 + 1088);
				v21 = *v20;
				v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 72i64))(v19);
				v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 64i64))(v19);
				LOBYTE(v6) = (*(__int64(__fastcall**)(__int64*, __int64, __int64))(v21 + 56))(v20, v23, v22);
			}
		}
		else
		{
			LOBYTE(v6) = sub_1400D4070(a1, 0x2Bu, (char*)a1, &unk_1409D04A2, a5, a6);
		}
	}
	return v6;
}
// 1409D5A04: using guessed type wchar_t aS_1[2];

