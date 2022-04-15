//----- (0000000140370660) ----------------------------------------------------
__int64 __fastcall sub_140370660(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 280);
	if (v1)
		*v1 = *(_QWORD*)(a1 + 288);
	v2 = *(_QWORD*)(a1 + 288);
	if (v2)
		*(_QWORD*)(v2 + 280) = *(_QWORD*)(a1 + 280);
	result = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	return result;
}

