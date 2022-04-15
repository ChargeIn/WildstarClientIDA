//----- (000000014083D3D0) ----------------------------------------------------
__int64 __fastcall sub_14083D3D0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v6; // edi
	unsigned int* v7; // rax
	__int64 v8; // r14
	int v10; // ebp
	__int64 v11; // rax
	_BYTE* v12; // rbx
	int v13; // eax
	_BYTE* v14; // rax
	_QWORD* v15; // rcx

	v6 = 1;
	v7 = (unsigned int*)sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v8 = (__int64)v7;
	if (!v7)
		return 2i64;
	v10 = *v7;
	v11 = sub_140830F00(qword_140C61BA8, *v7, 0);
	v12 = (_BYTE*)v11;
	if (v11)
	{
		v13 = *(_DWORD*)(v11 + 184);
		if ((v13 & 0x7C) != 0 && (v13 & 0x80) != 0)
			goto LABEL_14;
		EnterCriticalSection(&stru_140C61BB8);
		v6 = sub_1408583F0(v12, v8, *(_DWORD*)(a2 + 1), a3, 1);
		LeaveCriticalSection(&stru_140C61BB8);
		if (v6 == 1)
			goto LABEL_14;
		(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v12 + 16i64))(v12);
	}
	else
	{
		EnterCriticalSection(&stru_140C61BB8);
		v14 = sub_140857F40(v10);
		v12 = v14;
		if (v14)
		{
			v6 = sub_1408583F0(v14, v8, *(_DWORD*)(a2 + 1), a3, 0);
			if (v6 != 1)
				(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v12 + 16i64))(v12);
		}
		else
		{
			v6 = 2;
		}
		LeaveCriticalSection(&stru_140C61BB8);
	}
	if (v6 == 1)
	{
	LABEL_14:
		v15 = *(_QWORD**)(a3 + 96);
		if ((unsigned int)(((__int64)v15 - *(_QWORD*)(a3 + 88)) >> 3) < *(_DWORD*)(a3 + 104))
		{
			*(_QWORD*)(a3 + 96) = v15 + 1;
			if (v15)
				*v15 = v12;
		}
	}
	sub_14083C740(a1);
	return v6;
}

