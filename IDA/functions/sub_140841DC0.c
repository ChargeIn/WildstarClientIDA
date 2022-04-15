//----- (0000000140841DC0) ----------------------------------------------------
__int64 __fastcall sub_140841DC0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v5; // ebx
	unsigned int* v6; // rax
	__int64 v7; // r14
	int v9; // ebp
	__int64 v10; // rdi
	__int64* v11; // rcx

	v5 = 1;
	v6 = (unsigned int*)sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v7 = (__int64)v6;
	if (!v6)
		return 2i64;
	v9 = *v6;
	v10 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776), *v6);
	if (v10)
	{
	LABEL_10:
		v11 = *(__int64**)(a3 + 96);
		if ((unsigned int)(((__int64)v11 - *(_QWORD*)(a3 + 88)) >> 3) < *(_DWORD*)(a3 + 104))
		{
			*(_QWORD*)(a3 + 96) = v11 + 1;
			if (v11)
				*v11 = v10;
		}
		goto LABEL_13;
	}
	v10 = sub_14084BAB0(v9);
	if (v10)
	{
		EnterCriticalSection(&stru_140C61BB8);
		v5 = sub_14084BBA0(v10, v7);
		if (v5 == 1)
			sub_14084BA40(v10);
		else
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
		LeaveCriticalSection(&stru_140C61BB8);
		if (v5 != 1)
			goto LABEL_13;
		goto LABEL_10;
	}
	v5 = 2;
LABEL_13:
	sub_14083C740(a1);
	return v5;
}

