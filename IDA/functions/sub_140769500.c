//----- (0000000140769500) ----------------------------------------------------
__int64 __fastcall sub_140769500(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	BOOL v3; // ecx
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	__int64 v9; // [rsp+30h] [rbp-18h]

	v1 = dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	v3 = v2 && (v2 != 1 || *v1);
	v4 = qword_140C65B98;
	if (*(_DWORD*)(qword_140C65B98 + 312) && *(_QWORD*)(qword_140C65B98 + 320))
	{
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		v5 = *(_QWORD*)(qword_140C65B98 + 312);
		LODWORD(v9) = v3;
		v7 = v5;
		v8 = *(_QWORD*)(qword_140C65B98 + 320);
		sub_1403F4900(qword_140C65898, 0x617u, (__int64)&v7);
		*(_DWORD*)(v4 + 312) = 0;
		*(_QWORD*)(v4 + 320) = 0i64;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

