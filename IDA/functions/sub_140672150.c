//----- (0000000140672150) ----------------------------------------------------
void __fastcall sub_140672150(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	int v5; // ebp
	int v6; // r14d
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rdx
	int v11; // ebx
	__int64 v12; // rcx
	_QWORD* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // rdx
	int v18; // ecx
	__int64 v19; // rax
	__int64 v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // rdx

	if (*(_DWORD*)(a1 + 1344) && *(_QWORD*)(a1 + 168))
	{
		v4 = *(_QWORD*)a1;
		v5 = 0;
		v6 = 0;
		if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 32i64) + 120i64) >= *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 32i64)
			+ 112i64))
			sub_14005E2C0(v4);
		v7 = *(_QWORD*)(v4 + 16);
		v8 = sub_14005C1B0(v4, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		*(_QWORD*)(v4 + 16) += 16i64;
		v9 = sub_1400578C0(v4);
		v11 = v9;
		if (*(_DWORD*)(a1 + 1344))
			v12 = *(_QWORD*)(a1 + 168);
		else
			v12 = 0i64;
		if ((*(_BYTE*)(v12 + 336) & 1) != 0)
		{
			v6 = 1;
			v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v9);
			v14 = *(_QWORD*)(v4 + 16);
			*(_QWORD*)v14 = *v13;
			*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
			*(_QWORD*)(v4 + 16) += 16i64;
			sub_1400F06F0(v4, v14, L"bUnique", 1);
			*(_QWORD*)(v4 + 16) -= 16i64;
		}
		if (*(_DWORD*)(a1 + 1344))
			v15 = *(_QWORD*)(a1 + 168);
		else
			v15 = 0i64;
		if ((*(_BYTE*)(v15 + 336) & 2) != 0)
		{
			v6 = 1;
			v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v11);
			v17 = *(_QWORD*)(v4 + 16);
			*(_QWORD*)v17 = *v16;
			*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
			*(_QWORD*)(v4 + 16) += 16i64;
			sub_1400F06F0(v4, v17, L"bEquipped", 1);
			*(_QWORD*)(v4 + 16) -= 16i64;
		}
		v18 = *(_DWORD*)(a1 + 1344);
		if (v18)
			v19 = *(_QWORD*)(a1 + 168);
		else
			v19 = 0i64;
		if ((*(_BYTE*)(v19 + 336) & 1) != 0 && ((*(_DWORD*)(v19 + 340) & 0x100) != 0 || *(_DWORD*)(v19 + 416)))
		{
			if (v18)
				v20 = *(_QWORD*)(a1 + 168);
			else
				v20 = 0i64;
			if ((*(_BYTE*)(v20 + 336) & 1) != 0)
			{
				v5 = 1;
				if ((*(_DWORD*)(v20 + 340) & 0x100) == 0)
					v5 = *(_DWORD*)(v20 + 416);
			}
			v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v11);
			v22 = *(_QWORD*)(v4 + 16);
			*(_QWORD*)v22 = *v21;
			*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
			*(_QWORD*)(v4 + 16) += 16i64;
			sub_1400F06F0(v4, v22, L"nCount", v5);
			*(_QWORD*)(v4 + 16) -= 16i64;
		}
		if (v6)
			sub_1400FB2A0(a2, (__int64)L"tUnique", v11);
		sub_1400579E0(v4, v10, v11);
	}
}
// 140672363: variable 'v10' is possibly undefined
// 140B2F878: using guessed type wchar_t aBunique[8];
// 140B2F888: using guessed type wchar_t aBequipped[10];
// 140B2FBF0: using guessed type wchar_t aNcount_41[7];
// 140B2FC00: using guessed type wchar_t aTunique[8];

