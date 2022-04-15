//----- (0000000140702890) ----------------------------------------------------
__int64 __fastcall sub_140702890(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // r8
	BOOL v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v2 = sub_14039DF50(qword_140C65898);
	v3 = 0;
	v5 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 184);
		if (!v4 || *(_DWORD*)(v4 + 4) != 5)
			v5 = 1;
	}
	v6 = *(_DWORD**)(a1 + 16);
	v7 = !v5;
	result = 1i64;
	LOBYTE(v3) = !v7;
	v6[2] = 1;
	*v6 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

