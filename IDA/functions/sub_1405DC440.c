#include "../winhttp.h"

//----- (00000001405DC440) ----------------------------------------------------
void __fastcall sub_1405DC440(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	unsigned __int16* v11; // r11
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	unsigned __int16* v15; // r11
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	unsigned __int16* v19; // r11
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	unsigned __int64 v24; // rdx
	float v25; // xmm6_4
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	__int64 v29; // rbx
	unsigned __int64* v30; // rdx
	unsigned __int64 v31; // r8
	__int64 v32; // rax
	__int64* v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	__int64 v37; // rbx
	unsigned __int64* v38; // rdx
	unsigned __int64 v39; // r8
	__int64 v40; // rax
	__int64* v41; // rax
	__int64 v42; // [rsp+20h] [rbp-38h] BYREF
	__int64 v43; // [rsp+28h] [rbp-30h]
	float v44; // [rsp+60h] [rbp+8h] BYREF

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v6, L"nId", v7);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v10, L"strPublicNote", v11);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v14, L"strPrivateNote", v15);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v18, L"strCharacterName", v19);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v22 = *(_QWORD*)(v21 + 16);
	*(_QWORD*)v22 = *v20;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
	*(_QWORD*)(v21 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v22, L"nPresenceState", v23);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (*(_QWORD*)(a1 + 112))
	{
		v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v36 = *(_QWORD*)(v35 + 16);
		*(_QWORD*)v36 = *v34;
		*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
		*(_QWORD*)(v35 + 16) += 16i64;
		v37 = *(_QWORD*)(a2 + 16);
		v38 = (unsigned __int64*)sub_14018F0E0(&v42, L"fLastOnline")[1];
		if (v38)
		{
			v39 = -1i64;
			do
				++v39;
			while (*((_BYTE*)v38 + v39));
			sub_140058710(v37, v38, v39);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v37 + 16) + 8i64) = 0;
			*(_QWORD*)(v37 + 16) += 16i64;
		}
		if (v43)
			sub_14018B900(v43, 0);
		v40 = *(_QWORD*)(v37 + 16);
		*(_QWORD*)v40 = 0i64;
		*(_DWORD*)(v40 + 8) = 3;
		*(_QWORD*)(v37 + 16) += 16i64;
		v41 = (__int64*)sub_1400580E0(v37, -3);
		sub_14005EA50(v37, v41, (int*)(*(_QWORD*)(v37 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v37 + 16) - 16i64));
		*(_QWORD*)(v37 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		sub_1405DC7F0(a1, a2);
	}
	else
	{
		v24 = *(_QWORD*)(a1 + 8);
		v25 = 0.0;
		v44 = 0.0;
		if (v24)
		{
			sub_1401E83A0(&v44, v24);
			if (v44 >= 0.0)
				v25 = 0.000001;
			else
				v25 = -v44;
		}
		v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v28 = *(_QWORD*)(v27 + 16);
		*(_QWORD*)v28 = *v26;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v26 + 2);
		*(_QWORD*)(v27 + 16) += 16i64;
		v29 = *(_QWORD*)(a2 + 16);
		v30 = (unsigned __int64*)sub_14018F0E0(&v42, L"fLastOnline")[1];
		if (v30)
		{
			v31 = -1i64;
			do
				++v31;
			while (*((_BYTE*)v30 + v31));
			sub_140058710(v29, v30, v31);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v29 + 16) + 8i64) = 0;
			*(_QWORD*)(v29 + 16) += 16i64;
		}
		if (v43)
			sub_14018B900(v43, 0);
		v32 = *(_QWORD*)(v29 + 16);
		*(_DWORD*)(v32 + 8) = 3;
		*(double*)v32 = v25;
		*(_QWORD*)(v29 + 16) += 16i64;
		v33 = (__int64*)sub_1400580E0(v29, -3);
		sub_14005EA50(v29, v33, (int*)(*(_QWORD*)(v29 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v29 + 16) - 16i64));
		*(_QWORD*)(v29 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
}
// 1405DC470: variable 'v5' is possibly undefined
// 1405DC493: variable 'v7' is possibly undefined
// 1405DC4BC: variable 'v9' is possibly undefined
// 1405DC4DF: variable 'v11' is possibly undefined
// 1405DC508: variable 'v13' is possibly undefined
// 1405DC52B: variable 'v15' is possibly undefined
// 1405DC554: variable 'v17' is possibly undefined
// 1405DC577: variable 'v19' is possibly undefined
// 1405DC5A0: variable 'v21' is possibly undefined
// 1405DC5C3: variable 'v23' is possibly undefined
// 1405DC633: variable 'v27' is possibly undefined
// 1405DC71D: variable 'v35' is possibly undefined
// 140B22BA0: using guessed type wchar_t aStrcharacterna_4[17];
// 140B22BC8: using guessed type wchar_t aNpresencestate_0[15];
// 140B22BE8: using guessed type wchar_t aStrpublicnote[14];
// 140B22C08: using guessed type wchar_t aStrprivatenote[15];
// 140B22C40: using guessed type wchar_t aNid_22[4];
// 140B22E80: using guessed type wchar_t aFlastonline_3[12];
// 140B22E98: using guessed type wchar_t aFlastonline_4[12];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

