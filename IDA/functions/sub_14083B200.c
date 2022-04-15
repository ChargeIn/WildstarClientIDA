//----- (000000014083B200) ----------------------------------------------------
__int64 __fastcall sub_14083B200(__int64 a1, _DWORD* a2)
{
	struct _RTL_CRITICAL_SECTION* v2; // rbx
	_DWORD* v5; // rax
	_DWORD* v6; // rcx
	void(__fastcall * *v7)(_DWORD*); // rax
	unsigned __int8 v8; // di

	v2 = (struct _RTL_CRITICAL_SECTION*)(a1 + 24);
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v5 = *(_DWORD**)a1;
	v6 = *(_DWORD**)(a1 + 8);
	if (*(_DWORD**)a1 == v6)
		goto LABEL_7;
	do
	{
		if (*v5 == *a2)
			break;
		v5 += 4;
	} while (v5 != v6);
	if (v5 == v6 || (v7 = (void(__fastcall**)(_DWORD*))(v5 + 2)) == 0i64)
	{
	LABEL_7:
		v8 = 0;
	}
	else
	{
		(*v7)(a2);
		v8 = 1;
	}
	LeaveCriticalSection(v2);
	return v8;
}

