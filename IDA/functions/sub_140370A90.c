//----- (0000000140370A90) ----------------------------------------------------
__int64 __fastcall sub_140370A90(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 1264);
	if (v1)
		*v1 = *(_QWORD*)(a1 + 1272);
	v2 = *(_QWORD*)(a1 + 1272);
	if (v2)
		*(_QWORD*)(v2 + 1264) = *(_QWORD*)(a1 + 1264);
	result = 0i64;
	*(_QWORD*)(a1 + 1272) = 0i64;
	*(_QWORD*)(a1 + 1264) = 0i64;
	return result;
}

