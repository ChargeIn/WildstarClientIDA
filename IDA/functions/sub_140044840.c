//----- (0000000140044840) ----------------------------------------------------
__int64 __fastcall sub_140044840(__int64 a1)
{
	int v1; // eax
	__int64 v3; // rdx
	bool v4; // zf
	int v5; // edx
	_DWORD* v6; // rcx

	v1 = 0;
	if (!qword_140C65898
		|| (v3 = *(_QWORD*)(qword_140C65898 + 25744)) == 0
		|| (v4 = *(_DWORD*)(v3 + 684) == 0, v5 = 1, v4))
	{
		v5 = 0;
	}
	v6 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v5 != 0;
	v6[2] = 1;
	*v6 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

