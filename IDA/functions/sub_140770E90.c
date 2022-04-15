//----- (0000000140770E90) ----------------------------------------------------
__int64 __fastcall sub_140770E90(__int64 a1)
{
	__int64 v3; // rax
	float v4; // xmm6_4
	__int64 v5; // rax
	float v6; // xmm1_4
	char v7[4]; // [rsp+20h] [rbp-28h] BYREF
	float v8; // [rsp+24h] [rbp-24h]

	if (*(_DWORD*)(a1 + 336))
		return a1 + 96;
	if (!*(_QWORD*)(a1 + 232) || !*(_QWORD*)(a1 + 184))
		return a1 + 48;
	(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 16i64))(a1, v7);
	v3 = *(_QWORD*)(qword_140C65898 + 25744);
	if (!v3)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 120);
		if (!v3)
			return a1 + 48;
	}
	v4 = *(float*)(v3 + 4580);
	if ((dword_140DC4DA4 & 1) != 0)
	{
		v6 = *(float*)&dword_140DC4DA8;
	}
	else
	{
		dword_140DC4DA4 |= 1u;
		v5 = sub_140200220(0x46Eu);
		if (v5)
		{
			v6 = *(float*)(v5 + 24);
			dword_140DC4DA8 = LODWORD(v6);
		}
		else
		{
			v6 = 10.0;
			dword_140DC4DA8 = 1092616192;
		}
	}
	if (v8 < (float)(v4 - v6))
		return a1 + 232;
	if (v8 <= (float)(v6 + v4))
		return a1 + 48;
	return a1 + 184;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4DA4: using guessed type int dword_140DC4DA4;
// 140DC4DA8: using guessed type int dword_140DC4DA8;
// 140770E90: using guessed type char var_28[4];

