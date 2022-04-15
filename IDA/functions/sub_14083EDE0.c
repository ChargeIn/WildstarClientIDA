//----- (000000014083EDE0) ----------------------------------------------------
__int64 __fastcall sub_14083EDE0(LPCRITICAL_SECTION lpCriticalSection, unsigned int a2)
{
	__int64 v4; // rbx

	EnterCriticalSection(lpCriticalSection);
	v4 = *((_QWORD*)&lpCriticalSection[1].DebugInfo + a2 % 0xC1);
	if (v4)
	{
		while (*(_DWORD*)(v4 + 24) != a2)
		{
			v4 = *(_QWORD*)(v4 + 16);
			if (!v4)
				goto LABEL_4;
		}
		++* (_DWORD*)(v4 + 8);
	}
	else
	{
	LABEL_4:
		v4 = 0i64;
	}
	LeaveCriticalSection(lpCriticalSection);
	return v4;
}
// 14083EE47: conditional instruction was optimized away because rbx.8!=0

