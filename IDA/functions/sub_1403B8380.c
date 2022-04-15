#include "../winhttp.h"

//----- (00000001403B8380) ----------------------------------------------------
__int64 __fastcall sub_1403B8380(__int64 a1, __int64 a2)
{
	int v4; // esi
	int v5; // eax
	unsigned __int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	void(__fastcall * **v9)(_QWORD); // rsi
	__int64 v10; // rcx
	__int64 v12[96]; // [rsp+20h] [rbp-4E8h] BYREF
	__int64 v13; // [rsp+320h] [rbp-1E8h]
	__int64 v14; // [rsp+4D4h] [rbp-34h]

	v4 = sub_1403D2140(a1, 0x4Bu);
	v5 = sub_1403D2140(a1, 0x4Au);
	if (v5)
		v5 = *(_DWORD*)(a1 + 240) + 10 * v4;
	*(_DWORD*)(a1 + 244) = v5;
	if (*(_DWORD*)(a2 + 20) == 4)
	{
		v6 = *(unsigned int*)(a2 + 24);
		if (v6 < *(_QWORD*)(a1 + 2712) && *(_QWORD*)(*(_QWORD*)(a1 + 2704) + 8 * v6))
			sub_1403B7E80(a1, a2 + 20);
		sub_1403B77D0(a1, (int*)a2, 1);
	}
	else
	{
		v7 = sub_1403AC780(a1 + 160, (int*)(a2 + 20));
		v8 = a1;
		if (v7)
		{
			sub_1403B7D40(a1, *(_QWORD*)a2, 49);
			v8 = a1;
		}
		sub_1403B77D0(v8, (int*)a2, 1);
		sub_14040FAE0((__int64)v12);
		v9 = (void(__fastcall***)(_QWORD))sub_1403AC780(a1 + 160, (int*)(a2 + 20));
		if (v9 != (void(__fastcall***)(_QWORD))v12[0])
		{
			if (v12[0])
				(*(void (**)(void))(*(_QWORD*)v12[0] + 8i64))();
			v12[0] = (__int64)v9;
			if (v9)
				(**v9)(v9);
		}
		v14 = 0i64;
		sub_140412AD0((__int64)v12);
		sub_1403B8060(a1, (__int64)v12, *(_DWORD*)(a2 + 28), *(_DWORD*)(a2 + 168));
		sub_1400A8020(*(_QWORD*)(a1 + 29504) + 3720i64);
		v10 = *(_QWORD*)(a1 + 32736);
		if (v10)
			sub_1400A8020(v10 + 376);
		if (v12[0])
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12[0] + 8i64))(v12[0]);
			v12[0] = 0i64;
		}
		if (v13)
			sub_14018B900(v13, 0);
	}
	return 0i64;
}

