//----- (0000000140617640) ----------------------------------------------------
__int64 __fastcall sub_140617640(__int64 a1, __int64 a2)
{
	unsigned int v3; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbx
	int* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // r8
	__int64 result; // rax
	int v13; // edx
	int v14; // ecx
	__int64 v15; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v18; // [rsp+20h] [rbp-18h]

	v3 = *(_DWORD*)(a2 + 8);
	v5 = *(_QWORD*)(a1 + 120);
	LODWORD(v18) = v3;
	v6 = *(_QWORD*)(v5 + 8);
	v7 = v5;
	while (v6)
	{
		v7 = v6;
		if (v3 >= *(_DWORD*)(v6 + 32))
			v6 = *(_QWORD*)(v6 + 24);
		else
			v6 = *(_QWORD*)(v6 + 16);
	}
	if (v7 == v5 || v3 < *(_DWORD*)(v7 + 32))
	{
		v8 = sub_14018B280(48i64, 0);
		if (v8 != (int*)-32i64)
		{
			*((_QWORD*)v8 + 4) = v18;
			*((_QWORD*)v8 + 5) = a2;
		}
		*(_QWORD*)(v7 + 16) = v8;
		v10 = *(_QWORD*)(a1 + 120);
		if (v7 == v10)
		{
			*(_QWORD*)(v10 + 8) = v8;
			*(_QWORD*)(*(_QWORD*)(a1 + 120) + 24i64) = v8;
		}
		else if (v7 == *(_QWORD*)(v10 + 16))
		{
			*(_QWORD*)(v10 + 16) = v8;
		}
	}
	else
	{
		v8 = sub_14018B280(48i64, 0);
		if (v8 != (int*)-32i64)
		{
			*((_QWORD*)v8 + 4) = v18;
			*((_QWORD*)v8 + 5) = a2;
		}
		*(_QWORD*)(v7 + 24) = v8;
		v9 = *(_QWORD*)(a1 + 120);
		if (v7 == *(_QWORD*)(v9 + 24))
			*(_QWORD*)(v9 + 24) = v8;
	}
	*((_QWORD*)v8 + 1) = v7;
	*((_QWORD*)v8 + 2) = 0i64;
	*((_QWORD*)v8 + 3) = 0i64;
	sub_1400081C0((__int64)v8, (_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64));
	++* (_QWORD*)(a1 + 128);
	v11 = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(a1 + 144) = 0;
	result = *(_QWORD*)(v11 + 16);
	v13 = -1;
	while (result != v11)
	{
		v14 = *(_DWORD*)(result + 32);
		if (v14 != v13)
		{
			++* (_DWORD*)(a1 + 144);
			v13 = v14;
		}
		v15 = *(_QWORD*)(result + 24);
		if (v15)
		{
			result = *(_QWORD*)(result + 24);
			for (i = *(_QWORD*)(v15 + 16); i; i = *(_QWORD*)(i + 16))
				result = i;
		}
		else
		{
			for (j = *(_QWORD*)(result + 8); result == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				result = j;
			if (*(_QWORD*)(result + 24) != j)
				result = j;
		}
	}
	return result;
}
// 14061768F: conditional instruction was optimized away because rax.8==0
// 1406176B1: variable 'v18' is possibly undefined

