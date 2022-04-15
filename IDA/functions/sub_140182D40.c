//----- (0000000140182D40) ----------------------------------------------------
__int64 __fastcall sub_140182D40(__int64 a1, __int64 a2)
{
	int v3; // eax
	__int64 v4; // rcx
	unsigned int v5; // edi
	__int64 v6; // rdx
	void (***v8)(void); // [rsp+70h] [rbp+18h] BYREF

	v8 = 0i64;
	v3 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, void (****)(void)))(*(_QWORD*)qword_140C65670 + 80i64))(
		qword_140C65670,
		a2,
		0i64,
		1i64,
		0,
		256,
		0,
		0,
		&v8);
	v4 = (__int64)v8;
	v5 = v3;
	if (v3 >= 0)
	{
		if (*(void (****)(void))(a1 + 1096) != v8)
		{
			if (v8)
			{
				(**v8)();
				v4 = (__int64)v8;
			}
			v6 = *(_QWORD*)(a1 + 1096);
			if (v6)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v6 + 8i64))(*(_QWORD*)(a1 + 1096));
				v4 = (__int64)v8;
			}
			*(_QWORD*)(a1 + 1096) = v4;
		}
		*(_DWORD*)(a1 + 1024) = 1;
		*(_DWORD*)(a1 + 1076) = 0;
		v5 = 0;
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	return v5;
}
// 140C65670: using guessed type __int64 qword_140C65670;

