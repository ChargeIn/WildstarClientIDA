//----- (00000001406D56D0) ----------------------------------------------------
char __fastcall sub_1406D56D0(__int64 a1, int a2)
{
	__int64 v2; // rax
	unsigned __int64* v4; // rcx
	int v6; // eax

	v2 = *(_QWORD*)(a1 + 32);
	*(_WORD*)(a1 + 2088) = 0;
	*(_QWORD*)(a1 + 2096) = 0i64;
	v4 = *(unsigned __int64**)(v2 + 3440);
	if (*(_QWORD*)(v2 + 3448) - (_QWORD)v4 != 19i64
		|| (v6 = sub_1407E6AF0(v4, (__int64)"DDUseItemWithTarget", 0x13ui64)) != 0
		|| a2 == 3)
	{
		LOBYTE(v6) = sub_1400D2970(a1, a2);
	}
	return v6;
}

