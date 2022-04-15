//----- (00000001406A0740) ----------------------------------------------------
__int64 __fastcall sub_1406A0740(__int64 a1, __int64 a2)
{
	int v3; // eax
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+30h] [rbp-18h]

	if (*(_QWORD*)(a1 + 16) == *(_QWORD*)(qword_140C635F0 + 5792))
		return 0i64;
	v4 = 0i64;
	v5 = 0i64;
	v6 = 0i64;
	v3 = *(_DWORD*)(a1 + 64);
	v6 = a2;
	LODWORD(v4) = v3;
	v5 = *(_QWORD*)(a1 + 8);
	sub_1403F4900(qword_140C65898, 0x55Eu, (__int64)&v4);
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

