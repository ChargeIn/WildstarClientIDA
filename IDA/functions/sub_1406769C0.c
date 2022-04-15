#include "../winhttp.h"

//----- (00000001406769C0) ----------------------------------------------------
__int64 __fastcall sub_1406769C0(__int64 a1, __int64 a2, int a3, float a4, float a5, int a6, float a7)
{
	float v8; // xmm8_4
	__int64 result; // rax
	__int64 v11; // rcx
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	unsigned __int16* v15; // r11
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	__int64 v19; // rsi
	unsigned __int64 v20; // rdi
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	_DWORD* v23; // rax
	__int64* v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	__int64 v28; // rsi
	unsigned __int64* v29; // rdx
	unsigned __int64 v30; // r8
	_DWORD* v31; // rax
	__int64* v32; // rax
	float v33; // xmm6_4
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	_DWORD* v39; // rax
	__int64* v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	unsigned __int64* v44; // rdx
	unsigned __int64 v45; // r8
	_DWORD* v46; // rax
	__int64* v47; // rax
	_QWORD* v48; // rax
	__int64 v49; // r10
	__int64 v50; // rdx
	int v51; // r11d
	_QWORD* v52; // rax
	__int64 v53; // r10
	__int64 v54; // rdx
	unsigned int v55; // ecx
	_QWORD* v56; // rax
	__int64 v57; // r10
	__int64 v58; // rdx
	__int64 v59; // rsi
	unsigned __int64* v60; // rdx
	unsigned __int64 v61; // r8
	__int64 v62; // rax
	__int64* v63; // rax
	int v64; // ecx
	float v65; // ecx
	_QWORD* v66; // rax
	__int64 v67; // r10
	__int64 v68; // rdx
	__int64 v69; // rsi
	unsigned __int64* v70; // rdx
	unsigned __int64 v71; // r8
	__int64 v72; // rax
	__int64* v73; // rax
	_QWORD* v74; // rax
	__int64 v75; // r10
	__int64 v76; // rdx
	__int64 v77; // rsi
	unsigned __int64* v78; // rdx
	__int64 v79; // rax
	__int64* v80; // rax
	__int64 v81; // [rsp+28h] [rbp-70h] BYREF
	__int64 v82; // [rsp+30h] [rbp-68h]

	v8 = a4;
	result = sub_1402479C0(a3);
	if (!result)
		return result;
	sub_14034BDD0(v11, *(_DWORD*)(result + 28));
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v14, L"strName", v15);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (a3 < 175)
		goto LABEL_28;
	if (a3 <= 176)
	{
		v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v36 = *(_QWORD*)(v35 + 16);
		*(_QWORD*)v36 = *v34;
		*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
		*(_QWORD*)(v35 + 16) += 16i64;
		v28 = *(_QWORD*)(a2 + 16);
		v20 = -1i64;
		v37 = (unsigned __int64*)sub_14018F0E0(&v81, L"bPercentage")[1];
		if (v37)
		{
			v38 = -1i64;
			do
				++v38;
			while (*((_BYTE*)v37 + v38));
			sub_140058710(v28, v37, v38);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v28 + 16) + 8i64) = 0;
			*(_QWORD*)(v28 + 16) += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v39 = *(_DWORD**)(v28 + 16);
		*v39 = 1;
		v39[2] = 1;
		*(_QWORD*)(v28 + 16) += 16i64;
		v40 = (__int64*)sub_1400580E0(v28, -3);
		sub_14005EA50(v28, v40, (int*)(*(_QWORD*)(v28 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v28 + 16) - 16i64));
		v8 = a4 * 100.0;
		v33 = a7 * 100.0;
		goto LABEL_36;
	}
	if (a3 == 178)
	{
		v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v18 = *(_QWORD*)(v17 + 16);
		*(_QWORD*)v18 = *v16;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
		*(_QWORD*)(v17 + 16) += 16i64;
		v19 = *(_QWORD*)(a2 + 16);
		v20 = -1i64;
		v21 = (unsigned __int64*)sub_14018F0E0(&v81, L"bSeconds")[1];
		if (v21)
		{
			v22 = -1i64;
			do
				++v22;
			while (*((_BYTE*)v21 + v22));
			sub_140058710(v19, v21, v22);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v19 + 16) + 8i64) = 0;
			*(_QWORD*)(v19 + 16) += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v23 = *(_DWORD**)(v19 + 16);
		*v23 = 1;
		v23[2] = 1;
		*(_QWORD*)(v19 + 16) += 16i64;
		v24 = (__int64*)sub_1400580E0(v19, -3);
		sub_14005EA50(v19, v24, (int*)(*(_QWORD*)(v19 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v19 + 16) - 16i64));
		*(_QWORD*)(v19 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v27 = *(_QWORD*)(v26 + 16);
		*(_QWORD*)v27 = *v25;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(v26 + 16) += 16i64;
		v28 = *(_QWORD*)(a2 + 16);
		v29 = (unsigned __int64*)sub_14018F0E0(&v81, L"bInverseCompare")[1];
		if (v29)
		{
			v30 = -1i64;
			do
				++v30;
			while (*((_BYTE*)v29 + v30));
			sub_140058710(v28, v29, v30);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v28 + 16) + 8i64) = 0;
			*(_QWORD*)(v28 + 16) += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v31 = *(_DWORD**)(v28 + 16);
		*v31 = 1;
		v31[2] = 1;
		*(_QWORD*)(v28 + 16) += 16i64;
		v32 = (__int64*)sub_1400580E0(v28, -3);
		sub_14005EA50(v28, v32, (int*)(*(_QWORD*)(v28 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v28 + 16) - 16i64));
		v8 = a4 * 0.001;
		v33 = a7 * 0.001;
	}
	else
	{
	LABEL_28:
		v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v43 = *(_QWORD*)(v42 + 16);
		*(_QWORD*)v43 = *v41;
		*(_DWORD*)(v43 + 8) = *((_DWORD*)v41 + 2);
		*(_QWORD*)(v42 + 16) += 16i64;
		v28 = *(_QWORD*)(a2 + 16);
		v20 = -1i64;
		v44 = (unsigned __int64*)sub_14018F0E0(&v81, L"bDefault")[1];
		if (v44)
		{
			v45 = -1i64;
			do
				++v45;
			while (*((_BYTE*)v44 + v45));
			sub_140058710(v28, v44, v45);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v28 + 16) + 8i64) = 0;
			*(_QWORD*)(v28 + 16) += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v46 = *(_DWORD**)(v28 + 16);
		*v46 = 1;
		v46[2] = 1;
		*(_QWORD*)(v28 + 16) += 16i64;
		v47 = (__int64*)sub_1400580E0(v28, -3);
		sub_14005EA50(v28, v47, (int*)(*(_QWORD*)(v28 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v28 + 16) - 16i64));
		v33 = a7;
	}
