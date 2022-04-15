//----- (0000000140769450) ----------------------------------------------------
__int64 __fastcall sub_140769450(__int64 a1)
{
	int v1; // edx
	int v3; // eax
	__int64 v4; // rcx
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax

	v1 = 0;
	if (*(_DWORD*)(qword_140C65B98 + 312) && *(_QWORD*)(qword_140C65B98 + 320)
		|| (v4 = *(_QWORD*)(qword_140C65898 + 27728)) == 0)
	{
		v3 = 0;
	}
	else
	{
		v3 = (*(_DWORD*)(v4 + 8) >> 3) & 1;
	}
	v5 = *(_DWORD**)(a1 + 16);
	v6 = v3 == 0;
	result = 1i64;
	LOBYTE(v1) = !v6;
	v5[2] = 1;
	*v5 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

