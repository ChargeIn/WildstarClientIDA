//----- (000000014076A7C0) ----------------------------------------------------
__int64 __fastcall sub_14076A7C0(__int64 a1)
{
	int v1; // edx
	int v3; // r9d
	_DWORD* v4; // rcx
	__int64 result; // rax

	v1 = 0;
	if (qword_140C65898)
		v3 = *(_DWORD*)(qword_140C65B98 + 340);
	else
		v3 = 0;
	v4 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	LOBYTE(v1) = v3 != 0;
	v4[2] = 1;
	*v4 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

