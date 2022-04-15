//----- (000000014050C530) ----------------------------------------------------
__int64 __fastcall sub_14050C530(__int64 a1)
{
	__int64 v1; // r9
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	int v7; // r15d
	__int64 result; // rax
	__int64 v9; // rbp
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int16* v13; // rdi
	__int64 v14; // rax
	unsigned __int16* v15; // rsi
	int v16; // ebx
	int v17; // eax
	int v18; // ebp
	__int64 v19; // rax
	__int64* v20; // rax
	__int64 v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rax
	__int64* v24; // rax
	__int64 v25; // rcx
	__int64* v26; // rax
	int v27; // [rsp+48h] [rbp+10h] BYREF
	int v28; // [rsp+4Ch] [rbp+14h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_1400F26A0(v1 + 384, 1);
	v27 = 300;
	v28 = v7;
	result = sub_1403AC780(qword_140C65898 + 160, &v27);
	v9 = result;
	if (result)
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v10 = *(_QWORD*)(a1 + 16);
		v11 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v10 + 8) = 5;
		*(_QWORD*)v10 = v11;
		*(_QWORD*)(a1 + 16) += 16i64;
		v13 = sub_14034BDD0(v12, *(_DWORD*)(*(_QWORD*)(v9 + 64) + 476i64));
		v14 = *(_QWORD*)(v9 + 64);
		v15 = *(unsigned __int16**)(v14 + 488);
		v16 = *(_DWORD*)v14;
		v17 = *(_DWORD*)(v9 + 120);
		v18 = 1;
		if (v17)
			v18 = v17;
		sub_140058710(a1, (unsigned __int64*)"itemId", 6ui64);
		v19 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v19 + 8) = 3;
		*(double*)v19 = (double)v16;
		*(_QWORD*)(a1 + 16) += 16i64;
		v20 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v20, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_1400F0090(a1, v21, (unsigned __int64*)"name", (unsigned __int16*)v13);
		sub_1400F0090(a1, v22, (unsigned __int64*)"icon", v15);
		sub_140058710(a1, (unsigned __int64*)"StackCount", 0xAui64);
		v23 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v23 + 8) = 3;
		*(double*)v23 = (double)v18;
		*(_QWORD*)(a1 + 16) += 16i64;
		v24 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v24, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_140058710(a1, (unsigned __int64*)"InventoryIndex", 0xEui64);
		v25 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v25 + 8) = 3;
		*(double*)v25 = (double)v7;
		*(_QWORD*)(a1 + 16) += 16i64;
		v26 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		return 1i64;
	}
	return result;
}
// 14050C619: variable 'v12' is possibly undefined
// 14050C6A2: variable 'v21' is possibly undefined
// 14050C6B4: variable 'v22' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

