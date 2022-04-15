//----- (00000001405CCEE0) ----------------------------------------------------
__int64 __fastcall sub_1405CCEE0(__int64 a1)
{
	_QWORD* v1; // rbx

	v1 = *(_QWORD**)(a1 + 776);
	if (!v1)
		return 0i64;
	while (!*v1 || !(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 32i64))(*v1))
	{
		v1 = (_QWORD*)v1[3];
		if (!v1)
			return 0i64;
	}
	return 1i64;
}

