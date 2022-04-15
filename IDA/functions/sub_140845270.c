//----- (0000000140845270) ----------------------------------------------------
void __fastcall sub_140845270(__int64 a1, int a2, __int64 a3)
{
	_DWORD* v3; // rax
	_DWORD* v4; // r9
	__int64 v8; // rax

	v3 = *(_DWORD**)a1;
	v4 = *(_DWORD**)(a1 + 8);
	if (*(_DWORD**)a1 == v4)
		goto LABEL_6;
	do
	{
		if (*v3 == a2)
			break;
		v3 += 10;
	} while (v3 != v4);
	if (v3 == v4 || v3 == (_DWORD*)-8i64)
	{
	LABEL_6:
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
		v8 = sub_14088C520(a1);
		if (v8)
		{
			*(_DWORD*)v8 = a2;
			*(_QWORD*)(v8 + 32) = a3;
			*(_DWORD*)(v8 + 8) = -1;
			*(_DWORD*)(v8 + 12) = 1065353216;
			*(_DWORD*)(v8 + 16) = -1;
			*(_DWORD*)(v8 + 20) = 1;
		}
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	}
}

