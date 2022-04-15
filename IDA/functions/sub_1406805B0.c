#include "../winhttp.h"

//----- (00000001406805B0) ----------------------------------------------------
__int64 __fastcall sub_1406805B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64* v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // edx
	int v7; // eax
	unsigned int* v8; // r14
	__int64 v9; // rdx
	float v10; // xmm6_4
	int v11; // ebp
	int v12; // r12d
	int v13; // r15d
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // r13d
	_QWORD* v17; // rax
	__int64 v18; // rdx
	unsigned __int64 v19; // rbx
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // r8
	_DWORD* v22; // rcx
	__int64* v23; // rax
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	_QWORD* v27; // rax
	__int64 v28; // r10
	unsigned __int64* v29; // rdx
	unsigned __int64 v30; // r8
	_DWORD* v31; // rcx
	__int64* v32; // rax
	float v33; // xmm6_4
	_QWORD* v34; // rax
	__int64 v35; // r10
	unsigned __int64* v36; // rdx
	__int64 v37; // rax
	__int64* v38; // rax
	__int64 v39; // rcx
	int v40; // edx
	_QWORD* v41; // rax
	__int64 v42; // rdx
	unsigned __int16* v43; // r10
	_QWORD* v44; // rax
	__int64 v45; // r10
	__int64 v46; // rdx
	__int64 v48; // [rsp+20h] [rbp-58h] BYREF
	__int64 v49; // [rsp+28h] [rbp-50h]
	float v50; // [rsp+88h] [rbp+10h] BYREF

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& qword_140C65970
		&& *(_DWORD*)(qword_140C65970 + 8) == 1
		&& (v4 = *(__int64**)(v3 + 48), v5 = *v4, *(_DWORD*)(*v4 + 12) == 27)
		&& (v6 = *(_DWORD*)(v5 + 12), v6 <= 0x1B)
		&& (v7 = 134250504, _bittest(&v7, v6))
		&& sub_140721EF0(v5, *(_DWORD*)(v5 + 20)))
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 56i64))(v3)
			|| (v8 = (unsigned int*)sub_14077CCE0((_QWORD**)v3, 0i64)) == 0i64)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		else
		{
			v9 = *(_QWORD*)v3;
			v10 = 0.0;
			v11 = 0;
			v12 = 0;
			v13 = 0;
			v50 = 0.0;
			if ((*(unsigned int(__fastcall**)(__int64))(v9 + 56))(v3)
				|| (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 80i64))(v3, v8[2]))
			{
				v11 = 4;
				v12 = 1;
			}
			else
			{
				v13 = sub_140720B10((__int64)v8, (__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64), &v50);
				v10 = v50;
				if (v50 > *(float*)&dword_140C4ABE8)
					v11 = (int)(float)(v50 * 4.0) + 1;
			}
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v14 = a1[2];
			v15 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v14 + 8) = 5;
			*(_QWORD*)v14 = v15;
			a1[2] += 16i64;
			v16 = sub_1400578C0((__int64)a1);
			v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v18 = a1[2];
			*(_QWORD*)v18 = *v17;
			*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
			a1[2] += 16i64;
			v19 = -1i64;
			v20 = (unsigned __int64*)sub_14018F0E0(&v48, L"bCanPlace")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				sub_140058710((__int64)a1, v20, v21);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v49)
				sub_14018B900(v49, 0);
			v22 = (_DWORD*)a1[2];
			v22[2] = 1;
			*v22 = v13 != 0;
			a1[2] += 16i64;
			v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			*(_QWORD*)v25 = *v24;
			*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v26, L"eState", v11);
			a1[2] -= 16i64;
			v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			a1[2] += 16i64;
			v29 = (unsigned __int64*)sub_14018F0E0(&v48, L"bIsCompleted")[1];
			if (v29)
			{
				v30 = -1i64;
				do
					++v30;
				while (*((_BYTE*)v29 + v30));
				sub_140058710((__int64)a1, v29, v30);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v49)
				sub_14018B900(v49, 0);
			v31 = (_DWORD*)a1[2];
			v31[2] = 1;
			*v31 = v12 != 0;
			a1[2] += 16i64;
			v32 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v32, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v33 = v10 / *(float*)&dword_140C4AC48;
			v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			*(_QWORD*)v35 = *v34;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
			a1[2] += 16i64;
			v36 = (unsigned __int64*)sub_14018F0E0(&v48, L"fRatio")[1];
			if (v36)
			{
				do
					++v19;
				while (*((_BYTE*)v36 + v19));
				sub_140058710((__int64)a1, v36, v19);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v49)
				sub_14018B900(v49, 0);
			v37 = a1[2];
			*(_DWORD*)(v37 + 8) = 3;
			*(double*)v37 = v33;
			a1[2] += 16i64;
			v38 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v38, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v39 = *(unsigned int*)(*(_QWORD*)v8 + 16i64);
			v40 = 134681;
			if ((_DWORD)v39)
				v40 = *(_DWORD*)(*(_QWORD*)v8 + 16i64);
			sub_14034BDD0(v39, v40);
			v41 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v42 = a1[2];
			*(_QWORD*)v42 = *v41;
			*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v42, L"strButton", v43);
			a1[2] -= 16i64;
			v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			*(_QWORD*)v45 = *v44;
			*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v46, v16);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14068082A: variable 'v25' is possibly undefined
// 14068083C: variable 'v26' is possibly undefined
// 140680867: variable 'v28' is possibly undefined
// 14068093F: variable 'v35' is possibly undefined
// 140680A2D: variable 'v43' is possibly undefined
// 140680A54: variable 'v45' is possibly undefined
// 140680A66: variable 'v46' is possibly undefined
// 140B31930: using guessed type wchar_t aBiscompleted_2[13];
// 140B31950: using guessed type wchar_t aFratio_1[7];
// 140B31960: using guessed type wchar_t aBcanplace_0[10];
// 140B31978: using guessed type wchar_t aEstate_1[7];
// 140B31B80: using guessed type wchar_t aStrbutton[10];
// 140C4ABE8: using guessed type int dword_140C4ABE8;
// 140C4AC48: using guessed type int dword_140C4AC48;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

