#include "../winhttp.h"

//----- (00000001406FE760) ----------------------------------------------------
__int64 __fastcall sub_1406FE760(__int64 a1)
{
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int v7; // r15d
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r12d
	_QWORD* v11; // rax
	__int64 v12; // rdx
	unsigned __int16* v13; // r10
	double v14; // xmm0_8
	_QWORD* v15; // rax
	__int64 v16; // r10
	unsigned __int64* v17; // rbp
	unsigned __int64 v18; // rsi
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64* v23; // rax
	int v24; // ecx
	double v25; // xmm0_8
	_QWORD* v26; // rax
	__int64 v27; // r10
	unsigned __int64* v28; // rbp
	unsigned __int64 v29; // rsi
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rdx
	__int64* v36; // rax
	__int64 v37; // r11
	__int64 v38; // r9
	int v39; // r8d
	__int64 v40; // rdx
	__int64(__fastcall * *v41)(); // [rsp+20h] [rbp-68h] BYREF
	int v42; // [rsp+28h] [rbp-60h]
	__int64 v43; // [rsp+30h] [rbp-58h]
	int v44; // [rsp+38h] [rbp-50h]
	__int64 v45; // [rsp+40h] [rbp-48h] BYREF
	__int64 v46; // [rsp+48h] [rbp-40h]

	if (qword_140C65898)
	{
		v43 = a1;
		v3 = *(_QWORD*)(a1 + 32);
		v41 = off_140B569F0;
		v4 = *(_QWORD*)(v3 + 112);
		v44 = 1;
		if (*(_QWORD*)(v3 + 120) >= v4)
			sub_14005E2C0(a1);
		v5 = *(_QWORD*)(a1 + 16);
		v6 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(a1 + 16) += 16i64;
		v7 = 5;
		v42 = sub_1400578C0(a1);
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
			sub_140616130(v7);
			v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
			v12 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v12 = *v11;
			*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F0870(a1, v12, L"strName", v13);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v14 = sub_1407A2950(v7);
			v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
			*(_QWORD*)v16 = *v15;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v17 = (unsigned __int64*)sub_14018F0E0(&v45, L"nMin")[1];
			if (v17)
			{
				v18 = -1i64;
				do
					++v18;
				while (*((_BYTE*)v17 + v18));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v19 = *(_QWORD*)(a1 + 16);
				v20 = sub_140062650(a1, v17, v18);
				*(_DWORD*)(v19 + 8) = 4;
				*(_QWORD*)v19 = v20;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v21 = v46;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v21)
				sub_14018B900(v21, 0);
			v22 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v22 + 8) = 3;
			*(double*)v22 = (double)(int)*(float*)&v14;
			*(_QWORD*)(a1 + 16) += 16i64;
			v23 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v23, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v24 = ++v7;
			if (v7 > 0xA)
				v24 = 10;
			v25 = sub_1407A2950(v24);
			v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
			*(_QWORD*)v27 = *v26;
			*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v28 = (unsigned __int64*)sub_14018F0E0(&v45, L"nMax")[1];
			if (v28)
			{
				v29 = -1i64;
				do
					++v29;
				while (*((_BYTE*)v28 + v29));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v30 = *(_QWORD*)(a1 + 16);
				v31 = sub_140062650(a1, v28, v29);
				*(_DWORD*)(v30 + 8) = 4;
				*(_QWORD*)v30 = v31;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v32 = v46;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v32)
				sub_14018B900(v32, 0);
			v33 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v33 + 8) = 3;
			*(double*)v33 = (double)(int)*(float*)&v25;
			*(_QWORD*)(a1 + 16) += 16i64;
			v34 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v34, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			sub_1400FB1D0((__int64)&v41);
			sub_1400579E0(a1, v35, v10);
		} while (v7 < 0xB);
		v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v43 + 32) + 160i64), v42);
		v38 = *(_QWORD*)(v37 + 16);
		v39 = v42;
		v40 = *v36;
		*(_QWORD*)v38 = *v36;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v36 + 2);
		*(_QWORD*)(v37 + 16) += 16i64;
		sub_1400579E0(v37, v40, v39);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 1406FE8A1: variable 'v13' is possibly undefined
// 1406FE8D9: variable 'v16' is possibly undefined
// 1406FE9E4: variable 'v27' is possibly undefined
// 1406FEAC3: variable 'v35' is possibly undefined
// 1406FEAEB: variable 'v37' is possibly undefined
// 140B41878: using guessed type wchar_t aNmax_4[5];
// 140B41888: using guessed type wchar_t aNmin[5];
// 140B41898: using guessed type wchar_t aStrname_89[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

