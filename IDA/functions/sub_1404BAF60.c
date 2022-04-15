//----- (00000001404BAF60) ----------------------------------------------------
__int64 __fastcall sub_1404BAF60(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v3; // r13
	__int64* v5; // rax
	int v6; // edx
	__int64 v7; // rcx
	__int64 v8; // rsi
	_DWORD* v9; // rbp
	__int64 v10; // rdi
	__int64 v11; // rcx
	unsigned int v12; // ebx
	__int64 v13; // rax
	__int64 v14; // r14
	unsigned __int64 v15; // rbp
	_QWORD* v16; // rbx
	__int64 v17; // rdx
	__int64 i; // rdi
	__int64 v19; // rcx
	__int64 v20; // rbp
	__int64 v21; // rax
	int v22; // ebx
	int v23; // ecx
	__int64 v24; // rdx

	v2 = *((_QWORD*)a2 + 1);
	v3 = qword_140C659F0;
	if (v2)
	{
		v5 = (__int64*)xmmword_140C7DFC0;
		if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
		{
			v6 = *a2;
			while (1)
			{
				v7 = *v5;
				if (*(_DWORD*)(*v5 + 8) == v6 && *(_QWORD*)(v7 + 16) == v2)
					break;
				if (++v5 == *((__int64**)&xmmword_140C7DFC0 + 1))
					goto LABEL_44;
			}
			v8 = *v5;
			if (v7)
			{
				if (*(_DWORD*)(v7 + 272))
				{
					for (i = 0i64; (unsigned int)i < a2[4]; i = (unsigned int)(i + 1))
					{
						v19 = *(_QWORD*)(v8 + 232);
						v20 = 80 * i;
						if (v19 && (unsigned int)i < *(_DWORD*)(v8 + 272))
							v21 = v19 + 192 * i;
						else
							v21 = 0i64;
						v22 = *(_DWORD*)(v21 + 12);
						sub_1405AD890(
							v8,
							i,
							*(_DWORD*)(80 * i + *((_QWORD*)a2 + 3) + 12),
							*(_DWORD*)(80 * i + *((_QWORD*)a2 + 3) + 4),
							80 * i + *((_QWORD*)a2 + 3));
						v23 = *(_DWORD*)(*((_QWORD*)a2 + 3) + v20 + 4);
						if (v22 != v23 && v23)
						{
							if (!(_DWORD)i)
								sub_1405AC330(v8);
							if ((unsigned int)i < *(_DWORD*)(v8 + 272))
							{
								v24 = *(_QWORD*)(v8 + 232);
								if (v24)
									sub_1405A9A00(
										v24 + 192 * i,
										*(_DWORD*)(*((_QWORD*)a2 + 3) + v20 + 68),
										*(_DWORD*)(*((_QWORD*)a2 + 3) + v20 + 64) == 4);
							}
						}
					}
				}
				else
				{
					v9 = a2 + 4;
					sub_1405ADA30(v7, (__int64)(a2 + 4));
					v10 = 0i64;
					if (a2[4])
					{
						while (1)
						{
							v11 = (unsigned int)v10;
							v12 = *(_DWORD*)(*((_QWORD*)a2 + 3) + 80 * v10 + 12);
							if (qword_140C63840)
								break;
							if (dword_140C65340)
								goto LABEL_26;
							if ((int)sub_140205D40() >= 0)
							{
								v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 24i64))(
									qword_140C63C30,
									v12);
							LABEL_16:
								if (v13)
								{
									v14 = v13 + 4;
									v15 = (*(__int64(__fastcall**)(__int64))(v3 + 328))(v13 + 4);
									v16 = *(_QWORD**)(*(_QWORD*)(v3 + 320) + 8 * (v15 % *(_QWORD*)(v3 + 312)));
									if (v16)
									{
										while (v15 != *v16 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v3 + 336))(v14, v16 + 2))
										{
											v16 = (_QWORD*)v16[1];
											if (!v16)
												goto LABEL_24;
										}
										if (v16 != (_QWORD*)-24i64)
											sub_1405AD480(v8, v16[3]);
									}
								LABEL_24:
									v9 = a2 + 4;
								}
							}
							v11 = (unsigned int)v10;
						LABEL_26:
							if ((unsigned int)v10 < *(_DWORD*)(v8 + 272))
							{
								v17 = *(_QWORD*)(v8 + 232);
								if (v17)
									sub_1405A9A00(
										v17 + 192 * v11,
										*(_DWORD*)(*((_QWORD*)a2 + 3) + 80 * v10 + 68),
										*(_DWORD*)(*((_QWORD*)a2 + 3) + 80 * v10 + 64) == 4);
							}
							v10 = (unsigned int)(v10 + 1);
							if ((unsigned int)v10 >= *v9)
								goto LABEL_44;
						}
						v13 = qword_140C63840(off_140A6A8D8, v12, qword_140C63858);
						goto LABEL_16;
					}
				}
			}
		}
	}
LABEL_44:
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingPlotsRecieved", &unk_1409D0F73);
	return 0i64;
}
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C65340: using guessed type int dword_140C65340;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

