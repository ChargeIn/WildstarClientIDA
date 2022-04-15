#include "../winhttp.h"

//----- (0000000140427960) ----------------------------------------------------
void __fastcall sub_140427960(__int64 a1, __int64 a2, unsigned int* a3, unsigned int a4)
{
	__int64 v4; // rdi
	__int64 v5; // r10
	unsigned __int64 v6; // rax
	__int64 v7; // rsi
	__int64 v10; // rbp
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned int v13; // ebx
	__int64 v14; // r13
	__int64 v15; // r12
	__int64 v16; // rdi
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // eax
	int v20; // r12d
	int v21; // r14d
	__int64 v22; // r9
	_DWORD* v23; // rdx
	__int64 v24; // rcx
	unsigned __int64* v25; // rbp
	unsigned __int64 v26; // rsi
	__int64 v27; // rbx
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rax
	__int64* v31; // rax
	unsigned int v32; // ebx
	__int64 v33; // rax
	__int64 v34; // rcx
	_QWORD* v35; // rax
	__int64 v36; // r8
	__int64 v37; // rdx
	unsigned __int16* v38; // r10
	__int64 v39; // rdx
	__int64 v40; // rdx
	double v41; // [rsp+20h] [rbp-98h]
	__int64(__fastcall * *v42)(); // [rsp+28h] [rbp-90h] BYREF
	unsigned int v43; // [rsp+30h] [rbp-88h]
	__int64 v44; // [rsp+38h] [rbp-80h]
	int v45; // [rsp+40h] [rbp-78h]
	_QWORD v46[5]; // [rsp+48h] [rbp-70h] BYREF
	__int64 v48; // [rsp+C8h] [rbp+10h]

	v4 = *(_QWORD*)(a1 + 400);
	v5 = *(_QWORD*)(v4 + 32);
	v42 = off_140B569F0;
	v6 = *(_QWORD*)(v5 + 112);
	v44 = v4;
	v7 = a4;
	v10 = a1;
	v45 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0(v4);
	v11 = *(_QWORD*)(v4 + 16);
	v12 = sub_14005C1B0(v4, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	*(_QWORD*)(v4 + 16) += 16i64;
	v13 = sub_1400578C0(v4);
	v43 = v13;
	v14 = v7;
	if ((_DWORD)v7)
	{
		v15 = a2 - (_QWORD)a3;
		v48 = v15;
		while (1)
		{
			v16 = *(_QWORD*)(v10 + 400);
			if (*(_QWORD*)(*(_QWORD*)(v16 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v16 + 32) + 112i64))
				sub_14005E2C0(*(_QWORD*)(v10 + 400));
			v17 = *(_QWORD*)(v16 + 16);
			v18 = sub_14005C1B0(v16, 0, 0);
			*(_DWORD*)(v17 + 8) = 5;
			*(_QWORD*)v17 = v18;
			*(_QWORD*)(v16 + 16) += 16i64;
			v19 = sub_1400578C0(v16);
			v20 = *(unsigned int*)((char*)a3 + v15);
			v21 = v19;
			v22 = *(_QWORD*)(*(_QWORD*)(v16 + 32) + 160i64);
			if ((unsigned int)(v19 - 1) >= *(_DWORD*)(v22 + 56))
			{
				v41 = (double)v19;
				v23 = (double)v19 == 0.0
					? *(_DWORD**)(v22 + 32)
					: (_DWORD*)(*(_QWORD*)(v22 + 32)
						+ 40 * ((unsigned int)(LODWORD(v41) + HIDWORD(v41)) % (((1i64 << *(_BYTE*)(v22 + 11)) - 1) | 1)));
				while (v23[6] != 3 || (double)v19 != *((double*)v23 + 2))
				{
					v23 = (_DWORD*)*((_QWORD*)v23 + 4);
					if (!v23)
					{
						v23 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v23 = (_DWORD*)(*(_QWORD*)(v22 + 24) + 16i64 * (v19 - 1));
			}
			v24 = *(_QWORD*)(v16 + 16);
			*(_QWORD*)v24 = *(_QWORD*)v23;
			*(_DWORD*)(v24 + 8) = v23[2];
			*(_QWORD*)(v16 + 16) += 16i64;
			v25 = (unsigned __int64*)sub_14018F0E0(v46, L"nId")[1];
			if (v25)
			{
				v26 = -1i64;
				do
					++v26;
				while (*((_BYTE*)v25 + v26));
				if (*(_QWORD*)(*(_QWORD*)(v16 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v16 + 32) + 112i64))
					sub_14005E2C0(v16);
				v27 = *(_QWORD*)(v16 + 16);
				v28 = sub_140062650(v16, v25, v26);
				*(_DWORD*)(v27 + 8) = 4;
				*(_QWORD*)v27 = v28;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v16 + 16) + 8i64) = 0;
			}
			v29 = v46[1];
			*(_QWORD*)(v16 + 16) += 16i64;
			if (v29)
				sub_14018B900(v29, 0);
			v30 = *(_QWORD*)(v16 + 16);
			*(_DWORD*)(v30 + 8) = 3;
			*(double*)v30 = (double)v20;
			*(_QWORD*)(v16 + 16) += 16i64;
			v31 = (__int64*)sub_1400580E0(v16, -3);
			sub_14005EA50(v16, v31, (int*)(*(_QWORD*)(v16 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v16 + 16) - 16i64));
			*(_QWORD*)(v16 + 16) -= 48i64;
			v32 = *a3;
			if (qword_140C63840)
				break;
			if (!dword_140C64634 && (int)sub_14024D920() >= 0)
			{
				v33 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v32);
				goto LABEL_30;
			}
		LABEL_33:
			sub_1400FB1D0((__int64)&v42);
			sub_1400579E0(v16, v39, v21);
			v10 = a1;
			v15 = v48;
			++a3;
			if (!--v14)
			{
				v4 = v44;
				v13 = v43;
				goto LABEL_35;
			}
		}
		v33 = qword_140C63840(off_140A6E3E8, v32, qword_140C63858);
	LABEL_30:
		if (v33 && sub_14034BDD0(v34, *(_DWORD*)(v33 + 4)))
		{
			v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v16 + 32) + 160i64), v21);
			v36 = *(_QWORD*)(v16 + 16);
			*(_QWORD*)v36 = *v35;
			v37 = *((unsigned int*)v35 + 2);
			*(_DWORD*)(v36 + 8) = v37;
			*(_QWORD*)(v16 + 16) += 16i64;
			sub_1400F0870(v16, v37, L"strWorldZone", v38);
			*(_QWORD*)(v16 + 16) -= 16i64;
		}
		goto LABEL_33;
	}
LABEL_35:
	sub_1400EA3E0(v10, "FriendshipLocation", byte_1409EAC9C, v13, v41, v42);
	if (v4)
		sub_1400579E0(v4, v40, v13);
}
// 140427C23: variable 'v34' is possibly undefined
// 140427C66: variable 'v38' is possibly undefined
// 140427C83: variable 'v39' is possibly undefined
// 140427CCF: variable 'v41' is possibly undefined
// 140427D07: variable 'v40' is possibly undefined
// 1409EAC9C: using guessed type _BYTE byte_1409EAC9C[24];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140B00A10: using guessed type wchar_t aStrworldzone[13];
// 140B00A30: using guessed type wchar_t aNid_5[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;

