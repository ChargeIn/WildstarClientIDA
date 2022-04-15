//----- (0000000140371A90) ----------------------------------------------------
__int64 __fastcall sub_140371A90(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 1232);
	if (v1)
		*v1 = *(_QWORD*)(a1 + 1240);
	v2 = *(_QWORD*)(a1 + 1240);
	if (v2)
		*(_QWORD*)(v2 + 1232) = *(_QWORD*)(a1 + 1232);
	result = 0i64;
	*(_QWORD*)(a1 + 1240) = 0i64;
	*(_QWORD*)(a1 + 1232) = 0i64;
	return result;
}

