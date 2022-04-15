//----- (0000000140377F70) ----------------------------------------------------
__int64 __fastcall sub_140377F70(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 1184))
	{
		sub_140378110(a1);
		sub_1403786A0(a1);
		v2 = *(_QWORD**)(a1 + 1184);
		if (v2)
			*v2 = *(_QWORD*)(a1 + 1192);
		v3 = *(_QWORD*)(a1 + 1192);
		if (v3)
			*(_QWORD*)(v3 + 1184) = *(_QWORD*)(a1 + 1184);
		result = 0i64;
		*(_QWORD*)(a1 + 1184) = 0i64;
		*(_QWORD*)(a1 + 1192) = 0i64;
	}
	return result;
}

