//----- (000000014083E430) ----------------------------------------------------
void __fastcall sub_14083E430(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v2; // r13
	PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r14
	__int64 v4; // rsi
	PRTL_CRITICAL_SECTION_DEBUG v5; // r15
	__int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rax
	unsigned __int64 v9; // [rsp+20h] [rbp-48h]
	__m128i v10; // [rsp+30h] [rbp-38h] BYREF

	v2 = (LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776);
	EnterCriticalSection(&stru_140C61BB8);
	EnterCriticalSection(v2);
	DebugInfo = v2[1].DebugInfo;
	LODWORD(v4) = 0;
	if (DebugInfo)
	{
		while (1)
		{
		LABEL_6:
			while (1)
			{
				v5 = DebugInfo;
				if (!DebugInfo->Flags)
					break;
				(*(void(__fastcall**)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD*)&DebugInfo->Type + 8i64))(DebugInfo);
				if (DebugInfo->Flags)
				{
					v6 = *(_QWORD*)&DebugInfo->EntryCount;
					DebugInfo->Flags = 0;
					while (v6)
					{
						v7 = v6;
						v6 = *(_QWORD*)(v6 + 32);
						if (*(_WORD*)(v7 + 60) == 1027)
						{
							sub_1408552B0(*(_DWORD*)(v7 + 56));
							LODWORD(v9) = *(_DWORD*)(v7 + 64);
							v10 = (__m128i)v9;
							v8 = sub_140868CC0(a1 + 1776, &v10);
							if (v8)
								sub_140842230(v8, 0);
						}
					}
					(*(void(__fastcall**)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD*)&DebugInfo->Type + 16i64))(DebugInfo);
				}
				for (DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)DebugInfo->ProcessLocksList.Flink;
					!DebugInfo;
					DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG) * ((_QWORD*)&v2[1].DebugInfo + v4))
				{
					v4 = (unsigned int)(v4 + 1);
					if ((unsigned int)v4 >= 0xC1)
						break;
				}
				(*(void(__fastcall**)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD*)&v5->Type + 16i64))(v5);
			LABEL_18:
				if (!DebugInfo)
					goto LABEL_19;
			}
			DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)DebugInfo->ProcessLocksList.Flink;
			if (!DebugInfo)
			{
				while (1)
				{
					v4 = (unsigned int)(v4 + 1);
					if ((unsigned int)v4 >= 0xC1)
						goto LABEL_18;
					DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG) * ((_QWORD*)&v2[1].DebugInfo + v4);
					if (DebugInfo)
						goto LABEL_6;
				}
			}
		}
	}
	while (1)
	{
		v4 = (unsigned int)(v4 + 1);
		if ((unsigned int)v4 >= 0xC1)
			break;
		DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG) * ((_QWORD*)&v2[1].DebugInfo + v4);
		if (DebugInfo)
			goto LABEL_6;
	}
LABEL_19:
	LeaveCriticalSection(v2);
	LeaveCriticalSection(&stru_140C61BB8);
}
// 14083E489: conditional instruction was optimized away because r14.8==0
// 14083E517: variable 'v9' is possibly undefined

