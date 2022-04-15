//----- (00000001403A68E0) ----------------------------------------------------
__int64 __fastcall sub_1403A68E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	_QWORD* v4; // rax
	unsigned __int64 v5; // rdx
	__int64 v6; // rcx
	_QWORD* i; // rax

	v2 = *(_QWORD*)(a1 + 26392);
	if (!v2)
		return 0i64;
	v4 = (_QWORD*)(v2 + 24);
	if (!v4)
		return 0i64;
	v5 = v4[1];
	v6 = 0i64;
	if (!v5)
		return 0i64;
	for (i = (_QWORD*)(*v4 + 16i64); *i != a2; i += 10)
	{
		if (++v6 >= v5)
			return 0i64;
	}
	return 1i64;
}

