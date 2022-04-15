//----- (0000000140069810) ----------------------------------------------------
void __fastcall sub_140069810(__int64 a1)
{
	int v1; // esi
	int v3; // edi
	__int64 v4; // rax
	bool v5; // zf
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // r8
	int v9[6]; // [rsp+20h] [rbp-28h] BYREF

	v1 = 0;
	v3 = 0;
	while (1)
	{
		v4 = sub_140065780(a1);
		sub_140065950(a1, v4, v3++);
		if (*(_DWORD*)(a1 + 16) != 44)
			break;
		v5 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v5)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v6 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v6;
		}
	}
	if (*(_DWORD*)(a1 + 16) == 61)
	{
		v5 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v5)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v7 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v7;
		}
		v1 = sub_1400673D0(a1, v9);
	}
	else
	{
		v9[0] = 0;
	}
	sub_140065D50(a1, v3, v1, (unsigned int*)v9);
	v8 = *(_QWORD*)(a1 + 48);
	for (*(_BYTE*)(v8 + 74) += v3; v3; --v3)
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v8 + 48i64)
			+ 16i64 * *(unsigned __int16*)(v8 + 2 * (*(unsigned __int8*)(v8 + 74) - (__int64)v3) + 196)
			+ 8) = *(_DWORD*)(v8 + 48);
}

