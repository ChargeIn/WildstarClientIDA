//----- (0000000140883AE0) ----------------------------------------------------
void __fastcall sub_140883AE0(__int64 a1, __int64 a2, char a3)
{
	__int64* v5; // rax
	__int64 v6; // rbx

	if (!a3 || (*(_BYTE*)(a1 + 117) & 8) != 0 || (*(_BYTE*)(a1 + 194) & 2) != 0)
	{
		v6 = *(_QWORD*)(a1 + 96);
		EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
		sub_140883FE0(a1, a2);
		sub_1408893C0(*(_QWORD*)(a1 + 96));
		LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
	}
	else
	{
		*(_DWORD*)(a2 + 20) &= ~4u;
		*(_DWORD*)(a2 + 20) |= 3u;
		*(_QWORD*)a2 = 0i64;
		v5 = *(__int64**)(a1 + 184);
		if (v5)
		{
			*v5 = a2;
			++* (_DWORD*)(a1 + 168);
		}
		else
		{
			++* (_DWORD*)(a1 + 168);
			*(_QWORD*)(a1 + 176) = a2;
		}
		*(_QWORD*)(a1 + 184) = a2;
	}
}

