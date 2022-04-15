//----- (000000014082C8E0) ----------------------------------------------------
void __fastcall sub_14082C8E0(LPCRITICAL_SECTION lpCriticalSection)
{
	int i; // esi
	__int64 v3; // rdx
	int v4; // eax
	__int64 v5; // rbx
	int SpinCount; // ebx
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // r8
	__int64 v10; // r9

	EnterCriticalSection(&stru_140C61BB8);
	for (i = sub_140833F20(); ; --i)
	{
		sub_14082CC10(lpCriticalSection);
		sub_14082DF30((__int64)lpCriticalSection);
		if (byte_140C62414)
			sub_140858EF0();
		if (!i)
			break;
		v3 = qword_140C61BE0;
		v4 = ((qword_140C61BE8 - qword_140C61BE0) >> 3) - 1;
		v5 = v4;
		if (v4 >= 0)
		{
			while (1)
			{
				(*(void(__fastcall**)(_QWORD))(v3 + 8 * v5--))(0i64);
				if (v5 < 0)
					break;
				v3 = qword_140C61BE0;
			}
		}
		SpinCount = lpCriticalSection[4].SpinCount;
		sub_14083B030(qword_140C61B70, SpinCount + 1);
		sub_14083A5E0((__int64**)qword_140C61B98, SpinCount + 1);
		sub_14084B1C0();
		sub_140844710(v8, v7, v9, v10);
		sub_140834340();
		sub_1408441B0();
		++LODWORD(lpCriticalSection[4].SpinCount);
	}
	if (qword_140C61FE0)
		sub_140845C90(qword_140C61FE0);
	LeaveCriticalSection(&stru_140C61BB8);
}
// 14082C980: variable 'v8' is possibly undefined
// 14082C980: variable 'v7' is possibly undefined
// 14082C980: variable 'v9' is possibly undefined
// 14082C980: variable 'v10' is possibly undefined
// 140C61B70: using guessed type __int64 qword_140C61B70;
// 140C61B98: using guessed type __int64 qword_140C61B98;
// 140C61BE0: using guessed type __int64 qword_140C61BE0;
// 140C61BE8: using guessed type __int64 qword_140C61BE8;
// 140C61FE0: using guessed type __int64 qword_140C61FE0;
// 140C62414: using guessed type char byte_140C62414;

