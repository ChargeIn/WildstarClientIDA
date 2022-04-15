//----- (00000001403CE010) ----------------------------------------------------
__int64 __fastcall sub_1403CE010(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v3; // rdi
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rsi
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	unsigned int v14; // r12d
	__int64 v15; // r9
	int v16; // r15d
	int v17; // r13d
	_DWORD* v18; // rdx
	__int64 v19; // rcx
	unsigned __int64* v20; // r14
	unsigned __int64 v21; // rbp
	__int64 v22; // rdi
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64* v26; // rax
	__int64 v27; // rax
	__int64 v28; // r10
	__int64 v29; // r9
	int v30; // r15d
	_DWORD* v31; // rcx
	unsigned __int64* v32; // r14
	unsigned __int64 v33; // rbp
	__int64 v34; // rdi
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64* v38; // rax
	__int64 v39; // rdx
	__int64 v40; // rax
	__int64 i; // rax
	__int64 j; // rcx
	__int64 v44; // [rsp+20h] [rbp-68h] BYREF
	__int64 v45; // [rsp+28h] [rbp-60h]
	double v46; // [rsp+90h] [rbp+8h]
	double v47; // [rsp+90h] [rbp+8h]
	__int64 v49; // [rsp+A0h] [rbp+18h]

	v2 = qword_140C65898;
	v3 = a2;
	v49 = qword_140C65898;
	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(v3 + 16), v6, L"nCount", v7);
	*(_QWORD*)(*(_QWORD*)(v3 + 16) + 16i64) -= 16i64;
	v8 = *(_QWORD*)(v2 + 28360);
	v9 = *(_QWORD*)(v8 + 16);
	if (v9 != v8)
	{
		do
		{
			v10 = *(_QWORD*)(v3 + 16);
			if (*(_QWORD*)(*(_QWORD*)(v10 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v10 + 32) + 112i64))
				sub_14005E2C0(*(_QWORD*)(v3 + 16));
			v11 = *(_QWORD*)(v10 + 16);
			v12 = sub_14005C1B0(v10, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(v10 + 16) += 16i64;
			v13 = sub_1400578C0(v10);
			v14 = v13 - 1;
			v15 = *(_QWORD*)(*(_QWORD*)(v10 + 32) + 160i64);
			v16 = *(_DWORD*)(v9 + 32) + 1;
			v17 = v13;
			if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v15 + 56))
			{
				if ((double)v13 == 0.0)
				{
					v18 = *(_DWORD**)(v15 + 32);
				}
				else
				{
					v46 = (double)v13;
					v18 = (_DWORD*)(*(_QWORD*)(v15 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v46) + HIDWORD(v46)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
				}
				while (v18[6] != 3 || (double)v13 != *((double*)v18 + 2))
				{
					v18 = (_DWORD*)*((_QWORD*)v18 + 4);
					if (!v18)
					{
						v18 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v18 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * (v13 - 1));
			}
			v19 = *(_QWORD*)(v10 + 16);
			*(_QWORD*)v19 = *(_QWORD*)v18;
			*(_DWORD*)(v19 + 8) = v18[2];
			*(_QWORD*)(v10 + 16) += 16i64;
			v20 = (unsigned __int64*)sub_14018F0E0(&v44, L"nSpecIndex")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				if (*(_QWORD*)(*(_QWORD*)(v10 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v10 + 32) + 112i64))
					sub_14005E2C0(v10);
				v22 = *(_QWORD*)(v10 + 16);
				v23 = sub_140062650(v10, v20, v21);
				*(_DWORD*)(v22 + 8) = 4;
				*(_QWORD*)v22 = v23;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v10 + 16) + 8i64) = 0;
			}
			v24 = v45;
			*(_QWORD*)(v10 + 16) += 16i64;
			if (v24)
				sub_14018B900(v24, 0);
			v25 = *(_QWORD*)(v10 + 16);
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = (double)v16;
			*(_QWORD*)(v10 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(v10, -3);
			sub_14005EA50(v10, v26, (int*)(*(_QWORD*)(v10 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v10 + 16) - 16i64));
			v27 = *(_QWORD*)(v10 + 32);
			v28 = *(_QWORD*)(v10 + 16) - 48i64;
			*(_QWORD*)(v10 + 16) = v28;
			v29 = *(_QWORD*)(v27 + 160);
			v30 = *(_DWORD*)(v9 + 36);
			if (v14 >= *(_DWORD*)(v29 + 56))
			{
				if ((double)v17 == 0.0)
				{
					v31 = *(_DWORD**)(v29 + 32);
				}
				else
				{
					v47 = (double)v17;
					v31 = (_DWORD*)(*(_QWORD*)(v29 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v47) + HIDWORD(v47)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
				}
				while (v31[6] != 3 || (double)v17 != *((double*)v31 + 2))
				{
					v31 = (_DWORD*)*((_QWORD*)v31 + 4);
					if (!v31)
					{
						v31 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v31 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v17 - 1));
			}
			*(_QWORD*)v28 = *(_QWORD*)v31;
			*(_DWORD*)(v28 + 8) = v31[2];
			*(_QWORD*)(v10 + 16) += 16i64;
			v32 = (unsigned __int64*)sub_14018F0E0(&v44, L"eLimitedActionSetResult")[1];
			if (v32)
			{
				v33 = -1i64;
				do
					++v33;
				while (*((_BYTE*)v32 + v33));
				if (*(_QWORD*)(*(_QWORD*)(v10 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v10 + 32) + 112i64))
					sub_14005E2C0(v10);
				v34 = *(_QWORD*)(v10 + 16);
				v35 = sub_140062650(v10, v32, v33);
				*(_DWORD*)(v34 + 8) = 4;
				*(_QWORD*)v34 = v35;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v10 + 16) + 8i64) = 0;
			}
			v36 = v45;
			*(_QWORD*)(v10 + 16) += 16i64;
			if (v36)
				sub_14018B900(v36, 0);
			v37 = *(_QWORD*)(v10 + 16);
			*(_DWORD*)(v37 + 8) = 3;
			*(double*)v37 = (double)v30;
			*(_QWORD*)(v10 + 16) += 16i64;
			v38 = (__int64*)sub_1400580E0(v10, -3);
			sub_14005EA50(v10, v38, (int*)(*(_QWORD*)(v10 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v10 + 16) - 16i64));
			v3 = a2;
			*(_QWORD*)(v10 + 16) -= 48i64;
			sub_1400FB1D0(a2);
			sub_1400579E0(v10, v39, v17);
			v40 = *(_QWORD*)(v9 + 24);
			if (v40)
			{
				v9 = *(_QWORD*)(v9 + 24);
				for (i = *(_QWORD*)(v40 + 16); i; i = *(_QWORD*)(i + 16))
					v9 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = j;
				if (*(_QWORD*)(v9 + 24) != j)
					v9 = j;
			}
		} while (v9 != *(_QWORD*)(v49 + 28360));
	}
	return 1i64;
}
// 1403CE050: variable 'v5' is possibly undefined
// 1403CE073: variable 'v7' is possibly undefined
// 1403CE401: variable 'v39' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140AF6468: using guessed type wchar_t aNcount_4[7];
// 140AF6478: using guessed type wchar_t aNspecindex[11];
// 140AF66A8: using guessed type wchar_t aElimitedaction[24];
// 140C65898: using guessed type __int64 qword_140C65898;

