#include "../winhttp.h"

//----- (0000000140651400) ----------------------------------------------------
__int64 __fastcall sub_140651400(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
	__int64 v4; // r10
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // eax
	__int64 v12; // rdx
	__int64 v13; // rax
	__int64(__fastcall * *v14)(); // rax
	__int64 v15; // rdx
	__int64 v16; // r10
	int v17; // edx
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	int v21; // eax
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	int v25; // r11d
	float v26; // xmm7_4
	__int64 v27; // rax
	float v28; // xmm6_4
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	__int64 v32; // rsi
	unsigned __int64 v33; // rbx
	unsigned __int64* v34; // rdx
	unsigned __int64 v35; // r8
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // r10
	__int64 v41; // rdx
	__int64 v42; // rsi
	unsigned __int64* v43; // rdx
	__int64 v44; // rax
	__int64* v45; // rax
	__int64 v46; // rcx
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	unsigned __int16* v50; // r11
	_QWORD* v51; // rax
	__int64 v52; // r10
	__int64 v53; // rdx
	int v54; // r11d
	__int64(__fastcall * *v56)(); // [rsp+20h] [rbp-60h] BYREF
	int v57; // [rsp+28h] [rbp-58h]
	__int64 v58; // [rsp+30h] [rbp-50h]
	int v59; // [rsp+38h] [rbp-48h]
	__int64 v60; // [rsp+40h] [rbp-40h] BYREF
	__int64 v61; // [rsp+48h] [rbp-38h]

	v4 = *(_QWORD*)(a2 + 32);
	v58 = a2;
	v59 = 1;
	v57 = -2;
	v56 = off_140B569F0;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0(a2);
	v9 = *(_QWORD*)(a2 + 16);
	v10 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(a2 + 16) += 16i64;
	v11 = sub_1400578C0(a2);
	v12 = v11;
	v57 = v11;
	if (a4)
	{
		v21 = a4[9];
		if ((v21 & 4) == 0 || (v21 & 8) != 0)
		{
			sub_1400FA770(a1, (__int64)&v56);
		}
		else
		{
			v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v58 + 32) + 160i64), v12);
			v24 = *(_QWORD*)(v23 + 16);
			*(_QWORD*)v24 = *v22;
			*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
			*(_QWORD*)(v23 + 16) += 16i64;
			sub_1400F06F0(v58, v24, L"idProperty", v25);
			v26 = 0.0;
			*(_QWORD*)(v58 + 16) -= 16i64;
			v27 = *a4;
			if ((unsigned int)v27 > 0xC4)
				v28 = 0.0;
			else
				v28 = *(float*)(a3 + 8 * v27 + 1476);
			v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v58 + 32) + 160i64), v57);
			v31 = *(_QWORD*)(v30 + 16);
			*(_QWORD*)v31 = *v29;
			*(_DWORD*)(v31 + 8) = *((_DWORD*)v29 + 2);
			*(_QWORD*)(v30 + 16) += 16i64;
			v32 = v58;
			v33 = -1i64;
			v34 = (unsigned __int64*)sub_14018F0E0(&v60, L"fValue")[1];
			if (v34)
			{
				v35 = -1i64;
				do
					++v35;
				while (*((_BYTE*)v34 + v35));
				sub_140058710(v58, v34, v35);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v58 + 16) + 8i64) = 0;
				*(_QWORD*)(v32 + 16) += 16i64;
			}
			if (v61)
				sub_14018B900(v61, 0);
			v36 = *(_QWORD*)(v32 + 16);
			*(_DWORD*)(v36 + 8) = 3;
			*(double*)v36 = v28;
			*(_QWORD*)(v32 + 16) += 16i64;
			v37 = (__int64*)sub_1400580E0(v32, -3);
			sub_14005EA50(v32, v37, (int*)(*(_QWORD*)(v32 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v32 + 16) - 16i64));
			*(_QWORD*)(v32 + 16) -= 32i64;
			*(_QWORD*)(v58 + 16) -= 16i64;
			v38 = *a4;
			if ((unsigned int)v38 <= 0xC4)
				v26 = *(float*)(a3 + 8 * v38 + 1472);
			v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v58 + 32) + 160i64), v57);
			v41 = *(_QWORD*)(v40 + 16);
			*(_QWORD*)v41 = *v39;
			*(_DWORD*)(v41 + 8) = *((_DWORD*)v39 + 2);
			*(_QWORD*)(v40 + 16) += 16i64;
			v42 = v58;
			v43 = (unsigned __int64*)sub_14018F0E0(&v60, L"fBase")[1];
			if (v43)
			{
				do
					++v33;
				while (*((_BYTE*)v43 + v33));
				sub_140058710(v58, v43, v33);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v58 + 16) + 8i64) = 0;
				*(_QWORD*)(v42 + 16) += 16i64;
			}
			if (v61)
				sub_14018B900(v61, 0);
			v44 = *(_QWORD*)(v42 + 16);
			*(_DWORD*)(v44 + 8) = 3;
			*(double*)v44 = v26;
			*(_QWORD*)(v42 + 16) += 16i64;
			v45 = (__int64*)sub_1400580E0(v42, -3);
			sub_14005EA50(v42, v45, (int*)(*(_QWORD*)(v42 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v42 + 16) - 16i64));
			*(_QWORD*)(v42 + 16) -= 32i64;
			*(_QWORD*)(v58 + 16) -= 16i64;
			sub_14034BDD0(v46, a4[7]);
			v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v58 + 32) + 160i64), v57);
			v49 = *(_QWORD*)(v48 + 16);
			*(_QWORD*)v49 = *v47;
			*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
			*(_QWORD*)(v48 + 16) += 16i64;
			sub_1400F0870(v58, v49, L"strDisplayName", v50);
			*(_QWORD*)(v58 + 16) -= 16i64;
			v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v58 + 32) + 160i64), v57);
			v53 = *(_QWORD*)(v52 + 16);
			*(_QWORD*)v53 = *v51;
			*(_DWORD*)(v53 + 8) = *((_DWORD*)v51 + 2);
			*(_QWORD*)(v52 + 16) += 16i64;
			sub_1400F06F0(v58, v53, L"nTooltipDisplayOrder", v54);
			*(_QWORD*)(v58 + 16) -= 16i64;
			sub_1400FA770(a1, (__int64)&v56);
		}
	}
	else
	{
		v13 = v58;
		*(_QWORD*)a1 = off_140B569F0;
		*(_QWORD*)(a1 + 16) = v13;
		v14 = v56;
		*(_DWORD*)(a1 + 24) = 1;
		*(_DWORD*)(a1 + 8) = -2;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)(), __int64))v14[1])(&v56, v12))
		{
			v16 = v58;
			v17 = v57;
			*(_DWORD*)(a1 + 24) = v59;
			v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v16 + 32) + 160i64), v17);
			v20 = *(_QWORD*)(v19 + 16);
			*(_QWORD*)v20 = *v18;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v18 + 2);
			*(_QWORD*)(v19 + 16) += 16i64;
			*(_DWORD*)(a1 + 8) = sub_1400578C0(*(_QWORD*)(a1 + 16));
		}
	}
	v56 = off_140B56A08;
	if (v58)
		sub_1400579E0(v58, v15, v57);
	return a1;
}
// 1406514DD: variable 'v19' is possibly undefined
// 140651552: variable 'v23' is possibly undefined
// 140651575: variable 'v25' is possibly undefined
// 1406515B6: variable 'v30' is possibly undefined
// 14065169F: variable 'v40' is possibly undefined
// 140651755: variable 'v46' is possibly undefined
// 140651774: variable 'v48' is possibly undefined
// 140651797: variable 'v50' is possibly undefined
// 1406517C0: variable 'v52' is possibly undefined
// 1406517E3: variable 'v54' is possibly undefined
// 14065181A: variable 'v15' is possibly undefined
// 140B2C590: using guessed type wchar_t aNtooltipdispla[21];
// 140B2C5C0: using guessed type wchar_t aFbase[6];
// 140B2C5D0: using guessed type wchar_t aStrdisplayname_1[15];
// 140B2C5F0: using guessed type wchar_t aIdproperty[11];
// 140B2C608: using guessed type wchar_t aFvalue_0[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

