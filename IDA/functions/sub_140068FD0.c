//----- (0000000140068FD0) ----------------------------------------------------
void __fastcall sub_140068FD0(__int64 a1, __int64 a2)
{
	__int64 v2; // r14
	__int64 v3; // rdi
	int v5; // r15d
	__int64 v7; // rsi
	_DWORD* v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rsi
	_DWORD* v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rsi
	_DWORD* v14; // rax
	int v15; // edi
	bool v16; // zf
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	int v20; // esi
	int v21; // eax
	int v22; // ecx
	const char* v23; // rax
	unsigned int v24[6]; // [rsp+30h] [rbp-48h] BYREF

	v2 = *(_QWORD*)(a1 + 48);
	v3 = *(_QWORD*)(a1 + 56);
	v5 = *(_DWORD*)(v2 + 60);
	v7 = sub_140062650(v3, (unsigned __int64*)aForGenerator, 0xFui64);
	v8 = sub_14005C630(v3, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v7);
	if (!v8[2])
	{
		*v8 = 1;
		v8[2] = 1;
	}
	sub_140065950(a1, v7, 0);
	v9 = *(_QWORD*)(a1 + 56);
	v10 = sub_140062650(v9, (unsigned __int64*)aForState, 0xBui64);
	v11 = sub_14005C630(v9, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v10);
	if (!v11[2])
	{
		*v11 = 1;
		v11[2] = 1;
	}
	sub_140065950(a1, v10, 1);
	v12 = *(_QWORD*)(a1 + 56);
	v13 = sub_140062650(v12, (unsigned __int64*)aForControl, 0xDui64);
	v14 = sub_14005C630(v12, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v13);
	if (!v14[2])
	{
		*v14 = 1;
		v14[2] = 1;
	}
	sub_140065950(a1, v13, 2);
	sub_140065950(a1, a2, 3);
	v15 = 4;
	while (*(_DWORD*)(a1 + 16) == 44)
	{
		v16 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v16)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v17 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v17;
		}
		v18 = sub_140065780(a1);
		sub_140065950(a1, v18, v15++);
	}
	if (*(_DWORD*)(a1 + 16) != 267)
	{
		v23 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", aIn);
		sub_140062CF0(a1, v23, *(_DWORD*)(a1 + 16));
	}
	v16 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v16)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v19 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v19;
	}
	v20 = *(_DWORD*)(a1 + 4);
	v21 = sub_1400673D0(a1, (int*)v24);
	sub_140065D50(a1, 3, v21, v24);
	v22 = *(_DWORD*)(v2 + 60) + 3;
	if (v22 > *(unsigned __int8*)(*(_QWORD*)v2 + 115i64))
	{
		if (v22 >= 250)
			sub_140062CF0(*(_QWORD*)(v2 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 16i64));
		*(_BYTE*)(*(_QWORD*)v2 + 115i64) = v22;
	}
	sub_140068980(a1, v5, v20, v15 - 3, 0);
}
// 140068FD0: using guessed type unsigned int var_48[6];

