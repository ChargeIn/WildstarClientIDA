//----- (00000001404E9250) ----------------------------------------------------
__int64 __fastcall sub_1404E9250(__int64 a1)
{
	int v1; // edx
	int v3; // eax
	_DWORD* v4; // rcx
	bool v5; // zf
	__int64 result; // rax

	v1 = 0;
	if (!qword_140C63658 || !*(_DWORD*)(qword_140C63658 + 44) || (v3 = 1, !*(_DWORD*)(qword_140C63658 + 40)))
		v3 = 0;
	v4 = *(_DWORD**)(a1 + 16);
	v5 = v3 == 0;
	result = 1i64;
	LOBYTE(v1) = !v5;
	v4[2] = 1;
	*v4 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C63658: using guessed type __int64 qword_140C63658;

