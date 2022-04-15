#include "../winhttp.h"

//----- (00000001400BBCA0) ----------------------------------------------------
void __fastcall sub_1400BBCA0(__int64 a1)
{
	int v1; // eax
	unsigned int v2; // r8d
	__int64 v4; // rcx
	int v5; // ebx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // ebx

	v1 = *(_DWORD*)(a1 + 560);
	v2 = *(_DWORD*)(a1 + 232);
	if ((v1 & 2) != 0)
	{
		v2 = *(_DWORD*)(a1 + 240);
	}
	else if ((v1 & 1) != 0)
	{
		v2 = *(_DWORD*)(a1 + 236);
	}
	sub_1400BB5E0(a1, 5, v2);
	sub_1400BB5E0(a1, 6, *(_DWORD*)(a1 + 244));
	sub_1400BB5E0(a1, 7, *(_DWORD*)(a1 + 248));
	if (*(_DWORD*)(a1 + 432)
		&& ((v4 = *(_QWORD*)(a1 + 424)) == 0 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4))
		|| (*(_BYTE*)(a1 + 112) & 4) != 0
		&& *(_DWORD*)(a1 + 436)
		&& ((v5 = *(_DWORD*)(a1 + 116), (int)(v5 - sub_14018CDF0() + 5000) < 0) || *(_DWORD*)(a1 + 296)))
	{
		if ((!*(_DWORD*)(a1 + 436)
			|| (v6 = *(_QWORD*)(a1 + 424)) != 0 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6))
			&& (!*(_DWORD*)(a1 + 460)
				|| (v7 = *(_QWORD*)(a1 + 448)) != 0 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7))
			&& (!*(_DWORD*)(a1 + 484)
				|| (v8 = *(_QWORD*)(a1 + 472)) != 0 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8))
			|| (v9 = *(_DWORD*)(a1 + 120), (int)(v9 - sub_14018CDF0() + 3000) < 0))
		{
			sub_1400BB4E0(a1, (__int64**)(a1 + 80), 5, 6, 7);
			*(_DWORD*)(a1 + 432) = 0;
			*(_DWORD*)(a1 + 296) = 0;
		}
	}
	*(_DWORD*)(a1 + 112) |= 1u;
	sub_1400B9FD0((__int64**)(a1 + 80));
}

