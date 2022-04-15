//----- (0000000140189320) ----------------------------------------------------
signed __int64 __fastcall sub_140189320(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 i; // rbx
	float v7; // xmm1_4
	__int128 v8; // xmm0
	__int128 v10; // [rsp+20h] [rbp-28h] BYREF
	float v11; // [rsp+30h] [rbp-18h]

	sub_140189460(a1, a2);
	for (i = a2; i < a3; i += 32i64)
	{
		v7 = *(float*)(i + 16);
		if (v7 < *(float*)(a1 + 16))
		{
			v10 = *(_OWORD*)i;
			v8 = *(_OWORD*)a1;
			v11 = v7;
			*(_OWORD*)i = v8;
			*(_DWORD*)(i + 16) = *(_DWORD*)(a1 + 16);
			sub_140189520(a1, 0i64, (a2 - a1) >> 5, (__int64)&v10);
		}
	}
	return sub_1401893C0(a1, a2);
}

