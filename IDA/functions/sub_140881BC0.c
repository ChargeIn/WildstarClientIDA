//----- (0000000140881BC0) ----------------------------------------------------
__int64 __fastcall sub_140881BC0(__int64 a1, unsigned int a2, unsigned int a3, int a4, unsigned int a5)
{
	__int64 v6; // r13
	int v9; // ebp
	__int64 v11; // rbx
	int v12; // esi
	struct _RTL_CRITICAL_SECTION* i; // rdi
	unsigned int v14; // edi
	unsigned __int64 v15; // rax
	unsigned __int64 v16; // rcx
	_QWORD* v17; // rax
	_QWORD* j; // rdx
	_QWORD* v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rcx

	v6 = a3;
	v9 = a4 & 3;
	if ((a4 & 3) != 0)
	{
		if ((unsigned int)(v9 - 1) > 1)
			return 0xFFFFFFFFi64;
	}
	else if (!a1)
	{
		return 0xFFFFFFFFi64;
	}
	if (dword_140C62910 >= dword_140C6290C)
		return 0xFFFFFFFFi64;
	v11 = qword_140C62918;
	v12 = 0;
	if (dword_140C6290C <= 0)
		return 0xFFFFFFFFi64;
	for (i = (struct _RTL_CRITICAL_SECTION*)(qword_140C62918 + 48); ; i = (struct _RTL_CRITICAL_SECTION*)((char*)i + 112))
	{
		EnterCriticalSection(i);
		if (!*(_DWORD*)v11)
			break;
		LeaveCriticalSection(i);
		++v12;
		v11 += 112i64;
		if (v12 >= dword_140C6290C)
			return 0xFFFFFFFFi64;
	}
	if (v12 >= dword_140C6290C)
		return 0xFFFFFFFFi64;
	v14 = v6 * (a2 / (unsigned int)v6);
	if (a1)
	{
		*(_DWORD*)(v11 + 44) &= ~1u;
		*(_QWORD*)(v11 + 16) = a1;
	LABEL_26:
		*(_DWORD*)(v11 + 40) = a4;
		*(_DWORD*)(v11 + 104) = v14;
		if ((a4 & 8) != 0)
		{
			v17 = *(_QWORD**)(v11 + 16);
			for (j = (_QWORD*)((char*)v17 + v14); v17 != j; v17 = (_QWORD*)((char*)v17 + v6))
			{
				*v17 = 0i64;
				v19 = *(_QWORD**)(v11 + 32);
				if (v19)
					*v19 = v17;
				else
					*(_QWORD*)(v11 + 24) = v17;
				*(_QWORD*)(v11 + 32) = v17;
			}
			goto LABEL_40;
		}
		v20 = sub_140882310(*(_QWORD*)(v11 + 16), v14);
		*(_QWORD*)(v11 + 88) = v20;
		if (v20)
		{
			*(_DWORD*)(v11 + 104) -= sub_140882720();
		LABEL_40:
			*(_DWORD*)(v11 + 4) = v6;
			*(_DWORD*)(v11 + 96) = a5;
			*(_DWORD*)v11 = a2 / (unsigned int)v6;
			++dword_140C62910;
			LeaveCriticalSection((LPCRITICAL_SECTION)(v11 + 48));
			return (unsigned int)v12;
		}
		v21 = *(_QWORD*)(v11 + 8);
		if ((*(_DWORD*)(v11 + 40) & 3) == 2)
			sub_140344CA0(v21);
		else
			sub_140001E60(v21);
		*(_QWORD*)(v11 + 8) = 0i64;
		*(_QWORD*)(v11 + 16) = 0i64;
		goto LABEL_38;
	}
	if (v9 == 2)
	{
		if (!(v14 + a5))
			goto LABEL_20;
		v15 = sub_140344C70(0i64, v14 + a5);
	}
	else
	{
		if (!(v14 + a5))
			goto LABEL_20;
		v15 = (unsigned __int64)sub_140344C60(v14 + a5);
	}
	*(_QWORD*)(v11 + 8) = v15;
LABEL_20:
	v16 = *(_QWORD*)(v11 + 8);
	*(_QWORD*)(v11 + 16) = v16;
	if (v16)
	{
		if (a5 && v16 % a5)
			*(_QWORD*)(v11 + 16) = v16 + a5 - v16 % a5;
		*(_DWORD*)(v11 + 44) |= 1u;
		goto LABEL_26;
	}
LABEL_38:
	LeaveCriticalSection((LPCRITICAL_SECTION)(v11 + 48));
	return 0xFFFFFFFFi64;
}
// 140C6290C: using guessed type int dword_140C6290C;
// 140C62910: using guessed type int dword_140C62910;
// 140C62918: using guessed type __int64 qword_140C62918;

