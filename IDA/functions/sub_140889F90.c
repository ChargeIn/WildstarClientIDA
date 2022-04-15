//----- (0000000140889F90) ----------------------------------------------------
void __fastcall sub_140889F90(__int64 a1, __int64 a2, char a3, char a4)
{
	__int64 v6; // rbp
	__int64 v8; // rdx
	__int64 v9; // rbx
	__int64 v10; // rcx
	char v11; // [rsp+58h] [rbp+20h] BYREF

	v11 = a4;
	v6 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 96i64);
	EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
	v8 = *(_QWORD*)(a1 + 8);
	v9 = *(_QWORD*)(v8 + 16);
	if (v9)
	{
		v10 = *(_QWORD*)(v9 + 56);
		if (*(_QWORD*)(v10 + 24) || *(_QWORD*)(v10 + 32) != *(_QWORD*)(v9 + 64))
		{
			v9 = 0i64;
		}
		else if (*(_DWORD*)(v8 + 28) != -1)
		{
			sub_140889E50((_QWORD*)(v6 + 168), (__int64*)v8);
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
	if (v9)
	{
		if (a3)
		{
			if ((*(_BYTE*)(v9 + 72) & 1) != 0)
				v11 = 0;
			else
				(*(void(__fastcall**)(__int64, _QWORD, __int64, char*))(*(_QWORD*)a2 + 56i64))(
					a2,
					*(_QWORD*)(*(_QWORD*)(v9 + 64) + 40i64),
					v9 + 8,
					&v11);
		}
		*(_DWORD*)(v9 + 72) |= 1u;
	}
}

