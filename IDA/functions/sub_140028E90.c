//----- (0000000140028E90) ----------------------------------------------------
__int64 __fastcall sub_140028E90(__int64 a1)
{
	_DWORD* v1; // r8
	bool v2; // zf
	__int64 result; // rax

	v1 = *(_DWORD**)(a1 + 16);
	v2 = *(_DWORD*)(qword_140C66DA8 + 360) == 0;
	v1[2] = 1;
	result = 1i64;
	*v1 = !v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

