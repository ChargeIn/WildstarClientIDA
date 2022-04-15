#include "../winhttp.h"

//----- (0000000140841ED0) ----------------------------------------------------
__int64 __fastcall sub_140841ED0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v5; // ebx
	unsigned int* v6; // rax
	__int64 v7; // r14
	int v9; // ebp
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64* v12; // rcx

	v5 = 1;
	v6 = (unsigned int*)sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v7 = (__int64)v6;
	if (!v6)
		return 2i64;
	v9 = *v6;
	v10 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 3184), *v6);
	if (v10)
		goto LABEL_9;
	EnterCriticalSection(&stru_140C61BB8);
	v11 = sub_1408690B0(v9);
	v10 = v11;
	if (v11)
	{
		v5 = sub_1408691C0(v11, v7);
		if (v5 != 1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
	}
	else
	{
		v5 = 2;
	}
	LeaveCriticalSection(&stru_140C61BB8);
	if (v5 == 1)
	{
	LABEL_9:
		v12 = *(__int64**)(a3 + 96);
		if ((unsigned int)(((__int64)v12 - *(_QWORD*)(a3 + 88)) >> 3) < *(_DWORD*)(a3 + 104))
		{
			*(_QWORD*)(a3 + 96) = v12 + 1;
			if (v12)
				*v12 = v10;
		}
	}
	sub_14083C740(a1);
	return v5;
}

