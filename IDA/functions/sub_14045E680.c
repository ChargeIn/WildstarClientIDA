//----- (000000014045E680) ----------------------------------------------------
__int64 __fastcall sub_14045E680(__int64 a1)
{
	unsigned int v1; // eax
	__int64 v2; // rdx
	_QWORD* i; // rcx

	v1 = 0;
	v2 = qword_140C65A08 + 40;
	for (i = (_QWORD*)(a1 + 728); !*i || (*(_BYTE*)(*(_QWORD*)v2 + 16i64) & 0x40) == 0; i += 2)
	{
		++v1;
		v2 += 8i64;
		if (v1 >= 0x1C)
			return 0i64;
	}
	return 1i64;
}
// 14045E69D: conditional instruction was optimized away because eax.4<1Cu
// 140C65A08: using guessed type __int64 qword_140C65A08;

