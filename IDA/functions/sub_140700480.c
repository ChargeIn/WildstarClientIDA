//----- (0000000140700480) ----------------------------------------------------
__int64 __fastcall sub_140700480(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	unsigned __int64 v6; // rcx
	float v7; // xmm6_4
	int v8; // r12d
	unsigned int v9; // edx
	int v10; // ecx
	int v11; // ecx
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // r10
	__int64 v16; // r8
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rbx
	__int64 v24; // rax
	int v25; // eax
	unsigned int v26; // r15d
	int v27; // r13d
	__int64 v28; // r9
	_DWORD* v29; // rdx
	__int64 v30; // rcx
	unsigned __int64* v31; // r14
	unsigned __int64 v32; // rdi
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rax
	__int64* v36; // rax
	__int64 v37; // r10
	__int64 v38; // rax
	__int64 v39; // r9
	_DWORD* v40; // rcx
	unsigned __int64* v41; // r14
	unsigned __int64 v42; // rdi
	__int64 v43; // rbx
	__int64 v44; // rax
	__int64 v45; // rax
	__int64* v46; // rax
	__int64 v47; // rdx
	__int64 v48; // r10
	__int64 v49; // r9
	_DWORD* v50; // rcx
	__int64 v51; // r9
	int v52; // r8d
	__int64 v53; // rdx
	__int64 v55; // [rsp+38h] [rbp-69h] BYREF
	__int64 v56; // [rsp+40h] [rbp-61h] BYREF
	__int64(__fastcall * *v57)(); // [rsp+48h] [rbp-59h] BYREF
	int v58; // [rsp+50h] [rbp-51h]
	__int64 v59; // [rsp+58h] [rbp-49h]
	int v60; // [rsp+60h] [rbp-41h]
	__int64 v61; // [rsp+68h] [rbp-39h] BYREF
	__int64 v62; // [rsp+70h] [rbp-31h]
	double v63; // [rsp+108h] [rbp+67h] BYREF
	double v64; // [rsp+110h] [rbp+6Fh] BYREF
	int v65; // [rsp+118h] [rbp+77h] BYREF
	unsigned __int64 v66; // [rsp+120h] [rbp+7Fh]

	v1 = *(_QWORD*)(a1 + 32);
	v59 = a1;
	v60 = 1;
	v57 = off_140B569F0;
	if (*(_QWORD*)(v1 + 120) >= *(_QWORD*)(v1 + 112))
		sub_14005E2C0(a1);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v5 = sub_1400578C0(a1);
	LODWORD(v6) = 1;
	v58 = v5;
	v66 = 1i64;
	do
	{
		v7 = 0.0;
		v8 = 0;
		v9 = 0;
		v10 = v6 - 1;
		if (v10)
		{
			v11 = v10 - 1;
			if (v11)
			{
				if (v11 == 1)
				{
					if (qword_140C63840)
					{
						v12 = qword_140C63840(off_140A6A408, 994i64, qword_140C63858);
					}
					else
					{
						if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
						{
						LABEL_14:
							v9 = 52577;
							goto LABEL_31;
						}
						v12 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(
							qword_140C64C58,
							994i64);
					}
					if (!v12)
						goto LABEL_14;
					v9 = *(_DWORD*)(v12 + 4);
				}
			}
			else
			{
				if (qword_140C63840)
				{
					v13 = qword_140C63840(off_140A6A408, 972i64, qword_140C63858);
				}
				else
				{
					if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
					{
					LABEL_22:
						v9 = 49882;
						goto LABEL_31;
					}
					v13 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(
						qword_140C64C58,
						972i64);
				}
				if (!v13)
					goto LABEL_22;
				v9 = *(_DWORD*)(v13 + 4);
			}
		}
		else
		{
			if (qword_140C63840)
			{
				v14 = qword_140C63840(off_140A6A408, 971i64, qword_140C63858);
			}
			else
			{
				if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
				{
				LABEL_30:
					v9 = 49881;
					goto LABEL_31;
				}
				v14 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(
					qword_140C64C58,
					971i64);
			}
			if (!v14)
				goto LABEL_30;
			v9 = *(_DWORD*)(v14 + 4);
		}
	LABEL_31:
		v15 = qword_140C65898;
		if (v9)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898)
			{
				v16 = *(_QWORD*)(qword_140C65898 + 32024);
				v17 = v16;
				v18 = *(_QWORD*)(v16 + 8);
				while (v18)
				{
					if (*(_DWORD*)(v18 + 32) < v9)
					{
						v18 = *(_QWORD*)(v18 + 24);
					}
					else
					{
						v17 = v18;
						v18 = *(_QWORD*)(v18 + 16);
					}
				}
				if (v17 == v16 || v9 < *(_DWORD*)(v17 + 32))
				{
					v56 = *(_QWORD*)(qword_140C65898 + 32024);
					v19 = &v56;
				}
				else
				{
					v55 = v17;
					v19 = &v55;
				}
				v20 = *v19;
				if (v20 != v16)
				{
					v21 = *(_QWORD*)(v20 + 40);
					if (v21)
						goto LABEL_46;
				}
			}
			v21 = sub_1407A0FD0(qword_140C65B70, v9);
			v15 = qword_140C65898;
			if (v21)
			{
			LABEL_46:
				v22 = *(_QWORD*)(v15 + 120);
				LODWORD(v63) = 0;
				LODWORD(v64) = 0;
				sub_1405650E0(v22, v21, (float*)&v63, &v65, (unsigned int*)&v64);
				v7 = *(float*)&v63;
				v8 = LODWORD(v64);
			}
		}
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v23 = *(_QWORD*)(a1 + 16);
		v24 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v23 + 8) = 5;
		*(_QWORD*)v23 = v24;
		*(_QWORD*)(a1 + 16) += 16i64;
		v25 = sub_1400578C0(a1);
		v26 = v25 - 1;
		v27 = v25;
		v28 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v25 - 1) >= *(_DWORD*)(v28 + 56))
		{
			v64 = (double)v25;
			if ((double)v25 == 0.0)
				v29 = *(_DWORD**)(v28 + 32);
			else
				v29 = (_DWORD*)(*(_QWORD*)(v28 + 32)
					+ 40 * ((unsigned int)(LODWORD(v64) + HIDWORD(v64)) % (((1i64 << *(_BYTE*)(v28 + 11)) - 1) | 1)));
			while (v29[6] != 3 || (double)v25 != *((double*)v29 + 2))
			{
				v29 = (_DWORD*)*((_QWORD*)v29 + 4);
				if (!v29)
				{
					v29 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v29 = (_DWORD*)(*(_QWORD*)(v28 + 24) + 16i64 * (v25 - 1));
		}
		v30 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v30 = *(_QWORD*)v29;
		*(_DWORD*)(v30 + 8) = v29[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v31 = (unsigned __int64*)sub_14018F0E0(&v61, L"fCooldownPercent")[1];
		if (v31)
		{
			v32 = -1i64;
			do
				++v32;
			while (*((_BYTE*)v31 + v32));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v33 = *(_QWORD*)(a1 + 16);
			v34 = sub_140062650(a1, v31, v32);
			*(_DWORD*)(v33 + 8) = 4;
			*(_QWORD*)v33 = v34;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v62)
			sub_14018B900(v62, 0);
		v35 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v35 + 8) = 3;
		*(double*)v35 = v7;
		*(_QWORD*)(a1 + 16) += 16i64;
		v36 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v36, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		v37 = *(_QWORD*)(a1 + 16) - 48i64;
		v38 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) = v37;
		v39 = *(_QWORD*)(v38 + 160);
		if (v26 >= *(_DWORD*)(v39 + 56))
		{
			v64 = (double)v27;
			if ((double)v27 == 0.0)
				v40 = *(_DWORD**)(v39 + 32);
			else
				v40 = (_DWORD*)(*(_QWORD*)(v39 + 32)
					+ 40 * ((unsigned int)(LODWORD(v64) + HIDWORD(v64)) % (((1i64 << *(_BYTE*)(v39 + 11)) - 1) | 1)));
			while (v40[6] != 3 || (double)v27 != *((double*)v40 + 2))
			{
				v40 = (_DWORD*)*((_QWORD*)v40 + 4);
				if (!v40)
				{
					v40 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v40 = (_DWORD*)(*(_QWORD*)(v39 + 24) + 16i64 * (v27 - 1));
		}
		*(_QWORD*)v37 = *(_QWORD*)v40;
		*(_DWORD*)(v37 + 8) = v40[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v41 = (unsigned __int64*)sub_14018F0E0(&v61, L"fCooldownTime")[1];
		if (v41)
		{
			v42 = -1i64;
			do
				++v42;
			while (*((_BYTE*)v41 + v42));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v43 = *(_QWORD*)(a1 + 16);
			v44 = sub_140062650(a1, v41, v42);
			*(_DWORD*)(v43 + 8) = 4;
			*(_QWORD*)v43 = v44;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v62)
			sub_14018B900(v62, 0);
		v45 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v45 + 8) = 3;
		*(double*)v45 = (float)((float)v8 * 0.001);
		*(_QWORD*)(a1 + 16) += 16i64;
		v46 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v46, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 48i64;
		sub_1400FB1D0((__int64)&v57);
		sub_1400579E0(a1, v47, v27);
		v6 = v66 + 1;
		v66 = v6;
	} while (v6 < 4);
	v48 = v59;
	v49 = *(_QWORD*)(*(_QWORD*)(v59 + 32) + 160i64);
	if ((unsigned int)(v58 - 1) >= *(_DWORD*)(v49 + 56))
	{
		v63 = (double)v58;
		if ((double)v58 == 0.0)
			v50 = *(_DWORD**)(v49 + 32);
		else
			v50 = (_DWORD*)(*(_QWORD*)(v49 + 32)
				+ 40 * ((unsigned int)(LODWORD(v63) + HIDWORD(v63)) % (((1i64 << *(_BYTE*)(v49 + 11)) - 1) | 1)));
		while (v50[6] != 3 || (double)v58 != *((double*)v50 + 2))
		{
			v50 = (_DWORD*)*((_QWORD*)v50 + 4);
			if (!v50)
			{
				v50 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v50 = (_DWORD*)(*(_QWORD*)(v49 + 24) + 16i64 * (v58 - 1));
	}
	v51 = *(_QWORD*)(v59 + 16);
	v52 = v58;
	*(_QWORD*)v51 = *(_QWORD*)v50;
	v53 = (unsigned int)v50[2];
	*(_DWORD*)(v51 + 8) = v53;
	*(_QWORD*)(v48 + 16) += 16i64;
	sub_1400579E0(v48, v53, v52);
	return 1i64;
}
// 140700A29: variable 'v47' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140B41A30: using guessed type wchar_t aFcooldowntime[14];
// 140B41A50: using guessed type wchar_t aFcooldownperce[17];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

