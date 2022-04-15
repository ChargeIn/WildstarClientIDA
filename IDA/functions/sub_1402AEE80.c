#include "../winhttp.h"

//----- (00000001402AEE80) ----------------------------------------------------
__int64 __fastcall sub_1402AEE80(__int64 a1)
{
	signed int v2; // edi
	__int64 v4; // rcx
	__int64 v5; // rdx
	unsigned int v6; // edi
	signed int v7; // esi
	__int64 v8; // rcx
	void* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rcx
	int v12[2]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v13; // [rsp+38h] [rbp-30h]
	__int64(__fastcall * v14)(__int64); // [rsp+40h] [rbp-28h]
	__int64 v15; // [rsp+48h] [rbp-20h]
	int v16; // [rsp+50h] [rbp-18h]
	void(__fastcall * **v17)(_QWORD); // [rsp+70h] [rbp+8h] BYREF
	__int64 v18; // [rsp+78h] [rbp+10h] BYREF

	v2 = sub_1401C5690(112i64, (int**)(a1 + 352), 0);
	if (v2 < 0)
	{
		v18 = 0x141DE7008i64;
		sub_1401A3130(14, 2, &v18, (unsigned int)v2);
		return sub_1402B1940(a1, v2);
	}
	v4 = *(_QWORD*)(a1 + 344);
	v5 = *(_QWORD*)(a1 + 352);
	v6 = 0;
	v17 = 0i64;
	v7 = (*(__int64(__fastcall**)(__int64, __int64, void(__fastcall****)(_QWORD), _QWORD))(*(_QWORD*)v4 + 88i64))(
		v4,
		v5,
		&v17,
		0i64);
	if (v7 < 0)
	{
		v8 = *(_QWORD*)(a1 + 344);
		if (v8 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8))
		{
			v9 = (void*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 344) + 16i64))(*(_QWORD*)(a1 + 344));
			v10 = 0x141DE6D38i64;
		}
		else
		{
			v9 = &unk_1409E4184;
			v10 = 0x141DE6D38i64;
		}
	LABEL_14:
		v18 = v10;
		sub_1401A3130(14, 2, &v18, (unsigned int)v7, v9);
		v6 = sub_1402B1940(a1, v7);
		goto LABEL_15;
	}
	v14 = sub_1402AF030;
	v12[0] = 12;
	v12[1] = 2;
	v13 = a1;
	v15 = 0i64;
	v16 = 1;
	v7 = sub_14019DCA0((__int64)v12, 0, v17, (int**)(a1 + 368));
	if (v7 < 0)
	{
		v11 = *(_QWORD*)(a1 + 344);
		if (v11 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11))
			v9 = (void*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 344) + 16i64))(*(_QWORD*)(a1 + 344));
		else
			v9 = &unk_1409E416C;
		v10 = 0x141DE6C18i64;
		goto LABEL_14;
	}
LABEL_15:
	if (v17)
		(*v17)[1](v17);
	return v6;
}

