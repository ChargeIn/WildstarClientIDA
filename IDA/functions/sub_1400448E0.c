//----- (00000001400448E0) ----------------------------------------------------
__int64 __fastcall sub_1400448E0(__int64 a1)
{
	_DWORD* v1; // rdx
	__int64 result; // rax

	v1 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	*v1 = 1;
	v1[2] = 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

