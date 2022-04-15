//----- (0000000140733D50) ----------------------------------------------------
__int64 __fastcall sub_140733D50(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r13d
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned int v8; // r14d
	int v9; // r9d
	__int64 v10; // rax
	int* v11; // r15
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	int v15; // ebx
	int v16; // r12d
	_QWORD* v17; // rax
	__int64 v18; // rdx
	unsigned __int64* v19; // rbp
	unsigned __int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rcx
	_QWORD* v27; // rax
	__int64 v28; // rdx
	unsigned __int16* v29; // r10
	int v30; // r15d
	_QWORD* v31; // rax
	__int64 v32; // r10
	unsigned __int64* v33; // rbp
	unsigned __int64 v34; // rsi
	__int64 v35; // rbx
	__int64 v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 v40; // rdx
	__int64 v41; // r10
	_DWORD* v42; // rcx
	__int64 v43; // r8
	__int64 v44; // rdx
	__int64(__fastcall * *v46)(); // [rsp+20h] [rbp-68h] BYREF
	int v47; // [rsp+28h] [rbp-60h]
	__int64 v48; // [rsp+30h] [rbp-58h]
	int v49; // [rsp+38h] [rbp-50h]
	__int64 v50; // [rsp+40h] [rbp-48h] BYREF
	__int64 v51; // [rsp+48h] [rbp-40h]
	int v52; // [rsp+90h] [rbp+8h]
	double v53; // [rsp+90h] [rbp+8h]

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6A830, qword_140C63858);
	}
	else
	{
		if (dword_140C639F8)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140205080() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C646E8 + 40i64))(qword_140C646E8);
	}
	v3 = v2;
LABEL_9:
	v4 = *(_QWORD*)(a1 + 32);
	v48 = a1;
	v46 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v49 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = 0;
	v9 = sub_1400578C0(a1);
	v47 = v9;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C639F8 && (int)sub_140205080() >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C646E8 + 32i64))(qword_140C646E8, v8);
			LABEL_17:
				v11 = (int*)v10;
				if (v10)
				{
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v12 = *(_QWORD*)(a1 + 16);
					v13 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v12 + 8) = 5;
					*(_QWORD*)v12 = v13;
					*(_QWORD*)(a1 + 16) += 16i64;
					v14 = sub_1400578C0(a1);
					v15 = *v11;
					v16 = v14;
					v52 = *v11;
					v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v14);
					v18 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v18 = *v17;
					*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					v19 = (unsigned __int64*)sub_14018F0E0(&v50, L"nId")[1];
					if (v19)
					{
						v20 = -1i64;
						do
							++v20;
						while (*((_BYTE*)v19 + v20));
						if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
							sub_14005E2C0(a1);
						v21 = *(_QWORD*)(a1 + 16);
						v22 = sub_140062650(a1, v19, v20);
						*(_DWORD*)(v21 + 8) = 4;
						*(_QWORD*)v21 = v22;
						v15 = v52;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					}
					v23 = v51;
					*(_QWORD*)(a1 + 16) += 16i64;
					if (v23)
						sub_14018B900(v23, 0);
					v24 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v24 + 8) = 3;
					*(double*)v24 = (double)v15;
					*(_QWORD*)(a1 + 16) += 16i64;
					v25 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v25, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 48i64;
					sub_14034BDD0(v26, v11[4]);
					v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v16);
					v28 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v28 = *v27;
					*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F0870(a1, v28, L"strPoseName", v29);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v30 = v11[5];
					v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v16);
					*(_QWORD*)v32 = *v31;
					*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					v33 = (unsigned __int64*)sub_14018F0E0(&v50, L"nModelSequence")[1];
					if (v33)
					{
						v34 = -1i64;
						do
							++v34;
						while (*((_BYTE*)v33 + v34));
						if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
							sub_14005E2C0(a1);
						v35 = *(_QWORD*)(a1 + 16);
						v36 = sub_140062650(a1, v33, v34);
						*(_DWORD*)(v35 + 8) = 4;
						*(_QWORD*)v35 = v36;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					}
					v37 = v51;
					*(_QWORD*)(a1 + 16) += 16i64;
					if (v37)
						sub_14018B900(v37, 0);
					v38 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v38 + 8) = 3;
					*(double*)v38 = (double)v30;
					*(_QWORD*)(a1 + 16) += 16i64;
					v39 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v39, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 48i64;
					sub_1400FB1D0((__int64)&v46);
					sub_1400579E0(a1, v40, v16);
				}
			}
			if (++v8 >= v3)
			{
				a1 = v48;
				v9 = v47;
				goto LABEL_41;
			}
		}
		v10 = qword_140C63848(off_140A6A830, v8, qword_140C63858);
		goto LABEL_17;
	}
LABEL_41:
	v41 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v41 + 56))
	{
		if ((double)v9 == 0.0)
		{
			v42 = *(_DWORD**)(v41 + 32);
		}
		else
		{
			v53 = (double)v9;
			v42 = (_DWORD*)(*(_QWORD*)(v41 + 32)
				+ 40 * ((unsigned int)(LODWORD(v53) + HIDWORD(v53)) % (((1i64 << *(_BYTE*)(v41 + 11)) - 1) | 1)));
		}
		while (v42[6] != 3 || (double)v9 != *((double*)v42 + 2))
		{
			v42 = (_DWORD*)*((_QWORD*)v42 + 4);
			if (!v42)
			{
				v42 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v42 = (_DWORD*)(*(_QWORD*)(v41 + 24) + 16i64 * (v9 - 1));
	}
	v43 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v43 = *(_QWORD*)v42;
	v44 = (unsigned int)v42[2];
	*(_DWORD*)(v43 + 8) = v44;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v44, v9);
	return 1i64;
}
// 140733FD1: variable 'v26' is possibly undefined
// 14073400E: variable 'v29' is possibly undefined
// 14073403D: variable 'v32' is possibly undefined
// 14073411A: variable 'v40' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A830: using guessed type wchar_t *off_140A6A830[2];
// 140B473A0: using guessed type wchar_t aNmodelsequence[15];
// 140B473C0: using guessed type wchar_t aStrposename[12];
// 140B473D8: using guessed type wchar_t aNid_35[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639F8: using guessed type int dword_140C639F8;
// 140C646E8: using guessed type __int64 qword_140C646E8;

