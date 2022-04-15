//----- (00000001408311F0) ----------------------------------------------------
void __fastcall sub_1408311F0(LPCRITICAL_SECTION lpCriticalSection)
{
	PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
	__int64 v3; // rbx
	__int64 v4; // rdi
	int* v5; // rcx
	PRTL_CRITICAL_SECTION_DEBUG i; // rdi
	int* v7; // rcx

	EnterCriticalSection(lpCriticalSection);
	DebugInfo = lpCriticalSection[1].DebugInfo;
	LODWORD(v3) = 0;
	LODWORD(v4) = 0;
	if (DebugInfo)
	{
		do
		{
		LABEL_6:
			v5 = (int*)DebugInfo;
			for (DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)DebugInfo->ProcessLocksList.Flink;
				!DebugInfo;
				DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG) * ((_QWORD*)&lpCriticalSection[1].DebugInfo + v4))
			{
				v4 = (unsigned int)(v4 + 1);
				if ((unsigned int)v4 >= 0xC1)
					break;
			}
			if (v5[6] < 0)
				(*(void(__fastcall**)(int*))(*(_QWORD*)v5 + 16i64))(v5);
		} while (DebugInfo);
	}
	else
	{
		while (1)
		{
			v4 = (unsigned int)(v4 + 1);
			if ((unsigned int)v4 >= 0xC1)
				break;
			DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG) * ((_QWORD*)&lpCriticalSection[1].DebugInfo + v4);
			if (DebugInfo)
				goto LABEL_6;
		}
	}
	LeaveCriticalSection(lpCriticalSection);
	i = lpCriticalSection[399].DebugInfo;
	if (i)
	{
		do
		{
		LABEL_17:
			v7 = (int*)i;
			for (i = (PRTL_CRITICAL_SECTION_DEBUG)i->ProcessLocksList.Flink;
				!i;
				i = (PRTL_CRITICAL_SECTION_DEBUG) * ((_QWORD*)&lpCriticalSection[399].DebugInfo + v3))
			{
				v3 = (unsigned int)(v3 + 1);
				if ((unsigned int)v3 >= 0xC1)
					break;
			}
			if (v7[6] < 0)
				(*(void(__fastcall**)(int*))(*(_QWORD*)v7 + 16i64))(v7);
		} while (i);
	}
	else
	{
		while (1)
		{
			v3 = (unsigned int)(v3 + 1);
			if ((unsigned int)v3 >= 0xC1)
				break;
			i = (PRTL_CRITICAL_SECTION_DEBUG) * ((_QWORD*)&lpCriticalSection[399].DebugInfo + v3);
			if (i)
				goto LABEL_17;
		}
	}
}
// 140831239: conditional instruction was optimized away because rsi.8==0
// 1408312AC: conditional instruction was optimized away because rdi.8==0

