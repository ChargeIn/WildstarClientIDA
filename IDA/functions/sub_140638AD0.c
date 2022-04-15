//----- (0000000140638AD0) ----------------------------------------------------
__int64 __fastcall sub_140638AD0(__int64 a1, unsigned int a2, int a3, __int64* a4, __int64* a5, __int64 a6)
{
	__int64 v6; // rbp
	__int64 v7; // r15
	unsigned __int64 v8; // rbx
	__int64 v11; // r12
	__int64 v12; // r14
	int v13; // r12d
	__int64 v14; // rdi
	int* v15; // rdx
	unsigned __int64 v16; // r14
	char v17; // al
	unsigned int v18; // ebx
	__int64 v19; // rax
	__int64 v20; // rbx
	int v21; // edi
	int* v22; // rax
	int* v23; // r15
	float v24; // xmm0_4
	__int64 v25; // rdx
	float* v26; // r9
	float v27; // xmm1_4
	unsigned int v28; // r13d
	__int64 v29; // rax
	__int64 v30; // rcx
	int v31; // eax
	int v32; // ecx
	__int64 v33; // rax
	__int64 v34; // r8
	int v35; // ecx
	int v36; // eax
	int v37; // ecx
	struct _FILETIME v38; // r13
	struct _FILETIME v39; // rcx
	__int64 v40; // rax
	_QWORD* v41; // r14
	unsigned __int64 v42; // rbp
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rbx
	int v46; // edi
	int* v47; // rax
	int* v48; // r12
	unsigned __int64 v49; // r12
	__int64* v50; // rdi
	__int64 v51; // rsi
	unsigned int v52; // ebx
	__int64 v53; // rax
	__int64 v54; // rbp
	__int64 v55; // rbx
	int* v56; // rax
	int* v57; // r15
	unsigned __int64 v58; // rdi
	__int64 v59; // rbx
	float* v60; // r15
	__int64 v61; // rax
	unsigned int v62; // esi
	__int64 v63; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+28h] [rbp-50h] BYREF
	unsigned __int64 v67; // [rsp+30h] [rbp-48h] BYREF
	__int64 v68; // [rsp+38h] [rbp-40h]
	struct _FILETIME v69; // [rsp+80h] [rbp+8h] BYREF
	int v70; // [rsp+90h] [rbp+18h]

	v70 = a3;
	v69 = (struct _FILETIME)a1;
	v6 = qword_140C65C20;
	v7 = 0i64;
	v8 = 0i64;
	v11 = 0i64;
	v67 = 0i64;
	v68 = 0i64;
	v12 = sub_14022FB40(a2);
	if (v12)
	{
		if (*(_QWORD*)(v6 + 328))
		{
			v13 = v70;
			v14 = 0i64;
			do
			{
				v15 = (int*)(v14 + *(_QWORD*)(v6 + 320));
				if (*v15 == *(_DWORD*)(v12 + 4) && v15[1] == v13)
					sub_140481060((__int64*)&v67, v15);
				++v8;
				v14 += 20i64;
			} while (v8 < *(_QWORD*)(v6 + 328));
			v11 = v68;
		}
		v8 = v67;
	}
	*(_DWORD*)a6 = 1065353216;
	if (!v11)
	{
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		v38 = SystemTimeAsFileTime;
		v69 = SystemTimeAsFileTime;
		v40 = sub_140636C40(v39, a2);
		v41 = (_QWORD*)v40;
		if (!v40)
			goto LABEL_101;
		v42 = 0i64;
		if (*(_QWORD*)(v40 + 24))
		{
			do
			{
				v43 = v41[2];
				if (*(_QWORD*)(v7 + v43 + 8) > *(unsigned __int64*)&v38)
				{
					v44 = sub_1402303C0(*(_DWORD*)(v7 + v43));
					if (v44)
					{
						v45 = a4[1];
						v46 = *(_DWORD*)(v44 + 4);
						v47 = sub_14018DB00(*a4, v45 + 1, 4i64);
						v48 = v47;
						v47[v45] = v46;
						if ((int*)*a4 != v47)
						{
							sub_1407DB590(v47, (int*)*a4, 4 * a4[1]);
							if (*a4)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a4 - 16) + 8i64))(*a4 - 16);
							*a4 = (__int64)v48;
						}
						a4[1] = v45 + 1;
						v38 = v69;
					}
				}
				++v42;
				v7 += 24i64;
			} while (v42 < v41[3]);
			LODWORD(v7) = 0;
		}
		v49 = 0i64;
		if (v41[1])
		{
			v50 = a5;
			v51 = 0i64;
			while (1)
			{
				if (*(_QWORD*)(v51 + *v41 + 8) > *(unsigned __int64*)&v38)
				{
					v52 = *(_DWORD*)(v51 + *v41);
					if (qword_140C63840)
					{
						v53 = qword_140C63840(off_140A6CB68, v52, qword_140C63858);
						goto LABEL_80;
					}
					if (!dword_140C63898 && (int)sub_14022FD20() >= 0)
					{
						v53 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64480 + 24i64))(
							qword_140C64480,
							v52);
					LABEL_80:
						v54 = v53;
						if (v53)
						{
							v55 = v50[1];
							v56 = sub_14018DB00(*v50, v55 + 1, 8i64);
							v57 = v56;
							*(_QWORD*)&v56[2 * v55] = v54;
							if ((int*)*v50 != v56)
							{
								sub_1407DB590(v56, (int*)*v50, 8 * v50[1]);
								if (*v50)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v50 - 16) + 8i64))(*v50 - 16);
								*v50 = (__int64)v57;
							}
							v50[1] = v55 + 1;
							v38 = v69;
						}
					}
				}
				++v49;
				v51 += 24i64;
				if (v49 >= v41[1])
				{
					LODWORD(v7) = 0;
					break;
				}
			}
		}
		v58 = 0i64;
		if (!v41[5])
			goto LABEL_101;
		v59 = 0i64;
		v60 = (float*)a6;
		while (1)
		{
			v61 = v41[4];
			if (*(_QWORD*)(v59 + v61 + 8) > *(unsigned __int64*)&v38)
			{
				v62 = *(_DWORD*)(v59 + v61);
				if (qword_140C63840)
				{
					v63 = qword_140C63840(off_140A6CBD8, v62, qword_140C63858);
				LABEL_96:
					if (v63 && *(_DWORD*)(v63 + 4) == 38)
						*v60 = *(float*)(v63 + 12) * *v60;
					goto LABEL_99;
				}
				if (!dword_140C641B8 && (int)sub_1402305A0() >= 0)
				{
					v63 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E90 + 24i64))(qword_140C64E90, v62);
					goto LABEL_96;
				}
			}
		LABEL_99:
			++v58;
			v59 += 24i64;
			if (v58 >= v41[5])
			{
				LODWORD(v7) = 0;
				goto LABEL_101;
			}
		}
	}
	v16 = v8 + 8;
	do
	{
		v17 = *(_BYTE*)(v16 + 4);
		if (v17 == 2)
		{
			v18 = *(_DWORD*)v16;
			if (qword_140C63840)
			{
				v19 = qword_140C63840(off_140A6CBA0, v18, qword_140C63858);
			}
			else
			{
				if (dword_140C641BC || (int)sub_140230160() < 0)
					goto LABEL_27;
				v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FF8 + 24i64))(qword_140C64FF8, v18);
			}
			if (v19)
			{
				v20 = a4[1];
				v21 = *(_DWORD*)(v19 + 4);
				v22 = sub_14018DB00(*a4, v20 + 1, 4i64);
				v23 = v22;
				v22[v20] = v21;
				if ((int*)*a4 != v22)
				{
					sub_1407DB590(v22, (int*)*a4, 4 * a4[1]);
					if (*a4)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a4 - 16) + 8i64))(*a4 - 16);
					*a4 = (__int64)v23;
				}
				a4[1] = v20 + 1;
			}
		}
		else if (v17 == 1)
		{
			v69 = (struct _FILETIME)sub_14022FF80(*(_DWORD*)v16);
			if (v69)
				sub_140033260(a5, &v69);
		}
	LABEL_27:
		v16 += 20i64;
		--v11;
	} while (v11);
	v24 = 1.0;
	v25 = *(_QWORD*)(qword_140C65898 + 7168);
	v26 = (float*)a6;
	v27 = 1.0;
	v28 = (unsigned __int16)v70 | (a2 << 16);
	v29 = *(_QWORD*)(v25 + 8);
	v30 = v25;
	while (v29)
	{
		if (*(int*)(v29 + 32) < 38)
		{
			v29 = *(_QWORD*)(v29 + 24);
		}
		else
		{
			v30 = v29;
			v29 = *(_QWORD*)(v29 + 16);
		}
	}
	if (v30 == v25 || (v31 = *(_DWORD*)(v30 + 32), v31 > 38) || v31 >= 38 && *(_DWORD*)(v30 + 36))
		a6 = *(_QWORD*)(qword_140C65898 + 7168);
	else
		a6 = v30;
	if (a6 != v25)
	{
		v32 = *(_DWORD*)(a6 + 48);
		if (!v32 || v32 == 2)
			v27 = *(float*)(a6 + 52);
	}
	v33 = *(_QWORD*)(v25 + 8);
	v34 = v25;
	while (v33)
	{
		v35 = *(_DWORD*)(v33 + 32);
		if (v35 < 38 || v35 <= 38 && *(_DWORD*)(v33 + 36) < v28)
		{
			v33 = *(_QWORD*)(v33 + 24);
		}
		else
		{
			v25 = v33;
			v33 = *(_QWORD*)(v33 + 16);
		}
	}
	if (v25 == v34 || (v36 = *(_DWORD*)(v25 + 32), v36 > 38) || v36 >= 38 && v28 < *(_DWORD*)(v25 + 36))
		a6 = v34;
	else
		a6 = v25;
	if (a6 != v34)
	{
		v37 = *(_DWORD*)(a6 + 48);
		if (!v37 || v37 == 2)
			v24 = *(float*)(a6 + 52);
	}
	LODWORD(v7) = 1;
	*v26 = (float)(v24 * v27) * *v26;
LABEL_101:
	if (v67)
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v67 - 16) + 8i64))(v67 - 16);
	return (unsigned int)v7;
}
// 140638DEF: variable 'v39' is possibly undefined
// 140A6CB68: using guessed type wchar_t *off_140A6CB68[2];
// 140A6CBA0: using guessed type wchar_t *off_140A6CBA0[2];
// 140A6CBD8: using guessed type wchar_t *off_140A6CBD8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63898: using guessed type int dword_140C63898;
// 140C641B8: using guessed type int dword_140C641B8;
// 140C641BC: using guessed type int dword_140C641BC;
// 140C64480: using guessed type __int64 qword_140C64480;
// 140C64E90: using guessed type __int64 qword_140C64E90;
// 140C64FF8: using guessed type __int64 qword_140C64FF8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C20: using guessed type __int64 qword_140C65C20;

