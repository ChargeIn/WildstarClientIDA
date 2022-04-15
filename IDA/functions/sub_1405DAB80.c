#include "../winhttp.h"

//----- (00000001405DAB80) ----------------------------------------------------
__int64 __fastcall sub_1405DAB80(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	__int64 result; // rax
	BOOL v9; // r14d
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	__int64 v13; // rsi
	unsigned __int64 v14; // rbx
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	BOOL* v17; // rcx
	__int64* v18; // rax
	int v19; // ecx
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	int v28; // ecx
	unsigned __int64 v29; // rdx
	float v30; // xmm6_4
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	__int64 v34; // rsi
	unsigned __int64* v35; // rdx
	unsigned __int64 v36; // r8
	__int64 v37; // rax
	__int64* v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // r10
	__int64 v41; // rdx
	unsigned __int64* v42; // rdx
	unsigned __int64 v43; // r8
	__int64 v44; // rax
	__int64* v45; // rax
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	unsigned __int16* v49; // r11
	_QWORD* v50; // rax
	__int64 v51; // r10
	__int64 v52; // rdx
	int v53; // r11d
	_QWORD* v54; // rax
	__int64 v55; // r10
	__int64 v56; // rdx
	_QWORD* v57; // rax
	__int64 v58; // r10
	__int64 v59; // rdx
	_QWORD* v60; // rax
	__int64 v61; // r10
	__int64 v62; // rdx
	unsigned __int16* v63; // r11
	_QWORD* v64; // rax
	__int64 v65; // r10
	__int64 v66; // rdx
	int v67; // r11d
	int v68; // ecx
	int v69; // ecx
	int v70; // ecx
	_QWORD* v71; // rax
	__int64 v72; // r10
	__int64 v73; // rdx
	__int64 v74; // rsi
	unsigned __int64* v75; // rdx
	unsigned __int64 v76; // r8
	_DWORD* v77; // rax
	__int64* v78; // rax
	_QWORD* v79; // rax
	__int64 v80; // r10
	__int64 v81; // rdx
	__int64 v82; // rsi
	unsigned __int64* v83; // rdx
	_QWORD* v84; // rax
	__int64 v85; // r10
	__int64 v86; // rdx
	_QWORD* v87; // rax
	__int64 v88; // r10
	__int64 v89; // rdx
	_QWORD* v90; // rax
	__int64 v91; // r10
	__int64 v92; // rdx
	_DWORD* v93; // rax
	__int64* v94; // rax
	__int64 v95; // [rsp+20h] [rbp-48h] BYREF
	__int64 v96; // [rsp+28h] [rbp-40h]
	float v97; // [rsp+70h] [rbp+8h] BYREF

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v6, L"nId", v7);
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	if (!*(_DWORD*)(a1 + 256))
		return result;
	v9 = *(_QWORD*)a1 < 0x1000000000000ui64;
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v12 = *(_QWORD*)(v11 + 16);
	*(_QWORD*)v12 = *v10;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v11 + 16) += 16i64;
	v13 = *(_QWORD*)(a2 + 16);
	v14 = -1i64;
	v15 = (unsigned __int64*)sub_14018F0E0(&v95, L"bTemporary")[1];
	if (v15)
	{
		v16 = -1i64;
		do
			++v16;
		while (*((_BYTE*)v15 + v16));
		sub_140058710(v13, v15, v16);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v13 + 16) + 8i64) = 0;
		*(_QWORD*)(v13 + 16) += 16i64;
	}
	if (v96)
		sub_14018B900(v96, 0);
	v17 = *(BOOL**)(v13 + 16);
	v17[2] = 1;
	*v17 = v9;
	*(_QWORD*)(v13 + 16) += 16i64;
	v18 = (__int64*)sub_1400580E0(v13, -3);
	sub_14005EA50(v13, v18, (int*)(*(_QWORD*)(v13 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v13 + 16) - 16i64));
	*(_QWORD*)(v13 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v19 = *(_DWORD*)(a1 + 208);
	if ((!v19 || v19 == 4 || v19 == 3) && *(_DWORD*)(a1 + 244))
	{
		v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v22 = *(_QWORD*)(v21 + 16);
		*(_QWORD*)v22 = *v20;
		*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
		*(_QWORD*)(v21 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v22, L"nClassId", v23);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v26 = *(_QWORD*)(v25 + 16);
		*(_QWORD*)v26 = *v24;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
		*(_QWORD*)(v25 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v26, L"nPathId", v27);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	v28 = *(_DWORD*)(a1 + 208);
	if (!v28 || v28 == 4)
	{
		if (*(_DWORD*)(a1 + 248))
		{
			v29 = *(_QWORD*)(a1 + 200);
			v30 = 0.0;
			v97 = 0.0;
			if (v29)
			{
				sub_1401E83A0(&v97, v29);
				if (v97 >= 0.0)
					v30 = 0.000001;
				else
					v30 = -v97;
			}
			v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v33 = *(_QWORD*)(v32 + 16);
			*(_QWORD*)v33 = *v31;
			*(_DWORD*)(v33 + 8) = *((_DWORD*)v31 + 2);
			*(_QWORD*)(v32 + 16) += 16i64;
			v34 = *(_QWORD*)(a2 + 16);
			v35 = (unsigned __int64*)sub_14018F0E0(&v95, L"fLastOnline")[1];
			if (v35)
			{
				v36 = -1i64;
				do
					++v36;
				while (*((_BYTE*)v35 + v36));
				sub_140058710(v34, v35, v36);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v34 + 16) + 8i64) = 0;
				*(_QWORD*)(v34 + 16) += 16i64;
			}
			if (v96)
				sub_14018B900(v96, 0);
			v37 = *(_QWORD*)(v34 + 16);
			*(_DWORD*)(v37 + 8) = 3;
			*(double*)v37 = v30;
			*(_QWORD*)(v34 + 16) += 16i64;
			v38 = (__int64*)sub_1400580E0(v34, -3);
			sub_14005EA50(v34, v38, (int*)(*(_QWORD*)(v34 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v34 + 16) - 16i64));
		}
		else
		{
			v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v41 = *(_QWORD*)(v40 + 16);
			*(_QWORD*)v41 = *v39;
			*(_DWORD*)(v41 + 8) = *((_DWORD*)v39 + 2);
			*(_QWORD*)(v40 + 16) += 16i64;
			v34 = *(_QWORD*)(a2 + 16);
			v42 = (unsigned __int64*)sub_14018F0E0(&v95, L"fLastOnline")[1];
			if (v42)
			{
				v43 = -1i64;
				do
					++v43;
				while (*((_BYTE*)v42 + v43));
				sub_140058710(v34, v42, v43);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v34 + 16) + 8i64) = 0;
				*(_QWORD*)(v34 + 16) += 16i64;
			}
			if (v96)
				sub_14018B900(v96, 0);
			v44 = *(_QWORD*)(v34 + 16);
			*(_QWORD*)v44 = 0i64;
			*(_DWORD*)(v44 + 8) = 3;
			*(_QWORD*)(v34 + 16) += 16i64;
			v45 = (__int64*)sub_1400580E0(v34, -3);
			sub_14005EA50(v34, v45, (int*)(*(_QWORD*)(v34 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v34 + 16) - 16i64));
		}
		*(_QWORD*)(v34 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		if (sub_1405DA960(*(_DWORD*)(a1 + 236)))
		{
			v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v48 = *(_QWORD*)(v47 + 16);
			*(_QWORD*)v48 = *v46;
			*(_DWORD*)(v48 + 8) = *((_DWORD*)v46 + 2);
			*(_QWORD*)(v47 + 16) += 16i64;
			sub_1400F0870(*(_QWORD*)(a2 + 16), v48, L"strWorldZone", v49);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v50 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v52 = *(_QWORD*)(v51 + 16);
		*(_QWORD*)v52 = *v50;
		*(_DWORD*)(v52 + 8) = *((_DWORD*)v50 + 2);
		*(_QWORD*)(v51 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v52, L"nLevel", v53);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if (*(_WORD*)(a1 + 12))
	{
		v54 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v56 = *(_QWORD*)(v55 + 16);
		*(_QWORD*)v56 = *v54;
		*(_DWORD*)(v56 + 8) = *((_DWORD*)v54 + 2);
		*(_QWORD*)(v55 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v56, L"strCharacterName", (unsigned __int16*)(a1 + 12));
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if (*(_WORD*)(a1 + 78))
	{
		v57 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v59 = *(_QWORD*)(v58 + 16);
		*(_QWORD*)v59 = *v57;
		*(_DWORD*)(v59 + 8) = *((_DWORD*)v57 + 2);
		*(_QWORD*)(v58 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v59, L"strRealmName", (unsigned __int16*)(a1 + 78));
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v62 = *(_QWORD*)(v61 + 16);
	*(_QWORD*)v62 = *v60;
	*(_DWORD*)(v62 + 8) = *((_DWORD*)v60 + 2);
	*(_QWORD*)(v61 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v62, L"strNote", v63);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v64 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v66 = *(_QWORD*)(v65 + 16);
	*(_QWORD*)v66 = *v64;
	*(_DWORD*)(v66 + 8) = *((_DWORD*)v64 + 2);
	*(_QWORD*)(v65 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v66, L"nFactionId", v67);
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	v68 = *(_DWORD*)(a1 + 208);
	if (!v68)
	{
		v90 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v92 = *(_QWORD*)(v91 + 16);
		*(_QWORD*)v92 = *v90;
		*(_DWORD*)(v92 + 8) = *((_DWORD*)v90 + 2);
		*(_QWORD*)(v91 + 16) += 16i64;
		v82 = *(_QWORD*)(a2 + 16);
		v83 = (unsigned __int64*)sub_14018F0E0(&v95, L"bFriend")[1];
		if (!v83)
		{
			*(_DWORD*)(*(_QWORD*)(v82 + 16) + 8i64) = 0;
			*(_QWORD*)(v82 + 16) += 16i64;
			goto LABEL_71;
		}
		do
			++v14;
		while (*((_BYTE*)v83 + v14));
		goto LABEL_70;
	}
	v69 = v68 - 1;
	if (!v69)
	{
		v87 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v89 = *(_QWORD*)(v88 + 16);
		*(_QWORD*)v89 = *v87;
		*(_DWORD*)(v89 + 8) = *((_DWORD*)v87 + 2);
		*(_QWORD*)(v88 + 16) += 16i64;
		v82 = *(_QWORD*)(a2 + 16);
		v83 = (unsigned __int64*)sub_14018F0E0(&v95, L"bIgnore")[1];
		if (!v83)
		{
			*(_DWORD*)(*(_QWORD*)(v82 + 16) + 8i64) = 0;
			*(_QWORD*)(v82 + 16) += 16i64;
			goto LABEL_71;
		}
		do
			++v14;
		while (*((_BYTE*)v83 + v14));
		goto LABEL_70;
	}
	v70 = v69 - 2;
	if (!v70)
	{
		v84 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v86 = *(_QWORD*)(v85 + 16);
		*(_QWORD*)v86 = *v84;
		*(_DWORD*)(v86 + 8) = *((_DWORD*)v84 + 2);
		*(_QWORD*)(v85 + 16) += 16i64;
		v82 = *(_QWORD*)(a2 + 16);
		v83 = (unsigned __int64*)sub_14018F0E0(&v95, L"bRival")[1];
		if (!v83)
		{
			*(_DWORD*)(*(_QWORD*)(v82 + 16) + 8i64) = 0;
			*(_QWORD*)(v82 + 16) += 16i64;
			goto LABEL_71;
		}
		do
			++v14;
		while (*((_BYTE*)v83 + v14));
	LABEL_70:
		sub_140058710(v82, v83, v14);
		goto LABEL_71;
	}
	if (v70 != 1)
		return result;
	v71 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v73 = *(_QWORD*)(v72 + 16);
	*(_QWORD*)v73 = *v71;
	*(_DWORD*)(v73 + 8) = *((_DWORD*)v71 + 2);
	*(_QWORD*)(v72 + 16) += 16i64;
	v74 = *(_QWORD*)(a2 + 16);
	v75 = (unsigned __int64*)sub_14018F0E0(&v95, L"bFriend")[1];
	if (v75)
	{
		v76 = -1i64;
		do
			++v76;
		while (*((_BYTE*)v75 + v76));
		sub_140058710(v74, v75, v76);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v74 + 16) + 8i64) = 0;
		*(_QWORD*)(v74 + 16) += 16i64;
	}
	if (v96)
		sub_14018B900(v96, 0);
	v77 = *(_DWORD**)(v74 + 16);
	*v77 = 1;
	v77[2] = 1;
	*(_QWORD*)(v74 + 16) += 16i64;
	v78 = (__int64*)sub_1400580E0(v74, -3);
	sub_14005EA50(v74, v78, (int*)(*(_QWORD*)(v74 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v74 + 16) - 16i64));
	*(_QWORD*)(v74 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v79 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v81 = *(_QWORD*)(v80 + 16);
	*(_QWORD*)v81 = *v79;
	*(_DWORD*)(v81 + 8) = *((_DWORD*)v79 + 2);
	*(_QWORD*)(v80 + 16) += 16i64;
	v82 = *(_QWORD*)(a2 + 16);
	v83 = (unsigned __int64*)sub_14018F0E0(&v95, L"bRival")[1];
	if (v83)
	{
		do
			++v14;
		while (*((_BYTE*)v83 + v14));
		goto LABEL_70;
	}
	*(_DWORD*)(*(_QWORD*)(v82 + 16) + 8i64) = 0;
	*(_QWORD*)(v82 + 16) += 16i64;
LABEL_71:
	if (v96)
		sub_14018B900(v96, 0);
	v93 = *(_DWORD**)(v82 + 16);
	*v93 = 1;
	v93[2] = 1;
	*(_QWORD*)(v82 + 16) += 16i64;
	v94 = (__int64*)sub_1400580E0(v82, -3);
	sub_14005EA50(v82, v94, (int*)(*(_QWORD*)(v82 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v82 + 16) - 16i64));
	*(_QWORD*)(v82 + 16) -= 32i64;
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 1405DAD1E: conditional instruction was optimized away because ecx.4 is in (1..2|>=5u)
// 1405DABA8: variable 'v5' is possibly undefined
// 1405DABCB: variable 'v7' is possibly undefined
// 1405DAC32: variable 'v11' is possibly undefined
// 1405DAD4F: variable 'v21' is possibly undefined
// 1405DAD72: variable 'v23' is possibly undefined
// 1405DAD9E: variable 'v25' is possibly undefined
// 1405DADC1: variable 'v27' is possibly undefined
// 1405DAE51: variable 'v32' is possibly undefined
// 1405DAF18: variable 'v40' is possibly undefined
// 1405DAFF1: variable 'v47' is possibly undefined
// 1405DB014: variable 'v49' is possibly undefined
// 1405DB040: variable 'v51' is possibly undefined
// 1405DB063: variable 'v53' is possibly undefined
// 1405DB08F: variable 'v55' is possibly undefined
// 1405DB0DF: variable 'v58' is possibly undefined
// 1405DB12F: variable 'v61' is possibly undefined
// 1405DB152: variable 'v63' is possibly undefined
// 1405DB17E: variable 'v65' is possibly undefined
// 1405DB1A1: variable 'v67' is possibly undefined
// 1405DB1ED: variable 'v72' is possibly undefined
// 1405DB2B3: variable 'v80' is possibly undefined
// 1405DB325: variable 'v85' is possibly undefined
// 1405DB395: variable 'v88' is possibly undefined
// 1405DB3F9: variable 'v91' is possibly undefined
// 140B228A0: using guessed type wchar_t aStrnote_1[8];
// 140B228B0: using guessed type wchar_t aNfactionid_0[11];
// 140B228C8: using guessed type wchar_t aStrcharacterna_0[17];
// 140B228F0: using guessed type wchar_t aStrrealmname_1[13];
// 140B22910: using guessed type wchar_t aStrworldzone_1[13];
// 140B22930: using guessed type wchar_t aNlevel_6[7];
// 140B22940: using guessed type wchar_t aFlastonline_1[12];
// 140B22958: using guessed type wchar_t aFlastonline_2[12];
// 140B22970: using guessed type wchar_t aNclassid_0[9];
// 140B22988: using guessed type wchar_t aNpathid_0[8];
// 140B22998: using guessed type wchar_t aNid_19[4];
// 140B229A0: using guessed type wchar_t aBtemporary[11];
// 140B22B48: using guessed type wchar_t aBrival[7];
// 140B22B60: using guessed type wchar_t aBrival_0[7];
// 140B22B70: using guessed type wchar_t aBfriend[8];
// 140B22B80: using guessed type wchar_t aBfriend_0[8];
// 140B22B90: using guessed type wchar_t aBignore[8];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

