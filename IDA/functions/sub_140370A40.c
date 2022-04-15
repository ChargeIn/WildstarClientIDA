//----- (0000000140370A40) ----------------------------------------------------
__int64 __fastcall sub_140370A40(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 224);
	if (v1)
		*v1 = *(_QWORD*)(a1 + 232);
	v2 = *(_QWORD*)(a1 + 232);
	if (v2)
		*(_QWORD*)(v2 + 224) = *(_QWORD*)(a1 + 224);
	result = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	return result;
}

