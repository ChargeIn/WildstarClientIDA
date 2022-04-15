//----- (000000014084D390) ----------------------------------------------------
__int64 __fastcall sub_14084D390(_QWORD* a1, __int64 a2)
{
	__int64 v2; // r8
	_QWORD* v3; // rax
	_QWORD* v4; // rdi

	v2 = a1[18];
	if (!v2)
		return 2i64;
	v3 = *(_QWORD**)(v2 + 8);
	v4 = *(_QWORD**)v2;
	if (*(_QWORD**)v2 == v3)
		return 2i64;
	do
	{
		if (*v4 == a2)
			break;
		++v4;
	} while (v4 != v3);
	if (v4 == v3)
		return 2i64;
	if (v4 < v3 - 1)
		qmemcpy(v4, v4 + 1, 8 * (((unsigned __int64)((char*)(v3 - 1) - (char*)v4 - 1) >> 3) + 1));
	*(_QWORD*)(v2 + 8) -= 8i64;
	(*(void(__fastcall**)(_QWORD*))(*a1 + 408i64))(a1);
	return 1i64;
}

