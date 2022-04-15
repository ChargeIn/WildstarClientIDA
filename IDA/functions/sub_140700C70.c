//----- (0000000140700C70) ----------------------------------------------------
__int64 __fastcall sub_140700C70(__int64 a1)
{
	int v2; // ebx
	__int64 v3; // rcx
	BOOL v4; // eax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (v3)
		v4 = sub_1403B48B0(v3);
	else
		v4 = 0;
	v5 = *(_DWORD**)(a1 + 16);
	v6 = !v4;
	result = 1i64;
	LOBYTE(v2) = !v6;
	v5[2] = 1;
	*v5 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

