#include "../winhttp.h"

//----- (00000001404B4E40) ----------------------------------------------------
__int64 __fastcall sub_1404B4E40(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	__int64 result; // rax
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	int v12; // r11d
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	int v16; // r11d
	unsigned __int64 v17; // rdx
	float v18; // xmm6_4
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	__int64 v22; // rdi
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	__int64 v25; // rax
	__int64* v26; // rax
	__int64 v27; // rax
	__int64 v28; // rcx
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	unsigned __int16* v32; // r11
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	_QWORD* v36; // rax
	__int64 v37; // r10
	__int64 v38; // rdx
	_QWORD* v39; // rax
	__int64 v40; // r10
	__int64 v41; // rdx
	int v42; // r11d
	_QWORD* v43; // rax
	__int64 v44; // r10
	__int64 v45; // rdx
	int v46; // r11d
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	int v50; // r11d
	__int64 v51; // [rsp+20h] [rbp-38h] BYREF
	__int64 v52; // [rsp+28h] [rbp-30h]
	float v53; // [rsp+60h] [rbp+8h] BYREF

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v6, L"nId", v7);
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	if (*(_DWORD*)(a1 + 240))
	{
		if (*(_DWORD*)(a1 + 232))
		{
			v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v11 = *(_QWORD*)(v10 + 16);
			*(_QWORD*)v11 = *v9;
			*(_DWORD*)(v11 + 8) = *((_DWORD*)v9 + 2);
			*(_QWORD*)(v10 + 16) += 16i64;
			sub_1400F06F0(*(_QWORD*)(a2 + 16), v11, L"nClassId", v12);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
			v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v15 = *(_QWORD*)(v14 + 16);
			*(_QWORD*)v15 = *v13;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
			*(_QWORD*)(v14 + 16) += 16i64;
			sub_1400F06F0(*(_QWORD*)(a2 + 16), v15, L"nPathId", v16);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v17 = *(_QWORD*)(a1 + 200);
		v18 = 0.0;
		v53 = 0.0;
		if (v17)
		{
			sub_1401E83A0(&v53, v17);
			if (v53 >= 0.0)
				v18 = 0.000001;
			else
				v18 = -v53;
		}
		v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v21 = *(_QWORD*)(v20 + 16);
		*(_QWORD*)v21 = *v19;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
		*(_QWORD*)(v20 + 16) += 16i64;
		v22 = *(_QWORD*)(a2 + 16);
		v23 = (unsigned __int64*)sub_14018F0E0(&v51, L"fLastOnline")[1];
		if (v23)
		{
			v24 = -1i64;
			do
				++v24;
			while (*((_BYTE*)v23 + v24));
			sub_140058710(v22, v23, v24);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
			*(_QWORD*)(v22 + 16) += 16i64;
		}
		if (v52)
			sub_14018B900(v52, 0);
		v25 = *(_QWORD*)(v22 + 16);
		*(_DWORD*)(v25 + 8) = 3;
		*(double*)v25 = v18;
		*(_QWORD*)(v22 + 16) += 16i64;
		v26 = (__int64*)sub_1400580E0(v22, -3);
		sub_14005EA50(v22, v26, (int*)(*(_QWORD*)(v22 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
		*(_QWORD*)(v22 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v27 = sub_14024DB80(*(_DWORD*)(a1 + 220));
		if (v27 && sub_14034BDD0(v28, *(_DWORD*)(v27 + 4)))
		{
			v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v31 = *(_QWORD*)(v30 + 16);
			*(_QWORD*)v31 = *v29;
			*(_DWORD*)(v31 + 8) = *((_DWORD*)v29 + 2);
			*(_QWORD*)(v30 + 16) += 16i64;
			sub_1400F0870(*(_QWORD*)(a2 + 16), v31, L"strWorldZone", v32);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		if (*(_WORD*)(a1 + 12))
		{
			v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v35 = *(_QWORD*)(v34 + 16);
			*(_QWORD*)v35 = *v33;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v33 + 2);
			*(_QWORD*)(v34 + 16) += 16i64;
			sub_1400F0870(*(_QWORD*)(a2 + 16), v35, L"strCharacterName", (unsigned __int16*)(a1 + 12));
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		if (*(_WORD*)(a1 + 78))
		{
			v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v38 = *(_QWORD*)(v37 + 16);
			*(_QWORD*)v38 = *v36;
			*(_DWORD*)(v38 + 8) = *((_DWORD*)v36 + 2);
			*(_QWORD*)(v37 + 16) += 16i64;
			sub_1400F0870(*(_QWORD*)(a2 + 16), v38, L"strRealmName", (unsigned __int16*)(a1 + 78));
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v41 = *(_QWORD*)(v40 + 16);
		*(_QWORD*)v41 = *v39;
		*(_DWORD*)(v41 + 8) = *((_DWORD*)v39 + 2);
		*(_QWORD*)(v40 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v41, L"nLevel", v42);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v45 = *(_QWORD*)(v44 + 16);
		*(_QWORD*)v45 = *v43;
		*(_DWORD*)(v45 + 8) = *((_DWORD*)v43 + 2);
		*(_QWORD*)(v44 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v45, L"nFactionId", v46);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v49 = *(_QWORD*)(v48 + 16);
		*(_QWORD*)v49 = *v47;
		*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
		*(_QWORD*)(v48 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v49, L"ePermissionNeighbor", v50);
		result = *(_QWORD*)(a2 + 16);
		*(_QWORD*)(result + 16) -= 16i64;
	}
	return result;
}
// 1404B4E6B: variable 'v5' is possibly undefined
// 1404B4E8E: variable 'v7' is possibly undefined
// 1404B4EDE: variable 'v10' is possibly undefined
// 1404B4F01: variable 'v12' is possibly undefined
// 1404B4F2D: variable 'v14' is possibly undefined
// 1404B4F50: variable 'v16' is possibly undefined
// 1404B4FB3: variable 'v20' is possibly undefined
// 1404B508D: variable 'v28' is possibly undefined
// 1404B50B1: variable 'v30' is possibly undefined
// 1404B50D4: variable 'v32' is possibly undefined
// 1404B5100: variable 'v34' is possibly undefined
// 1404B5150: variable 'v37' is possibly undefined
// 1404B51A0: variable 'v40' is possibly undefined
// 1404B51C3: variable 'v42' is possibly undefined
// 1404B51EF: variable 'v44' is possibly undefined
// 1404B5212: variable 'v46' is possibly undefined
// 1404B523E: variable 'v48' is possibly undefined
// 1404B5261: variable 'v50' is possibly undefined
// 140B09470: using guessed type wchar_t aNid_7[4];
// 140B09478: using guessed type wchar_t aNclassid[9];
// 140B09490: using guessed type wchar_t aNpathid[8];
// 140B094A0: using guessed type wchar_t aFlastonline[12];
// 140B094B8: using guessed type wchar_t aNfactionid[11];
// 140B09740: using guessed type wchar_t aEpermissionnei[20];
// 140B097C8: using guessed type wchar_t aStrworldzone_0[13];
// 140B097E8: using guessed type wchar_t aStrcharacterna[17];
// 140B09810: using guessed type wchar_t aStrrealmname_0[13];
// 140B09830: using guessed type wchar_t aNlevel_2[7];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

