//----- (0000000140601C90) ----------------------------------------------------
__int64 __fastcall sub_140601C90(__int64 a1, int a2)
{
	__int64 v2; // r9
	int v4; // r8d
	int v5; // edx
	unsigned int v6; // ecx
	__int64 v7; // rax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	__int64 v9; // [rsp+28h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 64);
	if (!v2)
		return 0i64;
	v4 = *(_DWORD*)(v2 + 8);
	if (a2)
	{
		v5 = a2 - 1;
		if (v5)
		{
			if (v5 != 1)
				return 0i64;
			v6 = v4 & 0xFFFFFF3F | 0x80;
		}
		else
		{
			v6 = v4 & 0xFFFFFF3F;
		}
	}
	else
	{
		v6 = v4 & 0xFFFFFF3F | 0x40;
	}
	if (v4 == v6)
		return 0i64;
	v8 = 0i64;
	v9 = 0i64;
	v7 = *(_QWORD*)(v2 + 72);
	LODWORD(v9) = v6;
	v8 = v7;
	sub_1403F4740(qword_140C65898, 0x406u, (__int64)&v8);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

