//----- (0000000140350FE0) ----------------------------------------------------
__int64 __fastcall sub_140350FE0(__int64 a1, unsigned int a2)
{
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v3 = (*(__int64(__fastcall**)(unsigned int*))(a1 + 1080))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 1072) + 8 * (v3 % *(_QWORD*)(a1 + 1064)));
	if (!v4)
		return sub_14024CEC0(v6);
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(a1 + 1088))(&v6, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return sub_14024CEC0(v6);
	}
	if (v4 == (_QWORD*)-24i64)
		return sub_14024CEC0(v6);
	else
		return *(_QWORD*)(v4[3] + 8i64);
}

