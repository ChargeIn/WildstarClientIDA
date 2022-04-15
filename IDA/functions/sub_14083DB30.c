#include "../winhttp.h"

//----- (000000014083DB30) ----------------------------------------------------
__int64 __fastcall sub_14083DB30(__int64 a1, __int64 a2, __int64 a3, struct _RTL_CRITICAL_SECTION* a4)
{
	unsigned int v8; // ebx
	unsigned int* v9; // rax
	__int64 v10; // r14
	int v12; // ebp
	__int64 v13; // rdi
	_BYTE* v14; // rax
	__int64* v15; // rcx

	v8 = 1;
	v9 = (unsigned int*)sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v10 = (__int64)v9;
	if (!v9)
		return 2i64;
	v12 = *v9;
	v13 = sub_14083EDE0(a4, *v9);
	if (v13)
		goto LABEL_9;
	EnterCriticalSection(&stru_140C61BB8);
	v14 = (_BYTE*)sub_14086E7E0(v12);
	v13 = (__int64)v14;
	if (v14)
	{
		v8 = sub_14086EB20(v14, v10, *(_DWORD*)(a2 + 1));
		if (v8 != 1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
	}
	else
	{
		v8 = 2;
	}
	LeaveCriticalSection(&stru_140C61BB8);
	if (v8 == 1)
	{
	LABEL_9:
		v15 = *(__int64**)(a3 + 96);
		if ((unsigned int)(((__int64)v15 - *(_QWORD*)(a3 + 88)) >> 3) < *(_DWORD*)(a3 + 104))
		{
			*(_QWORD*)(a3 + 96) = v15 + 1;
			if (v15)
				*v15 = v13;
		}
	}
	sub_14083C740(a1);
	return v8;
}

