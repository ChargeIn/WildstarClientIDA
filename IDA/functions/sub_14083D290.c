//----- (000000014083D290) ----------------------------------------------------
__int64 __fastcall sub_14083D290(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int* v6; // rax
	__int64 v7; // rdi
	int v9; // ebp
	_BYTE* v10; // rbx
	unsigned int v11; // edi
	_BYTE* v12; // rax
	_QWORD* v13; // rcx

	v6 = (unsigned int*)sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v7 = (__int64)v6;
	if (!v6)
		return 2i64;
	v9 = *v6;
	v10 = (_BYTE*)sub_140830F00(qword_140C61BA8, *v6, 0);
	if (v10)
	{
		EnterCriticalSection(&stru_140C61BB8);
		v11 = sub_14086F9F0(v10, v7, *(_DWORD*)(a2 + 1), a3, 1);
		LeaveCriticalSection(&stru_140C61BB8);
		if (v11 == 1)
			goto LABEL_12;
		(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v10 + 16i64))(v10);
	}
	else
	{
		EnterCriticalSection(&stru_140C61BB8);
		v12 = sub_14086F480(v9);
		v10 = v12;
		if (v12)
		{
			v11 = sub_14086F9F0(v12, v7, *(_DWORD*)(a2 + 1), a3, 0);
			if (v11 != 1)
				(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v10 + 16i64))(v10);
		}
		else
		{
			v11 = 2;
		}
		LeaveCriticalSection(&stru_140C61BB8);
	}
	if (v11 == 1)
	{
	LABEL_12:
		v13 = *(_QWORD**)(a3 + 96);
		if ((unsigned int)(((__int64)v13 - *(_QWORD*)(a3 + 88)) >> 3) < *(_DWORD*)(a3 + 104))
		{
			*(_QWORD*)(a3 + 96) = v13 + 1;
			if (v13)
				*v13 = v10;
		}
	}
	sub_14083C740(a1);
	return v11;
}

