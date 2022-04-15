//----- (00000001403AA3A0) ----------------------------------------------------
void __fastcall sub_1403AA3A0(__m128* a1)
{
	_DWORD* v2; // rsi
	_QWORD* v3; // rbx
	float v4; // xmm1_4
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // [rsp+30h] [rbp-28h] BYREF
	int v10; // [rsp+38h] [rbp-20h]
	__int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF

	if (a1[1609].m128_u64[0] && a1[2033].m128_i32[1])
	{
		v2 = (_DWORD*)qword_140C65920;
		v3 = *(_QWORD**)(qword_140C65920 + 8);
		if (v3)
		{
			while (v3[9] != a1[2033].m128_u64[1])
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
		v4 = a1[2033].m128_f32[0];
		v5 = 0i64;
		v9 = 9i64;
		v10 = 0;
		v11[1] = (__int64)sub_1403AA4E0;
		if (sub_1404860D0(a1 + 2032, v4, 10.0))
		{
			v6 = sub_14001C280((__int64)a1);
			v7 = a1[1609].m128_u64[0];
			v11[0] = v6;
			if (*v2)
			{
				v8 = sub_140486F10(
					(__int64)v2,
					(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
					(__int128*)(v7 + 4528),
					&v9,
					v11);
			LABEL_13:
				v5 = v8;
			}
		}
		else
		{
			v11[0] = sub_14001C280((__int64)a1);
			if (*v2)
			{
				v8 = sub_140486DC0(
					(__int64)v2,
					(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
					&v9,
					v11,
					0,
					0);
				goto LABEL_13;
			}
		}
		a1[2033].m128_u64[1] = v5;
	}
}
// 140AF56F0: using guessed type wchar_t aArtFxModelProp_3[66];
// 140AF5780: using guessed type wchar_t aArtFxModelProp_2[72];
// 140C65920: using guessed type __int64 qword_140C65920;

