//----- (00000001405AEA10) ----------------------------------------------------
__int64 __fastcall sub_1405AEA10(__int64 a1, int a2)
{
	__int64 v2; // r9
	unsigned int v3; // r8d
	__int64 v4; // rax
	_DWORD* i; // rcx

	v2 = *(_QWORD*)(a1 + 232);
	if (!v2)
		return 0i64;
	v3 = *(_DWORD*)(a1 + 272);
	v4 = 0i64;
	if (!v3)
		return 0i64;
	for (i = (_DWORD*)(v2 + 4); *i != a2; i += 48)
	{
		v4 = (unsigned int)(v4 + 1);
		if ((unsigned int)v4 >= v3)
			return 0i64;
	}
	return v2 + 192 * v4;
}

