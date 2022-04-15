//----- (000000014083C260) ----------------------------------------------------
void __fastcall sub_14083C260(__int64 a1, unsigned int a2)
{
	__int64 v4; // r8

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v4 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
	if (v4)
	{
		while (*(_DWORD*)(v4 + 48) != a2)
		{
			v4 = *(_QWORD*)(v4 + 80);
			if (!v4)
				goto LABEL_4;
		}
		--* (_DWORD*)(v4 + 4);
		sub_14083B620(a1, a2, v4);
	}
	else
	{
	LABEL_4:
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
}
// 14083C2DF: conditional instruction was optimized away because r8.8!=0

