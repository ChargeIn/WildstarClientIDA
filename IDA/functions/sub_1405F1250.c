#include "../winhttp.h"

//----- (00000001405F1250) ----------------------------------------------------
__int64 __fastcall sub_1405F1250(__int64 a1, unsigned int* a2, __int64 a3, int a4)
{
	__int64 result; // rax
	__int64 v9; // rcx
	_DWORD* v10; // rbx
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	unsigned __int16* v14; // r11
	int v15; // esi
	BOOL v16; // r12d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	__int64 v20; // rbx
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	_DWORD* v23; // rax
	__int64* v24; // rax
	__int64 v25; // [rsp+20h] [rbp-38h] BYREF
	__int64 v26; // [rsp+28h] [rbp-30h]

	result = sub_140229540(*a2);
	v10 = (_DWORD*)result;
	if (result)
	{
		sub_14034BDD0(v9, *(_DWORD*)(result + 4));
		v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v13 = *(_QWORD*)(v12 + 16);
		*(_QWORD*)v13 = *v11;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
		*(_QWORD*)(v12 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a1 + 16), v13, L"strTeamName", v14);
		v15 = 0;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v16 = a4 == *v10;
		v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v19 = *(_QWORD*)(v18 + 16);
		*(_QWORD*)v19 = *v17;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
		*(_QWORD*)(v18 + 16) += 16i64;
		v20 = *(_QWORD*)(a1 + 16);
		v21 = (unsigned __int64*)sub_14018F0E0(&v25, L"bIsMyTeam")[1];
		if (v21)
		{
			v22 = -1i64;
			do
				++v22;
			while (*((_BYTE*)v21 + v22));
			sub_140058710(v20, v21, v22);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v20 + 16) + 8i64) = 0;
			*(_QWORD*)(v20 + 16) += 16i64;
		}
		if (v26)
			sub_14018B900(v26, 0);
		v23 = *(_DWORD**)(v20 + 16);
		LOBYTE(v15) = v16;
		v23[2] = 1;
		*v23 = v15;
		*(_QWORD*)(v20 + 16) += 16i64;
		v24 = (__int64*)sub_1400580E0(v20, -3);
		sub_14005EA50(v20, v24, (int*)(*(_QWORD*)(v20 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v20 + 16) - 16i64));
		*(_QWORD*)(v20 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		sub_1405F05B0(a1, (__int64)(a2 + 1), a3);
		return 1i64;
	}
	return result;
}
// 1405F128F: variable 'v9' is possibly undefined
// 1405F12AE: variable 'v12' is possibly undefined
// 1405F12D1: variable 'v14' is possibly undefined
// 1405F1302: variable 'v18' is possibly undefined
// 140B23FC0: using guessed type wchar_t aStrteamname_1[12];
// 140B23FD8: using guessed type wchar_t aBismyteam[10];

