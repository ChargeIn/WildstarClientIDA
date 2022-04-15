//----- (0000000140048100) ----------------------------------------------------
__int64 __fastcall sub_140048100(__int64 a1, __int64 a2, int a3)
{
	_QWORD* v4; // rcx
	__int64 v7; // rdx
	void(__fastcall * *v8)(__int64); // rax
	__int64 v9; // rax
	void(__fastcall * *v10)(__int64); // rax

	v4 = *(_QWORD**)(a2 + 24);
	if (v4)
	{
		*v4 = *(_QWORD*)(a2 + 32);
		v7 = *(_QWORD*)(a2 + 32);
		if (v7)
			*(_QWORD*)(v7 + 24) = *(_QWORD*)(a2 + 24);
		v8 = *(void(__fastcall***)(__int64))a2;
		*(_QWORD*)(a2 + 24) = 0i64;
		*(_QWORD*)(a2 + 32) = 0i64;
		v8[1](a2);
	}
	if (*(_QWORD*)(a1 + 24))
	{
		if (!*(_QWORD*)(a2 + 24))
		{
			*(_QWORD*)(a2 + 24) = a1 + 32;
			*(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 32) = a2;
			v9 = *(_QWORD*)(a2 + 32);
			if (v9)
				*(_QWORD*)(v9 + 24) = a2 + 32;
		}
		v10 = *(void(__fastcall***)(__int64))a2;
		*(_DWORD*)(a2 + 40) = a3;
		*(_DWORD*)(a2 + 16) = 0;
		(*v10)(a2);
	}
	return 0i64;
}

