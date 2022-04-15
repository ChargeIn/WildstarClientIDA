//----- (000000014005AC80) ----------------------------------------------------
_BOOL8 __fastcall sub_14005AC80(char* a1, unsigned __int64* a2)
{
	unsigned __int64 v4; // xmm0_8
	unsigned __int8* v5; // r8
	int v7; // eax
	unsigned __int8* v8; // [rsp+30h] [rbp+8h] BYREF

	v4 = sub_1407DE548(a1, (char**)&v8).m128_u64[0];
	v5 = v8;
	*a2 = v4;
	if (v5 == (unsigned __int8*)a1)
		return 0i64;
	if (((*v5 - 88) & 0xDF) == 0)
	{
		v7 = sub_1407DF1B0((unsigned __int8*)a1, &v8, 0x10u);
		v5 = v8;
		*(double*)a2 = (double)v7;
	}
	if (!*v5)
		return 1i64;
	if ((unsigned int)sub_1407DE9E8(*v5))
	{
		do
			++v8;
		while ((unsigned int)sub_1407DE9E8(*v8));
	}
	return *v8 == 0;
}

