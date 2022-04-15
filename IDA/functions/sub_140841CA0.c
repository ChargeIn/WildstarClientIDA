//----- (0000000140841CA0) ----------------------------------------------------
__int64 __fastcall sub_140841CA0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v6; // ebx
	unsigned int* v7; // rax
	unsigned int* v8; // r15
	int v10; // r14d
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64* v13; // rcx

	v6 = 1;
	v7 = (unsigned int*)sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v8 = v7;
	if (!v7)
		return 2i64;
	v10 = *v7;
	v11 = sub_140830F00(qword_140C61BA8, *v7, 1);
	if (v11)
		goto LABEL_11;
	if (!*(_BYTE*)(a1 + 208))
		sub_140859B30();
	EnterCriticalSection(&stru_140C61BB8);
	v12 = sub_140859B70(v10);
	v11 = v12;
	if (v12)
	{
		v6 = (*(__int64(__fastcall**)(__int64, unsigned int*, _QWORD))(*(_QWORD*)v12 + 648i64))(
			v12,
			v8,
			*(unsigned int*)(a2 + 1));
		if (v6 != 1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
	}
	else
	{
		v6 = 2;
	}
	LeaveCriticalSection(&stru_140C61BB8);
	if (v6 == 1)
	{
	LABEL_11:
		v13 = *(__int64**)(a3 + 96);
		if ((unsigned int)(((__int64)v13 - *(_QWORD*)(a3 + 88)) >> 3) < *(_DWORD*)(a3 + 104))
		{
			*(_QWORD*)(a3 + 96) = v13 + 1;
			if (v13)
				*v13 = v11;
		}
		*(_BYTE*)(a1 + 208) = 1;
	}
	sub_14083C740(a1);
	return v6;
}

