//----- (000000014088E290) ----------------------------------------------------
__int64 __fastcall sub_14088E290(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v6; // edi
	unsigned int* v7; // rax
	__int64 v8; // r14
	int v10; // ebp
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax

	v6 = 1;
	v7 = (unsigned int*)sub_14083C610(a1, *(_DWORD*)(a2 + 1));
	v8 = (__int64)v7;
	if (!v7)
		return 2i64;
	v10 = *v7;
	v11 = sub_140830F00(qword_140C61BA8, *v7, 0);
	v12 = v11;
	if (v11)
	{
		if (*(_QWORD*)(v11 + 176) != *(_QWORD*)(v11 + 168) && sub_140894360(v11))
			goto LABEL_14;
		EnterCriticalSection(&stru_140C61BB8);
		v6 = sub_1408947C0(v12, v8, *(_DWORD*)(a2 + 1), a3, 1);
		LeaveCriticalSection(&stru_140C61BB8);
		if (v6 == 1)
			goto LABEL_14;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	}
	else
	{
		EnterCriticalSection(&stru_140C61BB8);
		v13 = sub_140894180(v10);
		v12 = v13;
		if (v13)
		{
			v6 = sub_1408947C0(v13, v8, *(_DWORD*)(a2 + 1), a3, 0);
			if (v6 != 1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
		}
		else
		{
			v6 = 2;
		}
		LeaveCriticalSection(&stru_140C61BB8);
	}
	if (v6 == 1)
		LABEL_14:
	sub_14083E110(a1, a3, v12);
	sub_14083C740(a1);
	return v6;
}

