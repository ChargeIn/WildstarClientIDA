//----- (0000000140561C30) ----------------------------------------------------
__int64 __fastcall sub_140561C30(__int64 a1, int a2)
{
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 1976))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 1968) + 8 * (v3 % *(_QWORD*)(a1 + 1960)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 1984))(&v6, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0i64;
	}
	if (v4 == (_QWORD*)-24i64)
		return 0i64;
	else
		return v4[3];
}
