//----- (000000014083DA30) ----------------------------------------------------
__int64 __fastcall sub_14083DA30(__int64 a1, __int64 a2, __int64 a3, struct _RTL_CRITICAL_SECTION* a4)
{
	unsigned int v7; // ebx
	unsigned int* v8; // rax
	__int64 v9; // r14
	int v11; // ebp
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64* v14; // rcx

	v7 = 1;
	v8 = (unsigned int*)sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v9 = (__int64)v8;
	if (!v8)
		return 2i64;
	v11 = *v8;
	v12 = sub_14083EDE0(a4, *v8);
	if (v12)
		goto LABEL_9;
	EnterCriticalSection(&stru_140C61BB8);
	v13 = sub_1408576B0(v11);
	v12 = v13;
	if (v13)
	{
		v7 = sub_140857AD0(v13, v9);
		if (v7 != 1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	}
	else
	{
		v7 = 2;
	}
	LeaveCriticalSection(&stru_140C61BB8);
	if (v7 == 1)
	{
	LABEL_9:
		v14 = *(__int64**)(a3 + 96);
		if ((unsigned int)(((__int64)v14 - *(_QWORD*)(a3 + 88)) >> 3) < *(_DWORD*)(a3 + 104))
		{
			*(_QWORD*)(a3 + 96) = v14 + 1;
			if (v14)
				*v14 = v12;
		}
	}
	sub_14083C740(a1);
	return v7;
}

