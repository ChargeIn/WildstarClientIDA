#include "../winhttp.h"

//----- (00000001404297C0) ----------------------------------------------------
void __fastcall sub_1404297C0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbp
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rcx
	unsigned int v9; // edi
	__int64 v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	int v14; // r12d
	unsigned int v15; // r15d
	__int64 v16; // r9
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
	int v30; // r12d
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
	__int64 j; // rax
	__int64 v43; // rdx
	__int64(__fastcall * *v44)(); // [rsp+20h] [rbp-88h] BYREF
	int v45; // [rsp+28h] [rbp-80h]
	__int64 v46; // [rsp+30h] [rbp-78h]
	int v47; // [rsp+38h] [rbp-70h]
	__int64 v48; // [rsp+40h] [rbp-68h] BYREF
	__int64 v49; // [rsp+48h] [rbp-60h]
	double v51; // [rsp+B8h] [rbp+10h]
	double v52; // [rsp+B8h] [rbp+10h]

	v1 = *(_QWORD*)(a1 + 400);
	v2 = *(_QWORD*)(v1 + 32);
	v44 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v46 = v1;
	v4 = a1;
	v47 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v5 = *(_QWORD*)(v1 + 16);
	v6 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v1 + 16) += 16i64;
	v7 = sub_1400578C0(v1);
	v8 = *(_QWORD*)(v4 + 6072);
	v9 = v7;
	v45 = v7;
	v10 = *(_QWORD*)(v8 + 16);
	if (v10 != v8)
	{
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
				sub_14005E2C0(v1);
			v11 = *(_QWORD*)(v1 + 16);
			v12 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(v1 + 16) += 16i64;
			v13 = sub_1400578C0(v1);
			v14 = *(_DWORD*)(v10 + 32);
			v15 = v13 - 1;
			v16 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v17 = v13;
			if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v16 + 56))
			{
				if ((double)v13 == 0.0)
				{
					v18 = *(_DWORD**)(v16 + 32);
				}
				else
				{
					v51 = (double)v13;
					v18 = (_DWORD*)(*(_QWORD*)(v16 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v51) + HIDWORD(v51)) % (((1i64 << *(_BYTE*)(v16 + 11)) - 1) | 1)));
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
				v18 = (_DWORD*)(*(_QWORD*)(v16 + 24) + 16i64 * (v13 - 1));
			}
			v19 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v19 = *(_QWORD*)v18;
			*(_DWORD*)(v19 + 8) = v18[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v20 = (unsigned __int64*)sub_14018F0E0(&v48, L"eRewardProperty")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v22 = *(_QWORD*)(v1 + 16);
				v23 = sub_140062650(v1, v20, v21);
				*(_DWORD*)(v22 + 8) = 4;
				*(_QWORD*)v22 = v23;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v24 = v49;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v24)
				sub_14018B900(v24, 0);
			v25 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = (double)v14;
			*(_QWORD*)(v1 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v26, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			v27 = *(_QWORD*)(v1 + 32);
			v28 = *(_QWORD*)(v1 + 16) - 48i64;
			*(_QWORD*)(v1 + 16) = v28;
			v29 = *(_QWORD*)(v27 + 160);
			v30 = *(_DWORD*)(v10 + 36);
			if (v15 >= *(_DWORD*)(v29 + 56))
			{
				if ((double)v17 == 0.0)
				{
					v31 = *(_DWORD**)(v29 + 32);
				}
				else
				{
					v52 = (double)v17;
					v31 = (_DWORD*)(*(_QWORD*)(v29 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v52) + HIDWORD(v52)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
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
			*(_QWORD*)(v1 + 16) += 16i64;
			v32 = (unsigned __int64*)sub_14018F0E0(&v48, L"nObjectId")[1];
			if (v32)
			{
				v33 = -1i64;
				do
					++v33;
				while (*((_BYTE*)v32 + v33));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v34 = *(_QWORD*)(v1 + 16);
				v35 = sub_140062650(v1, v32, v33);
				*(_DWORD*)(v34 + 8) = 4;
				*(_QWORD*)v34 = v35;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v36 = v49;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v36)
				sub_14018B900(v36, 0);
			v37 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v37 + 8) = 3;
			*(double*)v37 = (double)v30;
			*(_QWORD*)(v1 + 16) += 16i64;
			v38 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v38, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			*(_QWORD*)(v1 + 16) -= 48i64;
			sub_1400FB1D0((__int64)&v44);
			sub_1400579E0(v1, v39, v17);
			v40 = *(_QWORD*)(v10 + 24);
			if (v40)
			{
				v10 = *(_QWORD*)(v10 + 24);
				for (i = *(_QWORD*)(v40 + 16); i; i = *(_QWORD*)(i + 16))
					v10 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v10 = j;
				if (*(_QWORD*)(v10 + 24) != j)
					v10 = j;
			}
			v4 = a1;
		} while (v10 != *(_QWORD*)(a1 + 6072));
		v1 = v46;
		v9 = v45;
	}
	sub_140008410(v4 + 6064);
	sub_1400EA3E0(v4, "UpdateRewardProperties", byte_1409EB9CC, v9, v44);
	if (v1)
		sub_1400579E0(v1, v43, v9);
}
// 140429BBB: variable 'v39' is possibly undefined
// 140429C92: variable 'v43' is possibly undefined
// 1409EB9CC: using guessed type _BYTE byte_1409EB9CC[24];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B00D40: using guessed type wchar_t aNobjectid[10];
// 140B00D58: using guessed type wchar_t aErewardpropert[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

