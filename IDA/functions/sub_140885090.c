//----- (0000000140885090) ----------------------------------------------------
__int64 __fastcall sub_140885090(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v1; // rbx
	_QWORD* v3; // rsi
	__int64 v4; // r14
	_QWORD* v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rbp
	__int64 v8; // rax

	v1 = (struct _RTL_CRITICAL_SECTION*)(a1 - 72);
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	if (*(_BYTE*)(a1 + 72))
	{
		v3 = *(_QWORD**)(a1 + 56);
		v4 = *(_QWORD*)(a1 - 24);
		EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
		v5 = *(_QWORD**)(a1 + 56);
		if (v5)
		{
			if (*v5)
			{
				*(_QWORD*)(a1 + 56) = *v5;
			}
			else
			{
				*(_QWORD*)(a1 + 56) = 0i64;
				*(_QWORD*)(a1 + 64) = 0i64;
			}
			--* (_DWORD*)(a1 + 48);
		}
		v6 = v3[1];
		v7 = *(_QWORD*)(a1 - 24);
		v3[1] = 0i64;
		if (v6)
			sub_140889B30(v7 + 168, v6);
		v8 = *(_QWORD*)(v7 + 280);
		if (v8)
		{
			*v3 = v8;
			*(_QWORD*)(v7 + 280) = v3;
		}
		else
		{
			*(_QWORD*)(v7 + 280) = v3;
			*v3 = 0i64;
		}
		sub_1408893C0(*(_QWORD*)(a1 - 24));
		LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
		--* (_BYTE*)(a1 + 72);
		sub_140885F10(a1 - 120);
		LeaveCriticalSection(v1);
		return 1i64;
	}
	else
	{
		LeaveCriticalSection(v1);
		return 2i64;
	}
}

