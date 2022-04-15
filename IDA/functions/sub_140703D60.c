//----- (0000000140703D60) ----------------------------------------------------
__int64 __fastcall sub_140703D60(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r12d
	__int64 v7; // r13
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	unsigned int v11; // r15d
	int v12; // r14d
	__int64 v13; // r9
	_DWORD* v14; // rdx
	__int64 v15; // rcx
	unsigned __int64* v16; // rbp
	unsigned __int64 v17; // rsi
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 v23; // rdx
	__int64 v24; // r11
	unsigned __int16* v25; // r10
	__int64 v26; // r9
	_DWORD* v27; // rcx
	__int64 v28; // rdx
	__int64 v29; // r10
	__int64 v30; // r9
	_DWORD* v31; // rcx
	__int64 v32; // r9
	int v33; // r8d
	__int64 v34; // rdx
	__int64(__fastcall * *v36)(); // [rsp+20h] [rbp-78h] BYREF
	int v37; // [rsp+28h] [rbp-70h]
	__int64 v38; // [rsp+30h] [rbp-68h]
	int v39; // [rsp+38h] [rbp-60h]
	_QWORD v40[4]; // [rsp+40h] [rbp-58h] BYREF
	double v41; // [rsp+A0h] [rbp+8h]
	double v42; // [rsp+A0h] [rbp+8h]
	double v43; // [rsp+A0h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 32);
	v36 = off_140B569F0;
	v2 = *(_QWORD*)(v1 + 112);
	v38 = a1;
	v39 = 1;
	if (*(_QWORD*)(v1 + 120) >= v2)
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = 0;
	v37 = sub_1400578C0(a1);
	v7 = 80i64;
	do
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v8 = *(_QWORD*)(a1 + 16);
		v9 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(a1 + 16) += 16i64;
		v10 = sub_1400578C0(a1);
		v11 = v10 - 1;
		v12 = v10;
		v13 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v13 + 56))
		{
			if ((double)v10 == 0.0)
			{
				v14 = *(_DWORD**)(v13 + 32);
			}
			else
			{
				v41 = (double)v10;
				v14 = (_DWORD*)(*(_QWORD*)(v13 + 32)
					+ 40 * ((unsigned int)(LODWORD(v41) + HIDWORD(v41)) % (((1i64 << *(_BYTE*)(v13 + 11)) - 1) | 1)));
			}
			while (v14[6] != 3 || (double)v10 != *((double*)v14 + 2))
			{
				v14 = (_DWORD*)*((_QWORD*)v14 + 4);
				if (!v14)
				{
					v14 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v14 = (_DWORD*)(*(_QWORD*)(v13 + 24) + 16i64 * (v10 - 1));
		}
		v15 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v15 = *(_QWORD*)v14;
		*(_DWORD*)(v15 + 8) = v14[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v16 = (unsigned __int64*)sub_14018F0E0(v40, L"nTypeEnum")[1];
		if (v16)
		{
			v17 = -1i64;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v18 = *(_QWORD*)(a1 + 16);
			v19 = sub_140062650(a1, v16, v17);
			*(_DWORD*)(v18 + 8) = 4;
			*(_QWORD*)v18 = v19;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		}
		v20 = v40[1];
		*(_QWORD*)(a1 + 16) += 16i64;
		if (v20)
			sub_14018B900(v20, 0);
		v21 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v21 + 8) = 3;
		*(double*)v21 = (double)v6;
		*(_QWORD*)(a1 + 16) += 16i64;
		v22 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v22, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		v24 = *(_QWORD*)(a1 + 16) - 48i64;
		*(_QWORD*)(a1 + 16) = v24;
		v25 = *(unsigned __int16**)(v7 + qword_140C65A20);
		v26 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if (v11 >= *(_DWORD*)(v26 + 56))
		{
			if ((double)v12 == 0.0)
			{
				v27 = *(_DWORD**)(v26 + 32);
			}
			else
			{
				v42 = (double)v12;
				v23 = (unsigned int)(LODWORD(v42) + HIDWORD(v42)) % (((1i64 << *(_BYTE*)(v26 + 11)) - 1) | 1);
				v27 = (_DWORD*)(*(_QWORD*)(v26 + 32) + 40 * v23);
			}
			while (v27[6] != 3 || (double)v12 != *((double*)v27 + 2))
			{
				v27 = (_DWORD*)*((_QWORD*)v27 + 4);
				if (!v27)
				{
					v27 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v27 = (_DWORD*)(*(_QWORD*)(v26 + 24) + 16i64 * (v12 - 1));
		}
		*(_QWORD*)v24 = *(_QWORD*)v27;
		*(_DWORD*)(v24 + 8) = v27[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v23, L"strTypeName", v25);
		*(_QWORD*)(a1 + 16) -= 16i64;
		sub_1400FB1D0((__int64)&v36);
		sub_1400579E0(a1, v28, v12);
		++v6;
		v7 += 8i64;
	} while ((unsigned int)v6 < 7);
	v29 = v38;
	v30 = *(_QWORD*)(*(_QWORD*)(v38 + 32) + 160i64);
	if ((unsigned int)(v37 - 1) >= *(_DWORD*)(v30 + 56))
	{
		if ((double)v37 == 0.0)
		{
			v31 = *(_DWORD**)(v30 + 32);
		}
		else
		{
			v43 = (double)v37;
			v31 = (_DWORD*)(*(_QWORD*)(v30 + 32)
				+ 40 * ((unsigned int)(LODWORD(v43) + HIDWORD(v43)) % (((1i64 << *(_BYTE*)(v30 + 11)) - 1) | 1)));
		}
		while (v31[6] != 3 || (double)v37 != *((double*)v31 + 2))
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
		v31 = (_DWORD*)(*(_QWORD*)(v30 + 24) + 16i64 * (v37 - 1));
	}
	v32 = *(_QWORD*)(v38 + 16);
	v33 = v37;
	*(_QWORD*)v32 = *(_QWORD*)v31;
	v34 = (unsigned int)v31[2];
	*(_DWORD*)(v32 + 8) = v34;
	*(_QWORD*)(v29 + 16) += 16i64;
	sub_1400579E0(v29, v34, v33);
	return 1i64;
}
// 140703FA9: conditional instruction was optimized away because r12d.4<7u
// 14070406C: variable 'v23' is possibly undefined
// 140704089: variable 'v28' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B41D20: using guessed type wchar_t aStrtypename[12];
// 140B41D38: using guessed type wchar_t aNtypeenum[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65A20: using guessed type __int64 qword_140C65A20;

