//----- (00000001409587B0) ----------------------------------------------------
__int64 __fastcall sub_1409587B0(__int64 a1)
{
	int v1; // esi
	unsigned int v3; // edi
	unsigned int (*v5)(void); // rax
	__int64 v6; // rdx
	unsigned int v7; // r15d
	_DWORD* StackBase; // r14
	__int64 v9; // rcx
	int v10; // ebp
	__int64 (*v11)(void); // rax
	unsigned int v12; // r14d
	unsigned int v13; // r13d
	unsigned int v14; // ebp
	void(__fastcall * v15)(__int64, _QWORD); // rax
	unsigned int v16; // r14d
	_DWORD* v17; // r15
	__int64 v18; // rcx
	__int64 v19; // rax
	int v20; // ebp
	void(__fastcall * v21)(__int64, _QWORD, _QWORD); // rax
	void(__fastcall * v22)(__int64, _QWORD); // rax
	void(__fastcall * v23)(__int64, _QWORD); // rax
	_DWORD* v24; // r14
	__int64 (*v25)(void); // rax
	int v26; // esi
	void(__fastcall * v27)(__int64, __int64); // rax
	void(__fastcall * v28)(__int64); // rax
	int v29; // [rsp+20h] [rbp-A8h]
	char v30[96]; // [rsp+30h] [rbp-98h] BYREF

	v1 = 0;
	v29 = *(_DWORD*)(a1 + 140);
	v3 = 0;
	if (*(_DWORD*)(a1 + 128) || *(_DWORD*)(a1 + 176))
		return 0i64;
	v5 = *(unsigned int (**)(void))(a1 + 72);
	if (v5 && v5())
	{
		v7 = *(_DWORD*)(a1 + 236) - *(_DWORD*)(a1 + 244);
		if (!v7 && !*(_DWORD*)(a1 + 264) && *(char*)(*(_QWORD*)(a1 + 56) + 32i64) < 0)
		{
			*(_DWORD*)(a1 + 264) = 1;
			*(_DWORD*)(*(_QWORD*)(a1 + 56) + 32i64) &= ~0x80u;
			*(_DWORD*)(a1 + 132) = 1;
			sub_1409580A0(*(_QWORD*)(a1 + 200));
			StackBase = NtCurrentTeb()->NtTib.StackBase;
			v9 = *(_QWORD*)(a1 + 200);
			v10 = *(StackBase - 1);
			*(StackBase - 1) = 1;
			if (v9)
			{
				v3 = 32;
				if ((*(int(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)v9 + 64i64))(v9, v30, 32i64) < 0)
					v3 = 0;
			}
			*(StackBase - 1) = v10;
			if (v3 != 32)
				*(_DWORD*)(a1 + 128) = 1;
			*(_DWORD*)(a1 + 132) = 0;
			v3 = 0;
		}
		if (*(_DWORD*)(a1 + 248) >= 0x20000u && v7)
		{
			v11 = *(__int64 (**)(void))(a1 + 104);
			v12 = 0x20000;
			if (v7 < 0x20000)
				v12 = v7;
			if (v11)
				v13 = v11();
			else
				v13 = 0;
			v14 = *(_DWORD*)(a1 + 244) & 0x1FFFF;
			if (v14 > v12 || v12 == v7)
			{
				v14 = 0;
			}
			else if (v14)
			{
				v15 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 120);
				if (v15)
					v15(a1 + 240, v14);
				else
					*(_DWORD*)(a1 + 240) += v14;
			}
			v16 = v12 - v14;
			if (*(_DWORD*)(a1 + 264))
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 56) + 32i64) &= ~0x80u;
				*(_DWORD*)(a1 + 264) = 0;
			}
			*(_DWORD*)(a1 + 132) = 1;
			v17 = NtCurrentTeb()->NtTib.StackBase;
			v18 = *(_QWORD*)(a1 + 200);
			v19 = v14;
			v20 = *(v17 - 1);
			v6 = v19 + *(_QWORD*)(a1 + 256);
			*(v17 - 1) = 1;
			if (v18)
			{
				v3 = v16;
				if ((*(int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v18 + 64i64))(v18, v6, v16) < 0)
					v3 = 0;
			}
			*(v17 - 1) = v20;
			v21 = *(void(__fastcall**)(__int64, _QWORD, _QWORD))(a1 + 96);
			*(_DWORD*)(a1 + 132) = 0;
			if (v21)
				v21(a1, v3, v13);
			if (v3 != v16)
				*(_DWORD*)(a1 + 128) = 1;
			if (v3)
			{
				*(_DWORD*)(a1 + 136) += v3;
				*(_DWORD*)(a1 + 244) += v3;
				*(_QWORD*)(a1 + 256) += 0x20000i64;
				if (*(_QWORD*)(a1 + 256) >= *(_QWORD*)(a1 + 224))
					*(_QWORD*)(a1 + 256) = *(_QWORD*)(a1 + 216);
				v22 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 120);
				if (v22)
					v22(a1 + 248, -v3);
				else
					*(_DWORD*)(a1 + 248) -= v3;
				v23 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 120);
				v24 = (_DWORD*)(a1 + 172);
				if (v23)
					v23(a1 + 172, v3);
				else
					*v24 += v3;
				if (*v24 > *(_DWORD*)(a1 + 164))
					*(_DWORD*)(a1 + 164) = *v24;
				v25 = *(__int64 (**)(void))(a1 + 104);
				if (v25)
					v1 = v25();
				v26 = v1 - v13;
				*(_DWORD*)(a1 + 144) += v26;
				if (v29 || *(_DWORD*)(a1 + 140))
					*(_DWORD*)(a1 + 156) += v26;
				else
					*(_DWORD*)(a1 + 152) += v26;
			}
		}
		else
		{
			*(_DWORD*)(a1 + 168) = *(_DWORD*)(a1 + 172);
		}
		v27 = *(void(__fastcall**)(__int64, __int64))(a1 + 80);
		if (v27)
			v27(a1, v6);
	}
	else
	{
		v28 = *(void(__fastcall**)(__int64))(a1 + 88);
		if (v28)
			v28(a1);
		return (unsigned int)-1;
	}
	return v3;
}
// 140958B0D: variable 'v6' is possibly undefined
// 1409587B0: using guessed type char var_98[96];

