#include "../winhttp.h"

//----- (00000001403C74D0) ----------------------------------------------------
__int64 __fastcall sub_1403C74D0(__int64 a1)
{
	unsigned int v2; // ebx
	__int64 v3; // rbp
	unsigned int v4; // r14d
	unsigned int v5; // esi
	unsigned int v6; // eax
	__int64(__fastcall * **v7)(_QWORD); // rax
	__int64 v8; // rbx
	unsigned int v9; // eax
	__int64 v10; // rax
	void(__fastcall * v11)(__int64); // rax
	int v13; // [rsp+40h] [rbp-38h] BYREF
	__int64 v14; // [rsp+48h] [rbp-30h]
	void(__fastcall * v15)(__int64); // [rsp+50h] [rbp-28h]
	__int64 v16; // [rsp+58h] [rbp-20h]
	unsigned __int64 v17; // [rsp+88h] [rbp+10h] BYREF

	v17 = 0x141DF08C0i64;
	sub_1401A3130(5, 2, &v17);
	v2 = qword_140C77760;
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	v4 = *(_DWORD*)(qword_140C65898 + 29008);
	v5 = HIDWORD(qword_140C77760);
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	if (qword_140C658F8)
	{
		v17 = __PAIR64__(v5, v2);
		v7 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(
			(__int64)&v17,
			v6,
			v4,
			(float*)(v3 + 4576),
			0i64,
			1,
			(__int64*)&v17);
		if (v7)
		{
			v8 = *(_QWORD*)(qword_140C65898 + 29504);
			v9 = (**v7)(v7);
			sub_1400EA3E0(v8, "ZoneCompletionUpdated", L"i", v9);
		}
	}
	v10 = *(_QWORD*)(a1 + 29080);
	*(_DWORD*)(a1 + 31560) |= 0x20u;
	if (!*(_DWORD*)(v10 + 36) && !*(_DWORD*)(v10 + 28) && !*(_QWORD*)(v10 + 496))
		*(_DWORD*)(a1 + 31560) |= 0x40u;
	if (*(_DWORD*)(a1 + 25648))
	{
		v13 = 0;
		v14 = sub_14001C280(a1);
		v11 = sub_1403C9970;
	}
	else
	{
		if (!*(_DWORD*)(a1 + 25652))
			goto LABEL_13;
		v13 = 0;
		v14 = sub_14001C280(a1);
		v11 = sub_1403C9A70;
	}
	v15 = v11;
	v16 = 0i64;
	sub_140195960(a1 + 25656, 1, (__int64)&v13, 4);
LABEL_13:
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerEnteredWorld", &unk_1409D091E);
	if (*(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 248i64))
		sub_140437A10((_QWORD*)qword_140C658D8, 0x18Bu, 0, 0i64, 0, 0, 1);
	return 0i64;
}
// 1409EF504: using guessed type wchar_t aI_39[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;

