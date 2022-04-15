#include "../winhttp.h"

//----- (00000001404F59A0) ----------------------------------------------------
__int64 __fastcall sub_1404F59A0(__int64 a1)
{
	_DWORD* v2; // rax
	__int64 v3; // rax
	int v4; // esi
	int v5; // edi
	__int64 v6; // rcx
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v2 = sub_1400CB0E0(a1, v8, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v2;
		*(_DWORD*)(a1 + 400) = v2[1];
		*(_DWORD*)(a1 + 404) = v2[2];
		*(_DWORD*)(a1 + 408) = v2[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v3 = a1;
		do
		{
			if (!*(_DWORD*)(v3 + 392))
				break;
			*(_DWORD*)(v3 + 392) = 0;
			v3 = *(_QWORD*)(v3 + 16);
		} while (v3);
	}
	v4 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
	v5 = *(_DWORD*)(a1 + 408) - *(_DWORD*)(a1 + 400);
	if (*(_QWORD*)(a1 + 1064) != __PAIR64__(v5, v4))
	{
		v6 = *(_QWORD*)(a1 + 2328);
		if (v6 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
		*(_DWORD*)(a1 + 1064) = v4;
		*(_DWORD*)(a1 + 1068) = v5;
		*(float*)(a1 + 1072) = (float)v4 / (float)v5;
		sub_1404FFA00(a1);
	}
	return 0i64;
}
// 1404F59A0: using guessed type int var_18[6];

