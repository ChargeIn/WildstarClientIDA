//----- (0000000140845530) ----------------------------------------------------
void __fastcall sub_140845530(__int64 a1, int a2, __int64 a3)
{
	_QWORD* v3; // rdi
	_QWORD* v4; // rax
	unsigned __int64 v6; // rcx

	v3 = *(_QWORD**)a1;
	v4 = *(_QWORD**)(a1 + 8);
	if (*(_QWORD**)a1 != v4)
	{
		do
		{
			if (*(_DWORD*)v3 == a2)
				break;
			v3 += 5;
		} while (v3 != v4);
		if (v3 != v4 && v3[4] == a3)
		{
			EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
			v6 = *(_QWORD*)(a1 + 8) - 40i64;
			if ((unsigned __int64)v3 < v6)
				qmemcpy(v3, v3 + 5, 40 * ((v6 - (unsigned __int64)v3 - 1) / 0x28 + 1));
			*(_QWORD*)(a1 + 8) -= 40i64;
			LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
		}
	}
}

