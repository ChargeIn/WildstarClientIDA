//----- (0000000140286AA0) ----------------------------------------------------
float __fastcall sub_140286AA0(
	__int64 a1,
	__int64 a2,
	unsigned __int64 a3,
	unsigned __int64 a4,
	__m128* a5,
	int a6,
	__int64 a7,
	__int64 a8,
	int a9)
{
	_QWORD* v13; // rdi
	float v14; // [rsp+78h] [rbp+10h] BYREF

	if (!a2)
		return 0.0;
	v13 = (_QWORD*)(a2 + 64);
	if ((*(_QWORD*)(a2 + 64)
		|| (int)sub_140283D30(
			*(_QWORD*)(a2 + 16),
			*(void(__fastcall****)(_QWORD))(a2 + 24),
			*(int**)(a2 + 32),
			*(_QWORD*)(a2 + 40),
			*(_DWORD*)(a2 + 56),
			v13) >= 0)
		&& (int)sub_1402B98B0(*(_QWORD*)(a2 + 24), (_QWORD*)*v13, a3, a4, a5, a6, a7, a8, a9, &v14, 0i64) >= 0)
	{
		return v14;
	}
	else
	{
		return 0.0;
	}
}

