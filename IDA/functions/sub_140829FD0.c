#include "../winhttp.h"

//----- (0000000140829FD0) ----------------------------------------------------
__int64 __fastcall sub_140829FD0(struct _RTL_CRITICAL_SECTION* a1, int a2, int a3)
{
	struct _RTL_CRITICAL_SECTION* v3; // rbx
	__int64* p_OwningThread; // rsi
	__int64 v8; // rdi
	__int64 v9; // rax

	v3 = a1 + 3;
	EnterCriticalSection(a1 + 3);
	if (a3 == 1)
		p_OwningThread = (__int64*)&a1[4];
	else
		p_OwningThread = (__int64*)&a1[4].OwningThread;
	v8 = *p_OwningThread;
	if (*p_OwningThread)
	{
		while (a2 != *(_DWORD*)(v8 + 32))
		{
			v8 = *(_QWORD*)v8;
			if (!v8)
				goto LABEL_7;
		}
	}
	else
	{
	LABEL_7:
		v9 = sub_1408819F0(dword_140C10F20, 56i64);
		v8 = v9;
		if (v9)
		{
			*(_QWORD*)v9 = 0i64;
			*(_QWORD*)(v9 + 8) = 0i64;
			*(_QWORD*)(v9 + 16) = 0i64;
			*(_DWORD*)(v9 + 24) = 0;
			*(_DWORD*)(v9 + 32) = a2;
			*(_QWORD*)(v9 + 40) = 0i64;
			*(_QWORD*)(v9 + 48) = 0i64;
			if (*p_OwningThread)
			{
				*(_QWORD*)v9 = *p_OwningThread;
				*p_OwningThread = v9;
			}
			else
			{
				p_OwningThread[1] = v9;
				*p_OwningThread = v9;
				*(_QWORD*)v9 = 0i64;
			}
		}
	}
	LeaveCriticalSection(v3);
	return v8;
}
// 140C10F20: using guessed type int dword_140C10F20;

