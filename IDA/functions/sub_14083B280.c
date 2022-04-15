//----- (000000014083B280) ----------------------------------------------------
bool __fastcall sub_14083B280(__int64 a1, int a2)
{
	struct _RTL_CRITICAL_SECTION* v2; // rbx
	_DWORD* v5; // rax
	_DWORD* v6; // rcx
	_DWORD* v7; // rdi

	v2 = (struct _RTL_CRITICAL_SECTION*)(a1 + 24);
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v5 = *(_DWORD**)a1;
	v6 = *(_DWORD**)(a1 + 8);
	if (*(_DWORD**)a1 == v6)
		goto LABEL_6;
	do
	{
		if (*v5 == a2)
			break;
		v5 += 4;
	} while (v5 != v6);
	if (v5 == v6)
		LABEL_6:
	v7 = 0i64;
	else
		v7 = v5 + 2;
	LeaveCriticalSection(v2);
	return v7 != 0i64;
}

