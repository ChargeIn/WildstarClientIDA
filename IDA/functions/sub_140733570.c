//----- (0000000140733570) ----------------------------------------------------
__int64 __fastcall sub_140733570(__int64 a1)
{
	__int64 v1; // r13
	__int64 v2; // r13
	__int64 v3; // rdi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // r13
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // esi
	unsigned __int64 v10; // r14
	int v11; // r9d
	__int64 v12; // rdx
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // r12d
	_QWORD* v16; // rax
	__int64 v17; // rdx
	unsigned __int64* v18; // rbp
	unsigned __int64 v19; // rsi
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64* v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	unsigned __int16* v28; // r11
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	unsigned __int16* v32; // r11
	__int64 v33; // rdx
	__int64 v34; // r10
	_DWORD* v35; // rcx
	__int64 v36; // r8
	__int64 v37; // rdx
	__int64(__fastcall * *v39)(); // [rsp+20h] [rbp-68h] BYREF
	int v40; // [rsp+28h] [rbp-60h]
	__int64 v41; // [rsp+30h] [rbp-58h]
	int v42; // [rsp+38h] [rbp-50h]
	_QWORD v43[4]; // [rsp+40h] [rbp-48h] BYREF
	int v44; // [rsp+90h] [rbp+8h]
	double v45; // [rsp+90h] [rbp+8h]

	v1 = *(_QWORD*)(qword_140C659F0 + 520);
	v41 = a1;
	v2 = v1 - *(_QWORD*)(qword_140C659F0 + 512);
	v3 = a1;
	v4 = *(_QWORD*)(a1 + 32);
	v39 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v6 = (unsigned int)(v2 >> 3);
	v42 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0(v3);
	v7 = *(_QWORD*)(v3 + 16);
	v8 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(v3 + 16) += 16i64;
	v9 = 1;
	v10 = 0i64;
	v11 = sub_1400578C0(v3);
	v40 = v11;
	v44 = 1;
	if (v6)
	{
		v12 = qword_140C659F0;
		do
		{
			if ((unsigned int)((__int64)(*(_QWORD*)(v12 + 520) - *(_QWORD*)(v12 + 512)) >> 3) > (unsigned int)v10
				&& *(_QWORD*)(*(_QWORD*)(v12 + 512) + 8i64 * (unsigned int)v10))
			{
				if (*(_QWORD*)(*(_QWORD*)(v3 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v3 + 32) + 112i64))
					sub_14005E2C0(v3);
				v13 = *(_QWORD*)(v3 + 16);
				v14 = sub_14005C1B0(v3, 0, 0);
				*(_DWORD*)(v13 + 8) = 5;
				*(_QWORD*)v13 = v14;
				*(_QWORD*)(v3 + 16) += 16i64;
				v15 = sub_1400578C0(v3);
				v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v15);
				v17 = *(_QWORD*)(v3 + 16);
				*(_QWORD*)v17 = *v16;
				*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
				*(_QWORD*)(v3 + 16) += 16i64;
				v18 = (unsigned __int64*)sub_14018F0E0(v43, L"nId")[1];
				if (v18)
				{
					v19 = -1i64;
					do
						++v19;
					while (*((_BYTE*)v18 + v19));
					if (*(_QWORD*)(*(_QWORD*)(v3 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v3 + 32) + 112i64))
						sub_14005E2C0(v3);
					v20 = *(_QWORD*)(v3 + 16);
					v21 = sub_140062650(v3, v18, v19);
					v9 = v44;
					*(_DWORD*)(v20 + 8) = 4;
					*(_QWORD*)v20 = v21;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64) = 0;
				}
				v22 = v43[1];
				*(_QWORD*)(v3 + 16) += 16i64;
				if (v22)
					sub_14018B900(v22, 0);
				v23 = *(_QWORD*)(v3 + 16);
				*(_DWORD*)(v23 + 8) = 3;
				*(double*)v23 = (double)v9;
				*(_QWORD*)(v3 + 16) += 16i64;
				v24 = (__int64*)sub_1400580E0(v3, -3);
				sub_14005EA50(v3, v24, (int*)(*(_QWORD*)(v3 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v3 + 16) - 16i64));
				*(_QWORD*)(v3 + 16) -= 48i64;
				v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v15);
				*(_QWORD*)v26 = *v25;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
				*(_QWORD*)(v3 + 16) += 16i64;
				sub_1400F0870(v3, v27, L"strCharacterName", v28);
				*(_QWORD*)(v3 + 16) -= 16i64;
				v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v15);
				*(_QWORD*)v30 = *v29;
				*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
				*(_QWORD*)(v3 + 16) += 16i64;
				sub_1400F0870(v3, v31, L"strResidenceName", v32);
				*(_QWORD*)(v3 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v39);
				v44 = ++v9;
				sub_1400579E0(v3, v33, v15);
				v12 = qword_140C659F0;
			}
			++v10;
		} while (v10 < v6);
		v3 = v41;
		v11 = v40;
	}
	v34 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64);
	if ((unsigned int)(v11 - 1) >= *(_DWORD*)(v34 + 56))
	{
		if ((double)v11 == 0.0)
		{
			v35 = *(_DWORD**)(v34 + 32);
		}
		else
		{
			v45 = (double)v11;
			v35 = (_DWORD*)(*(_QWORD*)(v34 + 32)
				+ 40 * ((unsigned int)(LODWORD(v45) + HIDWORD(v45)) % (((1i64 << *(_BYTE*)(v34 + 11)) - 1) | 1)));
		}
		while (v35[6] != 3 || (double)v11 != *((double*)v35 + 2))
		{
			v35 = (_DWORD*)*((_QWORD*)v35 + 4);
			if (!v35)
			{
				v35 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v35 = (_DWORD*)(*(_QWORD*)(v34 + 24) + 16i64 * (v11 - 1));
	}
	v36 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v36 = *(_QWORD*)v35;
	v37 = (unsigned int)v35[2];
	*(_DWORD*)(v36 + 8) = v37;
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400579E0(v3, v37, v11);
	return 1i64;
}
// 1407337C6: variable 'v26' is possibly undefined
// 1407337D8: variable 'v27' is possibly undefined
// 1407337D8: variable 'v28' is possibly undefined
// 14073380A: variable 'v30' is possibly undefined
// 14073381C: variable 'v31' is possibly undefined
// 14073381C: variable 'v32' is possibly undefined
// 140733842: variable 'v33' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B471F8: using guessed type wchar_t aStrcharacterna_7[17];
// 140B47220: using guessed type wchar_t aNid_33[4];
// 140B47438: using guessed type wchar_t aStrresidencena[17];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C659F0: using guessed type __int64 qword_140C659F0;

