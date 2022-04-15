//----- (0000000140887140) ----------------------------------------------------
void __fastcall sub_140887140(__int64 a1, __int64 a2, int a3, char a4)
{
	bool v8; // r8

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	if (a2)
	{
		v8 = a3 == 1 && *(_QWORD*)(a1 + 200) && (*(_DWORD*)(a2 + 20) & 7) != 2;
		if (!a4 && v8)
		{
			*(_DWORD*)(a2 + 20) &= ~4u;
			*(_DWORD*)(a2 + 20) |= 3u;
		}
		sub_140883AE0(a1, a2, v8);
	}
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_BYTE*)(a1 + 208) = 0;
	sub_140885FF0(a1, a3);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
}

