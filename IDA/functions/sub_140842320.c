//----- (0000000140842320) ----------------------------------------------------
void __fastcall sub_140842320(struct _RTL_CRITICAL_SECTION* a1, unsigned int a2)
{
	struct _RTL_CRITICAL_SECTION* v2; // rbx
	int* p_OwningThread; // r15
	_QWORD* v6; // r14
	__int64 v7; // rsi
	int* v8; // r12
	__int64 v9; // rdi
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rdx

	v2 = a1 + 3;
	EnterCriticalSection(a1 + 3);
	p_OwningThread = (int*)&a1[5].OwningThread;
	v6 = 0i64;
	v7 = a2 % 0xC1;
	v8 = &p_OwningThread[2 * v7];
	v9 = *((_QWORD*)v8 + 1);
	if (v9)
	{
		while (*(_DWORD*)(v9 + 8) != a2)
		{
			v6 = (_QWORD*)v9;
			v9 = *(_QWORD*)v9;
			if (!v9)
				goto LABEL_18;
		}
		if ((*(_DWORD*)(v9 + 56))-- == 1)
		{
			v11 = *(_QWORD*)(v9 + 16);
			if (v11)
			{
				sub_140881720(SHIDWORD(qword_140C61B18), v11);
				*(_QWORD*)(v9 + 16) = 0i64;
				*(_DWORD*)(v9 + 24) = 0;
			}
		}
		if (!*(_DWORD*)(v9 + 56))
		{
			v12 = *(_QWORD*)v9;
			if (!*(_QWORD*)v9)
			{
				do
					v7 = (unsigned int)(v7 + 1);
				while ((unsigned int)v7 < 0xC1 && !*(_QWORD*)&p_OwningThread[2 * v7 + 2]);
			}
			if (v6)
				*v6 = v12;
			else
				*((_QWORD*)v8 + 1) = v12;
			v13 = *(_QWORD*)(v9 + 32);
			if (v13)
			{
				*(_QWORD*)(v9 + 40) = v13;
				sub_140881720(dword_140C10F20, v13);
				*(_QWORD*)(v9 + 32) = 0i64;
				*(_QWORD*)(v9 + 40) = 0i64;
				*(_DWORD*)(v9 + 48) = 0;
			}
			sub_140881720(*p_OwningThread, v9);
			--p_OwningThread[388];
		}
	}
LABEL_18:
	LeaveCriticalSection(v2);
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B18: using guessed type __int64 qword_140C61B18;

