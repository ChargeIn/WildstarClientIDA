#include "../winhttp.h"

//----- (00000001405EDFF0) ----------------------------------------------------
__int64 __fastcall sub_1405EDFF0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int* v7; // rax
	unsigned int v8; // ebp
	unsigned int v9; // r15d
	__int64 v10; // r10
	int v11; // eax
	_DWORD* v12; // r11
	int v13; // esi
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // r12d
	_QWORD* v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rdx
	int v20; // r11d
	_QWORD* v21; // rax
	__int64 v22; // r11
	__int64 v23; // rdx
	__int64 v24; // rcx
	__int64 v25; // rax
	int v26; // r14d
	__int64 v27; // rax
	__int64 v28; // r10
	_QWORD* v29; // rax
	__int64 v30; // r11
	unsigned __int64* v31; // rdx
	unsigned __int64 v32; // rbx
	unsigned __int64 v33; // r8
	__int64 v34; // rcx
	__int64* v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64 v38; // r14
	_QWORD* v39; // rax
	__int64 v40; // rdx
	int v41; // r11d
	__int64 v42; // rcx
	float v43; // xmm6_4
	_QWORD* v44; // rax
	__int64 v45; // rcx
	unsigned __int64* v46; // rdx
	__int64 v47; // rax
	__int64* v48; // rax
	_QWORD* v49; // rax
	__int64 v50; // r10
	__int64 v51; // rdx
	__int64 v53; // [rsp+20h] [rbp-48h] BYREF
	__int64 v54; // [rsp+28h] [rbp-40h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v7 = *(unsigned int**)(v5 + 112);
		v8 = *v7;
		v9 = v7[1];
		if (*(_QWORD*)(qword_140C65898 + 120)
			&& sub_1407A16F0(v6, v8)
			&& (v11 = sub_1405A76A0(v10, v9), (v13 = *v12 + v11) != 0))
		{
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v14 = a1[2];
			v15 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v14 + 8) = 5;
			*(_QWORD*)v14 = v15;
			a1[2] += 16i64;
			v16 = sub_1400578C0((__int64)a1);
			sub_1405A6C30(qword_140C65898, v9);
			v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v18 = a1[2];
			*(_QWORD*)v18 = *v17;
			*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v19, L"nChargesRemaining", v20);
			a1[2] -= 16i64;
			v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			*(_QWORD*)v22 = *v21;
			*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v23, L"nChargesMax", v13);
			v25 = qword_140C65898;
			a1[2] -= 16i64;
			if (*(_QWORD*)(v25 + 120))
			{
				v27 = sub_1407A16F0(v24, v8);
				if (v27)
					v26 = (int)(float)((float)*(int*)(v27 + 4) * *(float*)(v28 + 2564));
				else
					v26 = 0;
			}
			else
			{
				v26 = 0;
			}
			v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			*(_QWORD*)v30 = *v29;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
			a1[2] += 16i64;
			v31 = (unsigned __int64*)sub_14018F0E0(&v53, L"fRechargeTime")[1];
			v32 = -1i64;
			if (v31)
			{
				v33 = -1i64;
				do
					++v33;
				while (*((_BYTE*)v31 + v33));
				sub_140058710((__int64)a1, v31, v33);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v54)
				sub_14018B900(v54, 0);
			v34 = a1[2];
			*(_DWORD*)(v34 + 8) = 3;
			*(double*)v34 = (float)((float)v26 * 0.001);
			a1[2] += 16i64;
			v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			v37 = qword_140C65898;
			v38 = a1[2] - 48i64;
			a1[2] = v38;
			if (*(_QWORD*)(v37 + 120))
				sub_1407A16F0(v36, v8);
			v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			*(_QWORD*)v38 = *v39;
			*(_DWORD*)(v38 + 8) = *((_DWORD*)v39 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v40, L"nRechargeCount", v41);
			a1[2] -= 16i64;
			v43 = sub_1405A6F40(v42, v8);
			v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v45 = a1[2];
			*(_QWORD*)v45 = *v44;
			*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
			a1[2] += 16i64;
			v46 = (unsigned __int64*)sub_14018F0E0(&v53, L"fRechargePercentRemaining")[1];
			if (v46)
			{
				do
					++v32;
				while (*((_BYTE*)v46 + v32));
				sub_140058710((__int64)a1, v46, v32);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v54)
				sub_14018B900(v54, 0);
			v47 = a1[2];
			*(_DWORD*)(v47 + 8) = 3;
			*(double*)v47 = v43;
			a1[2] += 16i64;
			v48 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v48, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			*(_QWORD*)v50 = *v49;
			*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v51, v16);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
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
// 1405EE08F: variable 'v6' is possibly undefined
// 1405EE0A6: variable 'v10' is possibly undefined
// 1405EE0AD: variable 'v12' is possibly undefined
// 1405EE15C: variable 'v19' is possibly undefined
// 1405EE15C: variable 'v20' is possibly undefined
// 1405EE190: variable 'v22' is possibly undefined
// 1405EE1A0: variable 'v23' is possibly undefined
// 1405EE1CA: variable 'v24' is possibly undefined
// 1405EE1E4: variable 'v28' is possibly undefined
// 1405EE217: variable 'v30' is possibly undefined
// 1405EE2E0: variable 'v36' is possibly undefined
// 1405EE327: variable 'v40' is possibly undefined
// 1405EE327: variable 'v41' is possibly undefined
// 1405EE336: variable 'v42' is possibly undefined
// 1405EE42B: variable 'v50' is possibly undefined
// 1405EE43D: variable 'v51' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23AE0: using guessed type wchar_t aNrechargecount[15];
// 140B23B00: using guessed type wchar_t aFrechargeperce[26];
// 140B23B38: using guessed type wchar_t aNchargesmax[12];
// 140B23B50: using guessed type wchar_t aFrechargetime[14];
// 140B23B88: using guessed type wchar_t aNchargesremain[18];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

