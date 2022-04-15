//----- (000000014010DFB0) ----------------------------------------------------
__int64 __fastcall sub_14010DFB0(_QWORD** a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // r14
	__int64 i; // rbp
	__int64 v7; // rdi
	const wchar_t* v8; // rbx
	wchar_t* v9; // rax
	int v10; // ecx
	bool v11; // zf
	unsigned __int16* v12; // rax
	int* v13; // rdi
	char v14; // si
	__int64 v15; // rbx
	int* v16; // rax
	int* v17; // rdx
	__int64 j; // rbp
	__int64 v19; // rdi
	const wchar_t* v20; // rbx
	wchar_t* v21; // rax
	int v22; // ecx
	bool v23; // zf
	unsigned __int16* v24; // rax
	int* v25; // rdi
	__int64* v26; // rax
	char v27; // r9
	__int64 v28; // rbx
	char v29; // si
	int* v30; // rax
	int* v31; // rdx
	__int64 v33; // [rsp+58h] [rbp+10h] BYREF

	if (a2)
	{
		v3 = sub_1401A5AE0(a2, L"WindowTemplates");
		if (v3)
		{
			v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			v5 = v4;
			if (v4)
			{
				for (i = sub_1401A5AE0(v4, L"WindowSoundTemplate"); i; i = sub_1401A5BC0(i, L"WindowSoundTemplate"))
				{
					v7 = *(_QWORD*)(i + 96);
					if (v7)
					{
						while (1)
						{
							v8 = L"Name";
							v9 = (wchar_t*)sub_1401A4F40(v7 + 8);
							if (v9 == L"Name")
								break;
							v10 = 0;
							if (*v9)
							{
								do
								{
									if (!*v8 || *v9 != *v8)
										break;
									v11 = v10 == 0x7FFFFFFF;
									if (v10 == 0x7FFFFFFF)
										goto LABEL_13;
									++v9;
									++v8;
									++v10;
								} while (*v9);
								v11 = v10 == 0x7FFFFFFF;
							LABEL_13:
								if (v11)
									break;
							}
							if (!*v9 && !*v8)
								break;
							v7 = *(_QWORD*)(v7 + 56);
							if (!v7)
								goto LABEL_29;
						}
						v12 = (unsigned __int16*)sub_1401A4F40(v7 + 32);
						v13 = (int*)v12;
						if (v12)
						{
							v14 = 0;
							v15 = sub_14010DC00((__int64)a1, v12);
							v33 = v15;
							if (!v15)
							{
								v14 = 1;
								v16 = sub_14018B280(392i64, 0);
								if (v16)
								{
									v15 = (__int64)sub_14010B5A0(v16, (__int64)*a1, v13);
									v33 = v15;
								}
								else
								{
									v15 = 0i64;
									v33 = 0i64;
								}
							}
							sub_14010B6D0(v15, (__int64)*a1, i);
							if (v14)
							{
								v17 = (int*)a1[7];
								if (v17 == (int*)a1[8])
								{
									sub_1400B9430(a1 + 5, v17, &v33);
								}
								else
								{
									if (v17)
										*(_QWORD*)v17 = v15;
									++a1[7];
								}
							}
						}
					}
				LABEL_29:
					;
				}
				for (j = sub_1401A5AE0(v5, L"WindowTemplate"); j; j = sub_1401A5BC0(j, L"WindowTemplate"))
				{
					v19 = *(_QWORD*)(j + 96);
					if (v19)
					{
						while (1)
						{
							v20 = L"Name";
							v21 = (wchar_t*)sub_1401A4F40(v19 + 8);
							if (v21 == L"Name")
								break;
							v22 = 0;
							if (*v21)
							{
								do
								{
									if (!*v20 || *v21 != *v20)
										break;
									v23 = v22 == 0x7FFFFFFF;
									if (v22 == 0x7FFFFFFF)
										goto LABEL_39;
									++v21;
									++v20;
									++v22;
								} while (*v21);
								v23 = v22 == 0x7FFFFFFF;
							LABEL_39:
								if (v23)
									break;
							}
							if (!*v21 && !*v20)
								break;
							v19 = *(_QWORD*)(v19 + 56);
							if (!v19)
								goto LABEL_58;
						}
						v24 = (unsigned __int16*)sub_1401A4F40(v19 + 32);
						v25 = (int*)v24;
						if (v24)
						{
							v26 = sub_14010E2E0(a1[2], (__int64)a1[3], v24);
							if (v26 == a1[3])
								v28 = 0i64;
							else
								v28 = *v26;
							v29 = 0;
							v33 = v28;
							if (!v28)
							{
								v29 = 1;
								v30 = sub_14018B280(1016i64, 0);
								if (v30)
								{
									v28 = sub_14010BDA0((__int64)v30, v25);
									v33 = v28;
								}
								else
								{
									v28 = 0i64;
									v33 = 0i64;
								}
							}
							sub_14010C0F0(v28, *a1, j, v27);
							if (v29)
							{
								v31 = (int*)a1[3];
								if (v31 == (int*)a1[4])
								{
									sub_14010A1C0(a1 + 1, v31, &v33);
								}
								else
								{
									if (v31)
										*(_QWORD*)v31 = v28;
									++a1[3];
								}
							}
						}
					}
				LABEL_58:
					;
				}
			}
		}
	}
	return 0i64;
}
// 14010E0A2: conditional instruction was optimized away because rdi.8!=0
// 14010E1F2: conditional instruction was optimized away because rdi.8!=0
// 14010E270: variable 'v27' is possibly undefined
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A31820: using guessed type wchar_t aWindowsoundtem[20];
// 140A32790: using guessed type wchar_t aWindowtemplate_0[15];
// 140A327B0: using guessed type wchar_t aWindowtemplate[16];

