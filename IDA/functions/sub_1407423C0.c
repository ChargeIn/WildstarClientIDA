//----- (00000001407423C0) ----------------------------------------------------
__int64 __fastcall sub_1407423C0(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 v3; // rax
	int v4; // edx
	_DWORD* v5; // rcx
	__int64 result; // rax
	_DWORD* v7; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *v2) != 0 && (v4 = *(_DWORD*)(v3 + 24)) != 0)
	{
		if (qword_140C7DC80)
			sub_140712C00((void(__fastcall***)(_QWORD))qword_140C7DC80, v4, (__int64)sub_140472EB0, 0i64);
		v5 = (_DWORD*)a1[2];
		result = 1i64;
		*v5 = 1;
		v5[2] = 1;
		a1[2] += 16i64;
	}
	else
	{
		v7 = (_DWORD*)a1[2];
		*v7 = 0;
		v7[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C7DC80: using guessed type __int64 qword_140C7DC80;

