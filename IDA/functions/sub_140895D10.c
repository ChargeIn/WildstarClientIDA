//----- (0000000140895D10) ----------------------------------------------------
__int64 __fastcall sub_140895D10(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	__int64 a4,
	unsigned int a5,
	__int64 a6,
	_BYTE* a7)
{
	__int64 v8; // r11
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // r10
	unsigned int* v13; // rdx
	__int64 v14; // r12
	__int64 i; // rsi
	unsigned __int64 v16; // rcx
	unsigned int* v17; // r9
	unsigned int* v18; // r8
	unsigned __int64 v19; // r10
	__int64 v20; // kr00_8
	_DWORD* v21; // rdi
	unsigned __int64 v22; // r8
	unsigned int* v23; // rcx
	unsigned __int64 v24; // r10
	__int64 v25; // kr08_8
	__int64 v26; // rbx
	unsigned int v27; // r11d
	unsigned int* v28; // rcx
	unsigned __int64 v29; // r10
	__int64 v30; // kr10_8
	__int64 v32; // [rsp+20h] [rbp-48h]

	v8 = a1;
	v9 = *(_QWORD*)(a1 + 224);
	v10 = a4;
	v11 = *(_QWORD*)(v8 + 232) - v9;
	v32 = v9;
	v13 = (unsigned int*)(unsigned int)((int)v11 / 104 - 1);
	v14 = (int)v13;
	if ((int)v11 / 104 - 1 >= 0)
	{
		for (i = v9 + 104i64 * (int)v13; ; i -= 104i64)
		{
			v16 = *(_QWORD*)(i + 8);
			v17 = *(unsigned int**)i;
			if ((unsigned int)((__int64)(v16 - *(_QWORD*)i) >> 2)
				&& (unsigned int)((__int64)(*(_QWORD*)(i + 32) - *(_QWORD*)(i + 24)) >> 2))
			{
				if (*v17 == -1)
					goto LABEL_17;
				v18 = *(unsigned int**)(i + 8);
				if (v17)
				{
					v19 = *(_QWORD*)(i + 8);
					if ((unsigned __int64)v17 <= v16)
					{
						do
						{
							v20 = (__int64)(v19 - (_QWORD)v17) >> 2;
							v13 = &v17[v20 / 2];
							if (a3 >= *v13)
							{
								if (a3 <= *v13)
								{
									v18 = &v17[v20 / 2];
									break;
								}
								v17 = v13 + 1;
							}
							else
							{
								v19 = (unsigned __int64)(v13 - 1);
							}
						} while ((unsigned __int64)v17 <= v19);
					}
				}
				if (v18 != (unsigned int*)v16 || sub_1408958A0(v8, a2, (unsigned int**)i, v10))
				{
				LABEL_17:
					v21 = *(_DWORD**)(i + 24);
					if (*v21 == -1)
						goto LABEL_46;
					v22 = *(_QWORD*)(i + 32);
					v23 = (unsigned int*)v22;
					if (v21)
					{
						v17 = *(unsigned int**)(i + 24);
						v24 = *(_QWORD*)(i + 32);
						if ((unsigned __int64)v21 <= v22)
						{
							do
							{
								v25 = (__int64)(v24 - (_QWORD)v17) >> 2;
								v13 = &v17[v25 / 2];
								if (a5 >= *v13)
								{
									if (a5 <= *v13)
									{
										v23 = &v17[v25 / 2];
										break;
									}
									v17 = v13 + 1;
								}
								else
								{
									v24 = (unsigned __int64)(v13 - 1);
								}
							} while ((unsigned __int64)v17 <= v24);
						}
					}
					if (v23 != (unsigned int*)v22)
					{
					LABEL_46:
						*a7 = 0;
						return i;
					}
					v26 = a6;
					if (a6)
					{
						while (v26 != a2)
						{
							v27 = *(_DWORD*)(v26 + 24);
							v28 = *(unsigned int**)(i + 32);
							if (v21)
							{
								v17 = *(unsigned int**)(i + 24);
								v29 = *(_QWORD*)(i + 32);
								if ((unsigned __int64)v21 <= v22)
								{
									do
									{
										v30 = (__int64)(v29 - (_QWORD)v17) >> 2;
										v13 = &v17[v30 / 2];
										if (v27 >= *v13)
										{
											if (v27 <= *v13)
											{
												v28 = &v17[v30 / 2];
												break;
											}
											v17 = v13 + 1;
										}
										else
										{
											v29 = (unsigned __int64)(v13 - 1);
										}
									} while ((unsigned __int64)v17 <= v29);
								}
							}
							if (v28 != (unsigned int*)v22)
							{
								if ((*(unsigned int(__fastcall**)(__int64, unsigned int*, unsigned __int64, unsigned int*))(*(_QWORD*)v26 + 112i64))(
									v26,
									v13,
									v22,
									v17) != 8)
									goto LABEL_46;
								*a7 = 1;
								return i;
							}
							v26 = *(_QWORD*)(v26 + 64);
							if (!v26)
								break;
						}
					}
					v10 = a4;
				}
			}
			if (--v14 < 0)
				return v32;
			v8 = a1;
		}
	}
	return v9;
}
// 140895F34: variable 'v13' is possibly undefined
// 140895F34: variable 'v17' is possibly undefined

