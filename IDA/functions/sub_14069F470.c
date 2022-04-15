//----- (000000014069F470) ----------------------------------------------------
__int64 __fastcall sub_14069F470(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int16* v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v4 = *v2;
	if (!v4)
		return 0i64;
	v5 = sub_14034BDD0(v3, *(_DWORD*)(*(_QWORD*)v4 + 16i64));
	v6 = (unsigned __int64*)sub_14018F0E0(&v9, (unsigned __int16*)v5)[1];
	if (v6)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)v6 + v7));
		sub_140058710((__int64)a1, v6, v7);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v10)
		sub_14018B900(v10, 0);
	return 1i64;
}
// 14069F49D: variable 'v3' is possibly undefined

