//----- (000000014073B9C0) ----------------------------------------------------
__int64 __fastcall sub_14073B9C0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // r9
	_DWORD* v4; // rdx
	__int64 result; // rax
	bool v6; // zf
	_DWORD* v7; // rax

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2 && (v3 = *(_DWORD**)(v2 + 16)) != 0i64)
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		v6 = *v3 == *(_DWORD*)(qword_140C65B98 + 264);
		v4[2] = 1;
		*v4 = v6;
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
// 140C65B98: using guessed type __int64 qword_140C65B98;

