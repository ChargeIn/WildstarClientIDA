//----- (0000000140453D40) ----------------------------------------------------
__int64 __fastcall sub_140453D40(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 1024);
	if (v1)
		*v1 = *(_QWORD*)(a1 + 1032);
	v2 = *(_QWORD*)(a1 + 1032);
	if (v2)
		*(_QWORD*)(v2 + 1024) = *(_QWORD*)(a1 + 1024);
	result = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_QWORD*)(a1 + 1024) = 0i64;
	return result;
}

