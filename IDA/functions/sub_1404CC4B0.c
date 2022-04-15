//----- (00000001404CC4B0) ----------------------------------------------------
__int64 __fastcall sub_1404CC4B0(__int64 a1)
{
	__int64 v2; // r14
	unsigned int v3; // edi
	__int64 v4; // rax
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rcx
	unsigned __int64 v8; // rdx
	void* v9; // rdx
	void* v10; // rax
	unsigned int v11; // eax
	unsigned int v12; // r14d
	unsigned int v13; // ebp
	__int64 v14; // rax
	int* v15; // rbx
	int* v16; // rax
	int* v17; // rdi
	__int64 v18; // r9
	unsigned int v19; // r8d
	__int64 v20; // rdx
	__int64 v21; // rbx
	bool v22; // al
	__int64 v23; // rcx
	__int64 i; // rax
	__int64 v25; // rax
	int* v26; // rcx
	__int64 v27; // rax
	__int64 v28; // rax
	__int64 v30; // [rsp+20h] [rbp-28h]

	v2 = a1 + 40;
	v3 = 0;
	do
	{
		if (qword_140C63848)
		{
			v4 = qword_140C63848(off_140A69608, v3, qword_140C63858);
		}
		else
		{
			if (dword_140C64470)
			{
				v5 = 0i64;
				goto LABEL_10;
			}
			if ((int)sub_1401EEFC0() < 0)
			{
				v5 = 0i64;
				goto LABEL_10;
			}
			v4 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C645B8 + 32i64))(qword_140C645B8, v3);
		}
		v5 = v4;
	LABEL_10:
		v6 = sub_14018B280(56i64, 0);
		v7 = v6;
		if (v6)
		{
			*((_QWORD*)v6 + 1) = 28i64;
			v6[4] = 0;
			*(_QWORD*)(v6 + 5) = 1065353216i64;
			*(_QWORD*)v6 = off_140B68F20;
			*((_QWORD*)v6 + 4) = 0i64;
			v6[10] = 0;
			*(_QWORD*)(v6 + 11) = 0i64;
			v6[13] = 0;
		}
		else
		{
			v7 = 0i64;
		}
		v7[2] = v3;
		v7[4] = *(_DWORD*)(v5 + 4);
		v7[3] = *(_DWORD*)(v5 + 8);
		v7[6] = *(_DWORD*)(v5 + 36);
		v8 = *(_QWORD*)(v5 + 16);
		if (v8)
		{
			if (v8 <= qword_140C3FE70)
				v9 = (void*)(qword_140C3FE68 + v8);
			else
				v9 = 0i64;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = &unk_1409F0A4C;
		if (v9)
			v10 = v9;
		++v3;
		v2 += 8i64;
		*((_QWORD*)v7 + 4) = v10;
		v7[10] = *(_DWORD*)(v5 + 12);
		v7[11] = *(_DWORD*)(v5 + 24);
		v7[12] = *(_DWORD*)(v5 + 28);
		v7[13] = *(_DWORD*)(v5 + 32);
		*(_QWORD*)(v2 - 8) = v7;
	} while (v3 < 0x1C);
	if (qword_140C63838)
	{
		v11 = qword_140C63838(off_140A69598, qword_140C63858);
		goto LABEL_28;
	}
	if (dword_140C643DC)
	{
		v12 = 0;
	}
	else if ((int)sub_1401EE740() >= 0)
	{
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64090 + 40i64))(qword_140C64090);
	LABEL_28:
		v12 = v11;
	}
	else
	{
		v12 = 0;
	}
	v13 = 0;
	if (v12)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v14 = qword_140C63848(off_140A69598, v13, qword_140C63858);
				goto LABEL_37;
			}
			if (dword_140C643DC)
			{
				v15 = 0i64;
			}
			else if ((int)sub_1401EE740() >= 0)
			{
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64090 + 32i64))(qword_140C64090, v13);
			LABEL_37:
				v15 = (int*)v14;
			}
			else
			{
				v15 = 0i64;
			}
			if ((unsigned int)v15[1] < 0x1C)
			{
				v16 = sub_14018B280(48i64, 0);
				v17 = v16;
				if (v16)
				{
					sub_1407E4830(v16, 0i64, 0x30ui64);
					v17[1] = 28;
				}
				else
				{
					v17 = 0i64;
				}
				*v17 = *v15;
				v17[1] = v15[1];
				v17[2] = v15[2];
				v17[7] = v15[7];
				v17[3] = v15[3];
				v17[8] = v15[8];
				v17[4] = v15[4];
				v17[9] = v15[9];
				v17[5] = v15[5];
				v17[10] = v15[10];
				v17[6] = v15[6];
				v17[11] = v15[11];
				v18 = *(_QWORD*)(a1 + 16);
				v19 = *v15;
				v20 = *(_QWORD*)(v18 + 8);
				LODWORD(v30) = *v15;
				v21 = v18;
				v22 = 1;
				while (v20)
				{
					v21 = v20;
					v22 = v19 < *(_DWORD*)(v20 + 32);
					if (v19 >= *(_DWORD*)(v20 + 32))
						v20 = *(_QWORD*)(v20 + 24);
					else
						v20 = *(_QWORD*)(v20 + 16);
				}
				v23 = v21;
				if (v22)
				{
					if (v21 != *(_QWORD*)(v18 + 16))
					{
						if (*(_BYTE*)v21 || *(_QWORD*)(*(_QWORD*)(v21 + 8) + 8i64) != v21)
						{
							v23 = *(_QWORD*)(v21 + 16);
							if (v23)
							{
								for (i = *(_QWORD*)(v23 + 24); i; i = *(_QWORD*)(i + 24))
									v23 = i;
							}
							else
							{
								v23 = *(_QWORD*)(v21 + 8);
								if (v21 == *(_QWORD*)(v23 + 16))
								{
									do
									{
										v25 = v23;
										v23 = *(_QWORD*)(v23 + 8);
									} while (v25 == *(_QWORD*)(v23 + 16));
								}
							}
						}
						else
						{
							v23 = *(_QWORD*)(v21 + 24);
						}
						goto LABEL_58;
					}
				LABEL_59:
					if (v21 == v18 || v19 < *(_DWORD*)(v21 + 32))
					{
						v26 = sub_14018B280(48i64, 0);
						if (v26 != (int*)-32i64)
						{
							*((_QWORD*)v26 + 4) = v30;
							*((_QWORD*)v26 + 5) = v17;
						}
						*(_QWORD*)(v21 + 16) = v26;
						v28 = *(_QWORD*)(a1 + 16);
						if (v21 == v28)
						{
							*(_QWORD*)(v28 + 8) = v26;
							*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64) = v26;
						}
						else if (v21 == *(_QWORD*)(v28 + 16))
						{
							*(_QWORD*)(v28 + 16) = v26;
						}
					}
					else
					{
						v26 = sub_14018B280(48i64, 0);
						if (v26 != (int*)-32i64)
						{
							*((_QWORD*)v26 + 4) = v30;
							*((_QWORD*)v26 + 5) = v17;
						}
						*(_QWORD*)(v21 + 24) = v26;
						v27 = *(_QWORD*)(a1 + 16);
						if (v21 == *(_QWORD*)(v27 + 24))
							*(_QWORD*)(v27 + 24) = v26;
					}
					*((_QWORD*)v26 + 1) = v21;
					*((_QWORD*)v26 + 2) = 0i64;
					*((_QWORD*)v26 + 3) = 0i64;
					sub_1400081C0((__int64)v26, (_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64));
					++* (_QWORD*)(a1 + 24);
				}
				else
				{
				LABEL_58:
					if (*(_DWORD*)(v23 + 32) < v19)
						goto LABEL_59;
				}
			}
			if (++v13 >= v12)
				break;
			continue;
		}
	}
	if (qword_140C63850)
	{
		qword_140C63850(off_140A69608, qword_140C63858);
		goto LABEL_78;
	}
	if (dword_140C64470)
		goto LABEL_86;
	dword_140C64470 = 1;
	if (!qword_140C645B8)
		goto LABEL_86;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C645B8 + 8i64))(qword_140C645B8);
	qword_140C645B8 = 0i64;
LABEL_78:
	if (qword_140C63850)
	{
		qword_140C63850(off_140A69598, qword_140C63858);
	}
	else
	{
	LABEL_86:
		if (!dword_140C643DC)
		{
			dword_140C643DC = 1;
			if (qword_140C64090)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C64090 + 8i64))(qword_140C64090);
				qword_140C64090 = 0i64;
			}
		}
	}
	return 0i64;
}
// 1404CC7BF: conditional instruction was optimized away because rdx.8==0
// 1404CC7E0: variable 'v30' is possibly undefined
// 140A69598: using guessed type wchar_t *off_140A69598[2];
// 140A69608: using guessed type wchar_t *off_140A69608[2];
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63850: using guessed type __int64 (__fastcall *qword_140C63850)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64090: using guessed type __int64 qword_140C64090;
// 140C643DC: using guessed type int dword_140C643DC;
// 140C64470: using guessed type int dword_140C64470;
// 140C645B8: using guessed type __int64 qword_140C645B8;