LABEL_36:
	*(_QWORD*)(v28 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v48 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v50 = *(_QWORD*)(v49 + 16);
	*(_QWORD*)v50 = *v48;
	*(_DWORD*)(v50 + 8) = *((_DWORD*)v48 + 2);
	*(_QWORD*)(v49 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v50, L"nSortOrder", v51);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v52 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v54 = *(_QWORD*)(v53 + 16);
	*(_QWORD*)v54 = *v52;
	*(_DWORD*)(v54 + 8) = *((_DWORD*)v52 + 2);
	*(_QWORD*)(v53 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v54, L"eProperty", a3);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v55 = 0;
	if (v8 < 0.0)
		v55 = 0x80000000;
	if ((int)abs32(v55 - LODWORD(v8)) > 84 || a6)
	{
		v56 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v58 = *(_QWORD*)(v57 + 16);
		*(_QWORD*)v58 = *v56;
		*(_DWORD*)(v58 + 8) = *((_DWORD*)v56 + 2);
		*(_QWORD*)(v57 + 16) += 16i64;
		v59 = *(_QWORD*)(a2 + 16);
		v60 = (unsigned __int64*)sub_14018F0E0(&v81, L"nValue")[1];
		if (v60)
		{
			v61 = -1i64;
			do
				++v61;
			while (*((_BYTE*)v60 + v61));
			sub_140058710(v59, v60, v61);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v59 + 16) + 8i64) = 0;
			*(_QWORD*)(v59 + 16) += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v62 = *(_QWORD*)(v59 + 16);
		*(_DWORD*)(v62 + 8) = 3;
		*(double*)v62 = v8;
		*(_QWORD*)(v59 + 16) += 16i64;
		v63 = (__int64*)sub_1400580E0(v59, -3);
		sub_14005EA50(v59, v63, (int*)(*(_QWORD*)(v59 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v59 + 16) - 16i64));
		*(_QWORD*)(v59 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	v64 = LODWORD(a5);
	if (a5 < 0.0)
		v64 = 0x80000000 - LODWORD(a5);
	if ((int)abs32(v64) > 84)
		goto LABEL_54;
	v65 = a5;
	if (a5 < 0.0)
		LODWORD(v65) = 0x80000000 - LODWORD(a5);
	if ((int)abs32(LODWORD(v65) - 1065353216) > 84)
	{
	LABEL_54:
		v66 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v68 = *(_QWORD*)(v67 + 16);
		*(_QWORD*)v68 = *v66;
		*(_DWORD*)(v68 + 8) = *((_DWORD*)v66 + 2);
		*(_QWORD*)(v67 + 16) += 16i64;
		v69 = *(_QWORD*)(a2 + 16);
		v70 = (unsigned __int64*)sub_14018F0E0(&v81, L"nScalar")[1];
		if (v70)
		{
			v71 = -1i64;
			do
				++v71;
			while (*((_BYTE*)v70 + v71));
			sub_140058710(v69, v70, v71);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v69 + 16) + 8i64) = 0;
			*(_QWORD*)(v69 + 16) += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v72 = *(_QWORD*)(v69 + 16);
		*(_DWORD*)(v72 + 8) = 3;
		*(double*)v72 = a5;
		*(_QWORD*)(v69 + 16) += 16i64;
		v73 = (__int64*)sub_1400580E0(v69, -3);
		sub_14005EA50(v69, v73, (int*)(*(_QWORD*)(v69 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v69 + 16) - 16i64));
		*(_QWORD*)(v69 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if (a6)
	{
		v74 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v76 = *(_QWORD*)(v75 + 16);
		*(_QWORD*)v76 = *v74;
		*(_DWORD*)(v76 + 8) = *((_DWORD*)v74 + 2);
		*(_QWORD*)(v75 + 16) += 16i64;
		v77 = *(_QWORD*)(a2 + 16);
		v78 = (unsigned __int64*)sub_14018F0E0(&v81, L"nDiff")[1];
		if (v78)
		{
			do
				++v20;
			while (*((_BYTE*)v78 + v20));
			sub_140058710(v77, v78, v20);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v77 + 16) + 8i64) = 0;
			*(_QWORD*)(v77 + 16) += 16i64;
		}
		if (v82)
			sub_14018B900(v82, 0);
		v79 = *(_QWORD*)(v77 + 16);
		*(_DWORD*)(v79 + 8) = 3;
		*(double*)v79 = (float)(v8 - v33);
		*(_QWORD*)(v77 + 16) += 16i64;
		v80 = (__int64*)sub_1400580E0(v77, -3);
		sub_14005EA50(v77, v80, (int*)(*(_QWORD*)(v77 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v77 + 16) - 16i64));
		*(_QWORD*)(v77 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	return 1i64;
}
// 140676A29: variable 'v11' is possibly undefined
// 140676A48: variable 'v13' is possibly undefined
// 140676A6B: variable 'v15' is possibly undefined
// 140676AB7: variable 'v17' is possibly undefined
// 140676B82: variable 'v26' is possibly undefined
// 140676C58: variable 'v35' is possibly undefined
// 140676D34: variable 'v42' is possibly undefined
// 140676E0E: variable 'v49' is possibly undefined
// 140676E31: variable 'v51' is possibly undefined
// 140676E56: variable 'v53' is possibly undefined
// 140676EED: variable 'v57' is possibly undefined
// 140677039: variable 'v67' is possibly undefined
// 140677115: variable 'v75' is possibly undefined
// 140B2FFC0: using guessed type wchar_t aStrname_66[8];
// 140B2FFD0: using guessed type wchar_t aBpercentage[12];
// 140B30208: using guessed type wchar_t aNscalar[8];
// 140B30218: using guessed type wchar_t aNdiff[6];
// 140B30228: using guessed type wchar_t aEproperty_3[10];
// 140B30240: using guessed type wchar_t aNvalue_14[7];
// 140B30250: using guessed type wchar_t aBdefault[9];
// 140B30268: using guessed type wchar_t aNsortorder[11];
// 140B30280: using guessed type wchar_t aBseconds[9];
// 140B30298: using guessed type wchar_t aBinversecompar[16];

