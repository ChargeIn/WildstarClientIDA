//----- (0000000140561780) ----------------------------------------------------
__int64 __fastcall sub_140561780(__int64 a1, _DWORD* a2, unsigned int a3, __int64* a4)
{
	__int64 v4; // rbp
	__int64 v6; // rdi
	unsigned __int64 v8; // rsi
	_QWORD* v9; // rbx
	int v10; // edx
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v14; // rax
	int v15; // edi
	__int64 v16; // rsi
	__int64* v17; // r14
	__int64 v18; // rbx
	__int64 v19; // rax
	unsigned int v20; // eax
	int v21; // r14d
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // r8
	__int64 v25; // rcx
	__int64 v26; // rax
	int* v27; // rax
	_QWORD* v28; // rsi
	int* v29; // rax
	__int64 v30; // rbx
	unsigned int v31; // eax
	unsigned int v32; // esi
	__int64 v33; // rax
	__int64* v34; // rcx
	__int64 v35; // rax
	_QWORD* v36; // rbx
	int v37; // eax
	__int64 v38; // [rsp+70h] [rbp+8h] BYREF
	unsigned int v39; // [rsp+80h] [rbp+18h] BYREF

	v39 = a3;
	v38 = a1;
	v4 = qword_140C65B70;
	v6 = *(_QWORD*)(qword_140C65B70 + 1392);
	v8 = (*(__int64(__fastcall**)(unsigned int*))(v6 + 24))(&v39);
	v9 = *(_QWORD**)(*(_QWORD*)(v6 + 16) + 8 * (v8 % *(_QWORD*)(v6 + 8)));
	if (v9)
	{
		while (v8 != *v9 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v6 + 32))(&v39, v9 + 2))
		{
			v9 = (_QWORD*)v9[1];
			if (!v9)
				goto LABEL_5;
		}
		if (v9 != (_QWORD*)-20i64)
			return 4i64;
	}
LABEL_5:
	v10 = a2[6];
	if (v10 && (v11 = sub_140561C30(v4, v10), (v12 = v11) != 0))
	{
		sub_14053FBF0(v11);
		sub_14053D850(v12);
		return 0i64;
	}
	else
	{
		v14 = sub_1403D90D0(qword_140C65898, a2[7]);
		v15 = 0;
		v16 = v14;
		if (v14 && *(_QWORD*)(qword_140C65898 + 120) == v14 && (v17 = *(__int64**)(qword_140C65898 + 28048)) != 0i64)
		{
			v18 = *v17;
			v19 = sub_1403D90D0(qword_140C65898, a2[9]);
			v20 = (*(__int64(__fastcall**)(__int64*, _QWORD, __int64, __int64, _QWORD))(v18 + 16))(
				v17,
				v39,
				v16,
				v19,
				0i64);
			v39 = v20;
		}
		else
		{
			v20 = v39;
		}
		v21 = 0;
		if (v16)
			v22 = sub_1403ACD90(v4, v20, v16);
		else
			v22 = sub_1407A0FD0(v4, v20);
		v23 = v22;
		if (v22)
		{
			v24 = *(_QWORD*)(qword_140C65898 + 32024);
			v25 = v24;
			v26 = *(_QWORD*)(v24 + 8);
			while (v26)
			{
				if (*(_DWORD*)(v26 + 32) < v39)
				{
					v26 = *(_QWORD*)(v26 + 24);
				}
				else
				{
					v25 = v26;
					v26 = *(_QWORD*)(v26 + 16);
				}
			}
			if (v25 == v24 || (v38 = v25, v39 < *(_DWORD*)(v25 + 32)))
				v38 = v24;
			if (v38 == v24)
			{
				v28 = (_QWORD*)v23;
			}
			else
			{
				v27 = sub_14018B280(136i64, 0);
				v28 = v27;
				if (v27)
				{
					*((_QWORD*)v27 + 4) = 0i64;
					*((_QWORD*)v27 + 3) = 0i64;
					*((_QWORD*)v27 + 13) = 0i64;
					*((_QWORD*)v27 + 12) = 0i64;
					*((_QWORD*)v27 + 14) = 0i64;
					v27[30] = 0;
					v27[32] = 0;
					*(_QWORD*)v27 = off_140B667D0;
				}
				else
				{
					v28 = 0i64;
				}
				sub_1403D8810((__int64)v28, v23);
				v21 = 1;
			}
			v29 = sub_14018B280(912i64, 0);
			if (v29)
			{
				v30 = sub_14053C500((__int64)v29);
				v38 = v30;
			}
			else
			{
				v30 = 0i64;
				v38 = 0i64;
			}
			v31 = sub_14053D1F0(v30, a2, v28, v21);
			v32 = v31;
			if (v31)
			{
				sub_14018D540(&v38, (__int64)L"%d", v31);
				if (v38)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
				if (v30)
					(**(void(__fastcall***)(__int64, __int64))v30)(v30, 1i64);
				return v32;
			}
			else
			{
				if (a2[6])
				{
					sub_1400B6080(v4 + 1952, a2 + 6, &v38);
				}
				else
				{
					v33 = sub_1403D90D0(qword_140C65898, a2[7]);
					if (!v33 || *(_DWORD*)(v33 + 128) != 24)
					{
						v34 = (__int64*)(v4 + 1992);
						if (!*(_QWORD*)(v30 + 56))
						{
							*(_QWORD*)(v30 + 56) = v34;
							*(_QWORD*)(v30 + 64) = *v34;
							*v34 = v30;
							v35 = *(_QWORD*)(v30 + 64);
							if (v35)
								*(_QWORD*)(v35 + 56) = v30 + 64;
						}
						if (a4)
							*a4 = v30;
						v36 = (_QWORD*)*v34;
						if (*v34)
						{
							do
							{
								v37 = (*(__int64(__fastcall**)(_QWORD*))(*v36 + 8i64))(v36);
								if (v37 == v39 && (unsigned int)++v15 >= 5)
									break;
								v36 = (_QWORD*)v36[8];
							} while (v36);
						}
					}
				}
				return 0i64;
			}
		}
		else
		{
			return 4i64;
		}
	}
}
// 140B4F534: using guessed type wchar_t aD_27[3];
// 140B667D0: using guessed type __int64 (__fastcall *off_140B667D0[11])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

