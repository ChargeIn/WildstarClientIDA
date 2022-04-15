//----- (0000000140602020) ----------------------------------------------------
__int64 __fastcall sub_140602020(__int64 a1, _WORD* a2)
{
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	_WORD* v8; // [rsp+28h] [rbp-10h]

	if (!*(_QWORD*)(a1 + 64))
		return 0i64;
	if (!(unsigned int)sub_1403E1170(a2, 0xBu))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 64);
	if (v5)
	{
		if (*(_QWORD*)(a1 + 112))
			return 0i64;
	}
	v7 = 0i64;
	v8 = 0i64;
	v6 = *(_QWORD*)(v5 + 72);
	v8 = a2;
	v7 = v6;
	sub_1403F4740(qword_140C65898, 0x44Au, (__int64)&v7);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

