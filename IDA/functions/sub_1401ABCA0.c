//----- (00000001401ABCA0) ----------------------------------------------------
__int64 __fastcall sub_1401ABCA0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // rbx
	__int64 v4; // rbp
	__int64 v6; // rax
	int v8; // ecx
	__int64 v9; // rdi
	unsigned int v10; // eax
	unsigned int v11; // edi
	unsigned int v12; // ebp
	int v13; // eax
	unsigned int v14; // eax

	v3 = *(_QWORD*)(a1 + 40);
	v4 = a3;
	if (!*(_QWORD*)(v3 + 56))
	{
		v6 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(a1 + 48))(
			*(_QWORD*)(a1 + 64),
			(unsigned int)(1 << *(_DWORD*)(v3 + 40)),
			1i64);
		*(_QWORD*)(v3 + 56) = v6;
		if (!v6)
			return 1i64;
	}
	if (!*(_DWORD*)(v3 + 44))
	{
		v8 = *(_DWORD*)(v3 + 40);
		*(_QWORD*)(v3 + 48) = 0i64;
		*(_DWORD*)(v3 + 44) = 1 << v8;
	}
	v9 = *(unsigned int*)(v3 + 44);
	if ((unsigned int)v4 < (unsigned int)v9)
	{
		v11 = v9 - *(_DWORD*)(v3 + 52);
		if (v11 > (unsigned int)v4)
			v11 = v4;
		sub_1407DB590((int*)(*(_QWORD*)(v3 + 56) + *(unsigned int*)(v3 + 52)), (int*)(a2 - v4), v11);
		v12 = v4 - v11;
		if (v12)
		{
			sub_1407DB590(*(int**)(v3 + 56), (int*)(a2 - v12), v12);
			v10 = *(_DWORD*)(v3 + 44);
			*(_DWORD*)(v3 + 52) = v12;
		}
		else
		{
			*(_DWORD*)(v3 + 52) += v11;
			v13 = *(_DWORD*)(v3 + 52);
			if (v13 == *(_DWORD*)(v3 + 44))
				v13 = 0;
			*(_DWORD*)(v3 + 52) = v13;
			v14 = *(_DWORD*)(v3 + 48);
			if (v14 >= *(_DWORD*)(v3 + 44))
				return 0i64;
			v10 = v11 + v14;
		}
	}
	else
	{
		sub_1407DB590(*(int**)(v3 + 56), (int*)(a2 - v9), (unsigned int)v9);
		v10 = *(_DWORD*)(v3 + 44);
		*(_DWORD*)(v3 + 52) = 0;
	}
	*(_DWORD*)(v3 + 48) = v10;
	return 0i64;
}

