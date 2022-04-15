//----- (000000014056F550) ----------------------------------------------------
__int64 __fastcall sub_14056F550(__int64 a1, signed int a2)
{
	unsigned int v2; // ebx
	int v4; // r8d
	int v6; // ecx
	unsigned __int64 v7; // rsi
	__int64 v8; // rax
	int v9; // [rsp+38h] [rbp+10h] BYREF

	v2 = 0;
	if ((dword_140DC3410 & 1) != 0)
	{
		v4 = dword_140DC341C;
	}
	else
	{
		v4 = 0;
		dword_140DC341C = 0;
		dword_140DC3410 |= 1u;
	}
	if (a2 > 4)
		return 1i64;
	v6 = *(_DWORD*)(qword_140C65970 + 12);
	if (_bittest(&v6, a2))
		return 162i64;
	v7 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 280i64);
	if (v4)
	{
		v2 = dword_140DC3418;
	}
	else
	{
		dword_140DC341C = 1;
		v8 = sub_140200220(0x93Du);
		if (v8)
			v2 = *(_DWORD*)(v8 + 4);
		dword_140DC3418 = v2;
	}
	if (v7 < v2)
		return 163i64;
	v9 = a2;
	sub_1403F4900(qword_140C65898, 0x6BDu, (__int64)&v9);
	return 168i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140DC3410: using guessed type int dword_140DC3410;
// 140DC3418: using guessed type int dword_140DC3418;
// 140DC341C: using guessed type int dword_140DC341C;

