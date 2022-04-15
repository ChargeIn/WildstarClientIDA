#include "../winhttp.h"

//----- (00000001405E2D90) ----------------------------------------------------
__int64 __fastcall sub_1405E2D90(__int64 a1, __int64 a2)
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
	int v16; // r14d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	__int64 v20; // rbx
	int v21; // esi
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	_DWORD* v24; // rax
	__int64* v25; // rax
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	unsigned __int16* v29; // r11
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	unsigned __int16* v33; // r11
	__int64 result; // rax
	__int64 v35; // [rsp+20h] [rbp-28h] BYREF
	__int64 v36; // [rsp+28h] [rbp-20h]

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v6, L"nPresenceState", v7);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v10, L"strDisplayName", v11);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v14, L"strPublicNote", v15);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v16 = *(_DWORD*)(a1 + 680);
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v19 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v19 = *v17;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	v20 = *(_QWORD*)(a2 + 16);
	v21 = 0;
	v22 = (unsigned __int64*)sub_14018F0E0(&v35, L"bIgnoreStrangerInvites")[1];
	if (v22)
	{
		v23 = -1i64;
		do
			++v23;
		while (*((_BYTE*)v22 + v23));
		sub_140058710(v20, v22, v23);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v20 + 16) + 8i64) = 0;
		*(_QWORD*)(v20 + 16) += 16i64;
	}
	if (v36)
		sub_14018B900(v36, 0);
	v24 = *(_DWORD**)(v20 + 16);
	LOBYTE(v21) = v16 != 0;
	v24[2] = 1;
	*v24 = v21;
	*(_QWORD*)(v20 + 16) += 16i64;
	v25 = (__int64*)sub_1400580E0(v20, -3);
	sub_14005EA50(v20, v25, (int*)(*(_QWORD*)(v20 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v20 + 16) - 16i64));
	*(_QWORD*)(v20 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v28 = *(_QWORD*)(v27 + 16);
	*(_QWORD*)v28 = *v26;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(v27 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v28, L"strAwayMsg", v29);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v32 = *(_QWORD*)(v31 + 16);
	*(_QWORD*)v32 = *v30;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v30 + 2);
	*(_QWORD*)(v31 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v32, L"strBusyMsg", v33);
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 1405E2DCE: variable 'v5' is possibly undefined
// 1405E2DF1: variable 'v7' is possibly undefined
// 1405E2E1D: variable 'v9' is possibly undefined
// 1405E2E40: variable 'v11' is possibly undefined
// 1405E2E6C: variable 'v13' is possibly undefined
// 1405E2E8F: variable 'v15' is possibly undefined
// 1405E2EBB: variable 'v18' is possibly undefined
// 1405E2F8D: variable 'v27' is possibly undefined
// 1405E2FB0: variable 'v29' is possibly undefined
// 1405E2FDC: variable 'v31' is possibly undefined
// 1405E2FFF: variable 'v33' is possibly undefined
// 140B22D10: using guessed type wchar_t aStrbusymsg[11];
// 140B22D28: using guessed type wchar_t aBignorestrange[23];
// 140B22D58: using guessed type wchar_t aStrawaymsg[11];
// 140B22D70: using guessed type wchar_t aStrdisplayname_0[15];
// 140B22D90: using guessed type wchar_t aStrpublicnote_0[14];
// 140B22DD8: using guessed type wchar_t aNpresencestate_1[15];

