//----- (00000001409580E0) ----------------------------------------------------
__int64 __fastcall sub_1409580E0(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
	void (*v4)(void); // rax
	__int64 v5; // rbp
	__int64 v7; // rdi
	_DWORD* StackBase; // rsi
	__int64 v10; // rcx
	__int64 v11; // rdx
	int v12; // r14d
	_DWORD* v13; // rsi
	__int64 v14; // rcx
	int v15; // r14d
	unsigned int v16; // edi
	int v17; // eax
	unsigned int v18; // ecx
	void(__fastcall * v19)(__int64); // rax
	void(__fastcall * v20)(__int64, _QWORD); // rax
	unsigned int v22; // [rsp+48h] [rbp+10h]

	v4 = *(void (**)(void))(a1 + 64);
	v5 = a4;
	v7 = a2;
	if (v4)
		v4();
	if ((_DWORD)v7 != -1 && *(_DWORD*)(a1 + 244) != (_DWORD)v7)
	{
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v10 = *(_QWORD*)(a1 + 200);
		v11 = *(_QWORD*)(a1 + 192) + v7;
		v12 = *(StackBase - 1);
		*(StackBase - 1) = 1;
		if (v10)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 56i64))(v10, v11);
		*(StackBase - 1) = v12;
		*(_DWORD*)(a1 + 244) = v7;
	}
	v13 = NtCurrentTeb()->NtTib.StackBase;
	v14 = *(_QWORD*)(a1 + 200);
	v15 = *(v13 - 1);
	*(v13 - 1) = 1;
	if (v14)
	{
		v16 = v5;
		if ((*(int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v14 + 64i64))(v14, a3, v5) < 0)
			v16 = 0;
	}
	else
	{
		v16 = v22;
	}
	*(v13 - 1) = v15;
	if (v16 != (_DWORD)v5)
		*(_DWORD*)(a1 + 128) = 1;
	*(_DWORD*)(a1 + 244) += v16;
	v17 = *(_DWORD*)(a1 + 244);
	v18 = *(_DWORD*)(a1 + 236) - v17;
	*(_DWORD*)(a1 + 208) = v17;
	if (v18 >= *(_DWORD*)(a1 + 160))
		v18 = *(_DWORD*)(a1 + 160);
	v19 = *(void(__fastcall**)(__int64))(a1 + 80);
	*(_DWORD*)(a1 + 168) = v18;
	if (v19)
		v19(a1);
	v20 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 112);
	if (v20)
		v20(a3, v16);
	return v16;
}

