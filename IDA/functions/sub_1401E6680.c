//----- (00000001401E6680) ----------------------------------------------------
__int64 __fastcall sub_1401E6680(__int64 a1)
{
	unsigned int v1; // ebx
	_QWORD* v3; // rcx
	__int64 v4; // rax

	v1 = ++ * (_DWORD*)(a1 + 8);
	if (v1 == 1)
	{
		v3 = *(_QWORD**)(a1 + 96);
		if (v3)
			*v3 = *(_QWORD*)(a1 + 104);
		v4 = *(_QWORD*)(a1 + 104);
		if (v4)
			*(_QWORD*)(v4 + 96) = *(_QWORD*)(a1 + 96);
		*(_QWORD*)(a1 + 96) = 0i64;
		*(_QWORD*)(a1 + 104) = 0i64;
		sub_1401984D0(a1 + 48);
	}
	return v1;
}

