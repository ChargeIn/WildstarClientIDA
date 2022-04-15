#include "../winhttp.h"

//----- (00000001403AA0A0) ----------------------------------------------------
void __fastcall sub_1403AA0A0(__m128* a1)
{
	_DWORD* v2; // rsi
	_QWORD* v3; // rbx
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned __int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // [rsp+30h] [rbp-28h] BYREF
	int v9; // [rsp+38h] [rbp-20h]
	__int64 v10[3]; // [rsp+40h] [rbp-18h] BYREF

	if (a1[1609].m128_u64[0] && a1[2031].m128_i32[1])
	{
		v2 = (_DWORD*)qword_140C65920;
		v3 = *(_QWORD**)(qword_140C65920 + 8);
		if (v3)
		{
			while (v3[9] != a1[2031].m128_u64[1])
			{
				v3 = (_QWORD*)v3[4];
				if (!v3)
					goto LABEL_8;
			}
			(*(void(__fastcall**)(_QWORD*))(*v3 + 8i64))(v3);
			(*(void(__fastcall**)(_QWORD*, __int64)) * v3)(v3, 1i64);
			v2 = (_DWORD*)qword_140C65920;
		}
	LABEL_8:
		v4 = 0i64;
		v8 = 8i64;
		v9 = 0;
		v10[1] = (__int64)sub_1403AA1E0;
		if (sub_1404860D0(a1 + 2030, 5.0, 10.0))
		{
			v5 = sub_14001C280((__int64)a1);
			v6 = a1[1609].m128_u64[0];
			v10[0] = v5;
			if (*v2)
			{
				v7 = sub_140486F10(
					(__int64)v2,
					(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
					(__int128*)(v6 + 4528),
					&v8,
					v10);
			LABEL_13:
				v4 = v7;
			}
		}
		else
		{
			v10[0] = sub_14001C280((__int64)a1);
			if (*v2)
			{
				v7 = sub_140486DC0(
					(__int64)v2,
					(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
					&v8,
					v10,
					0,
					0);
				goto LABEL_13;
			}
		}
		a1[2031].m128_u64[1] = v4;
	}
}
// 140AF5420: using guessed type wchar_t aArtFxModelProp[72];
// 140AF5540: using guessed type wchar_t aArtFxModelProp_0[66];
// 140C65920: using guessed type __int64 qword_140C65920;

