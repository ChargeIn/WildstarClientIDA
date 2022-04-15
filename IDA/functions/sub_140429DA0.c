//----- (0000000140429DA0) ----------------------------------------------------
void __fastcall sub_140429DA0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // r8
	__int64 v4; // rbp
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned int v8; // esi
	unsigned int v9; // ebx
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	unsigned int v13; // r12d
	__int64 v14; // r15
	int v15; // r14d
	int v16; // r13d
	__int64 v17; // r9
	_DWORD* v18; // rdx
	__int64 v19; // rcx
	unsigned __int64* v20; // rbp
	unsigned __int64 v21; // rsi
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64* v26; // rax
	__int64 v27; // rdx
	__int64 v28; // r10
	unsigned __int16* v29; // r11
	__int64 v30; // r9
	_DWORD* v31; // rcx
	__int64 v32; // rdx
	__int64 v33; // rdx
	__int64(__fastcall * *v34)(); // [rsp+20h] [rbp-98h] BYREF
	unsigned int v35; // [rsp+28h] [rbp-90h]
	__int64 v36; // [rsp+30h] [rbp-88h]
	int v37; // [rsp+38h] [rbp-80h]
	_QWORD v38[4]; // [rsp+40h] [rbp-78h] BYREF
	int v41; // [rsp+D0h] [rbp+18h]
	double v42; // [rsp+D0h] [rbp+18h]
	double v43; // [rsp+D8h] [rbp+20h]

	v2 = *(_QWORD*)(a1 + 400);
	v3 = *(_QWORD*)(v2 + 32);
	v4 = a2;
	v34 = off_140B569F0;
	v5 = *(_QWORD*)(v3 + 112);
	v36 = v2;
	v37 = 1;
	if (*(_QWORD*)(v3 + 120) >= v5)
		sub_14005E2C0(v2);
	v6 = *(_QWORD*)(v2 + 16);
	v7 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = 0;
	v9 = sub_1400578C0(v2);
	v35 = v9;
	v41 = 0;
	if (*(_DWORD*)v4)
	{
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v10 = *(_QWORD*)(v2 + 16);
			v11 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v2 + 16) += 16i64;
			v12 = sub_1400578C0(v2);
			v13 = v12 - 1;
			v14 = 32i64 * v8;
			v15 = v12;
			v16 = *(_DWORD*)(v14 + *(_QWORD*)(v4 + 8) + 24);
			v17 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if ((unsigned int)(v12 - 1) >= *(_DWORD*)(v17 + 56))
			{
				if ((double)v12 == 0.0)
				{
					v18 = *(_DWORD**)(v17 + 32);
				}
				else
				{
					v43 = (double)v12;
					v18 = (_DWORD*)(*(_QWORD*)(v17 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v43) + HIDWORD(v43)) % (((1i64 << *(_BYTE*)(v17 + 11)) - 1) | 1)));
				}
				while (v18[6] != 3 || (double)v12 != *((double*)v18 + 2))
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
				v18 = (_DWORD*)(*(_QWORD*)(v17 + 24) + 16i64 * (v12 - 1));
			}
			v19 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v19 = *(_QWORD*)v18;
			*(_DWORD*)(v19 + 8) = v18[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v20 = (unsigned __int64*)sub_14018F0E0(v38, L"nPropertyIndex")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v22 = *(_QWORD*)(v2 + 16);
				v23 = sub_140062650(v2, v20, v21);
				v8 = v41;
				*(_DWORD*)(v22 + 8) = 4;
				*(_QWORD*)v22 = v23;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v24 = v38[1];
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v24)
				sub_14018B900(v24, 0);
			v25 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = (double)v16;
			*(_QWORD*)(v2 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v26, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			v4 = a2;
			v28 = *(_QWORD*)(v2 + 16) - 48i64;
			*(_QWORD*)(v2 + 16) = v28;
			v29 = *(unsigned __int16**)(v14 + *(_QWORD*)(a2 + 8) + 16);
			v30 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v13 >= *(_DWORD*)(v30 + 56))
			{
				if ((double)v15 == 0.0)
				{
					v31 = *(_DWORD**)(v30 + 32);
				}
				else
				{
					v42 = (double)v15;
					v27 = (unsigned int)(LODWORD(v42) + HIDWORD(v42)) % (((1i64 << *(_BYTE*)(v30 + 11)) - 1) | 1);
					v31 = (_DWORD*)(*(_QWORD*)(v30 + 32) + 40 * v27);
				}
				while (v31[6] != 3 || (double)v15 != *((double*)v31 + 2))
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
				v31 = (_DWORD*)(*(_QWORD*)(v30 + 24) + 16i64 * (v15 - 1));
			}
			*(_QWORD*)v28 = *(_QWORD*)v31;
			*(_DWORD*)(v28 + 8) = v31[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v27, L"strPlayerName", v29);
			*(_QWORD*)(v2 + 16) -= 16i64;
			sub_1400FB1D0((__int64)&v34);
			sub_1400579E0(v2, v32, v15);
			v41 = ++v8;
		} while (v8 < *(_DWORD*)a2);
		v2 = v36;
		v9 = v35;
	}
	sub_1400EA3E0(a1, "HousingCommunityPlacedResidencesListRecieved", byte_1409EC02C, v9, v34);
	if (v2)
		sub_1400579E0(v2, v33, v9);
}
// 14042A0EC: variable 'v27' is possibly undefined
// 14042A109: variable 'v32' is possibly undefined
// 14042A184: variable 'v33' is possibly undefined
// 1409EC02C: using guessed type _BYTE byte_1409EC02C[56];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B00D88: using guessed type wchar_t aStrplayername[14];
// 140B00DA8: using guessed type wchar_t aNpropertyindex[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

