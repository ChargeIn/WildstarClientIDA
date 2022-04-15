#include "../winhttp.h"

//----- (0000000140178890) ----------------------------------------------------
__int64 __fastcall sub_140178890(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	unsigned __int16* v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	v2 = *(_QWORD*)(sub_140177AC0(a1) + 1040);
	v3 = *(int*)(v2 + 1032);
	if ((_DWORD)v3 == -1 || *(int*)(v2 + 1144) <= 0 || (int)v3 < 0 || (int)v3 >= *(_DWORD*)(v2 + 1160))
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8 * v3);
	v5 = *(int*)(v4 + 24) <= 0 ? 0i64 : **(_QWORD**)(v4 + 16);
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(v5 + 192);
	if (v6)
		v7 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 64i64))(v6);
	else
		v7 = (unsigned __int16*)&unk_1409DC2EC;
	v8 = (unsigned __int64*)sub_14018F0E0(&v11, v7)[1];
	if (v8)
	{
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		sub_140058710((__int64)a1, v8, v9);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v12)
		sub_14018B900(v12, 0);
	return 1i64;
}

