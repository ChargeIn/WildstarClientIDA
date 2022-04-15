//----- (000000014014DDC0) ----------------------------------------------------
__int64 __fastcall sub_14014DDC0(_QWORD* a1)
{
	_DWORD* v2; // rax
	_DWORD* v4; // rax
	unsigned __int32 v5; // xmm8_4
	float v6; // xmm7_4
	unsigned __int32 v7; // xmm0_4
	float* v8; // rax
	float v9; // xmm8_4
	float v10; // xmm6_4
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v14; // [rsp+30h] [rbp-48h] BYREF
	int v15; // [rsp+38h] [rbp-40h]

	if ((unsigned int)sub_14014D6D0((__int64)a1))
	{
		v2 = (_DWORD*)sub_140056AB0(a1, 1u);
		return sub_14014D640(a1, v2);
	}
	else
	{
		v4 = (_DWORD*)a1[3];
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || v4[2] != 5)
		{
			v9 = sub_140056C40(a1, 1u);
			v6 = sub_140056C40(a1, 2u);
			v10 = sub_140056C40(a1, 3u);
			v8 = (float*)sub_140059170(a1, 0xCui64);
			*v8 = v9;
			v8[2] = v10;
		}
		else
		{
			v5 = sub_140144EF0(a1, "EulerAngles", 1u, (unsigned __int64*)"roll", 3).m128_u32[0];
			LODWORD(v6) = sub_140144EF0(a1, "EulerAngles", 1u, (unsigned __int64*)"pitch", 2).m128_u32[0];
			v7 = sub_140144EF0(a1, "EulerAngles", 1u, (unsigned __int64*)"yaw", 1).m128_u32[0];
			v8 = (float*)sub_140059170(a1, 0xCui64);
			*(_DWORD*)v8 = v7;
			*((_DWORD*)v8 + 2) = v5;
		}
		v8[1] = v6;
		v11 = a1[4];
		v12 = sub_140062650((__int64)a1, (unsigned __int64*)"EulerAngles", 0xBui64);
		v13 = a1[2];
		v14 = v12;
		v15 = 4;
		sub_14005E8E0((__int64)a1, v11 + 160, (int*)&v14, v13);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

