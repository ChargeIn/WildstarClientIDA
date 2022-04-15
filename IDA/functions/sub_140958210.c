//----- (0000000140958210) ----------------------------------------------------
__int64 __fastcall sub_140958210(__int64 a1, __int64 a2, int a3, int* a4, unsigned int a5)
{
	int v5; // r12d
	__int64 v6; // rdi
	int v8; // ebp
	__int64 (*v10)(void); // rax
	void(__fastcall * v11)(__int64); // rax
	unsigned int v12; // edx
	_DWORD* StackBase; // rsi
	__int64 v14; // rcx
	__int64 v15; // rdx
	int v16; // ebp
	__int64 v17; // rax
	unsigned int* v19; // r14
	unsigned int v20; // esi
	_DWORD* v21; // r15
	unsigned int v22; // ebp
	void(__fastcall * v23)(__int64, _QWORD); // rax
	void(__fastcall * v24)(__int64, _QWORD); // rax
	void(__fastcall * v25)(__int64, _QWORD); // rax
	void(__fastcall * v26)(__int64, _QWORD); // rax
	void(__fastcall * v27)(__int64, _QWORD); // rax
	void(__fastcall * v28)(__int64); // rax
	__int64 (*v29)(void); // rax
	unsigned int v30; // esi
	_DWORD* v31; // rdi
	__int64 v32; // rcx
	int v33; // ebp
	unsigned int v34; // r15d
	void(__fastcall * v35)(__int64, _QWORD, _QWORD); // rax
	__int64 (*v36)(void); // rax
	unsigned int v37; // edi
	__int64 (*v38)(void); // rax
	unsigned int v39; // ecx
	void(__fastcall * v40)(__int64); // rdx
	void(__fastcall * v41)(int*, _QWORD); // r8
	int v42; // [rsp+20h] [rbp-58h]
	unsigned int v43; // [rsp+24h] [rbp-54h]
	int v44; // [rsp+28h] [rbp-50h]
	int v46; // [rsp+80h] [rbp+8h]
	int* v47; // [rsp+98h] [rbp+20h]

	v47 = a4;
	v5 = 0;
	v6 = a3;
	v42 = 0;
	v8 = 0;
	v46 = 0;
	if (*(_DWORD*)(a1 + 128))
		return 0i64;
	v10 = *(__int64 (**)(void))(a1 + 104);
	if (v10)
		v44 = v10();
	else
		v44 = 0;
	if ((_DWORD)v6 == -1 || *(_DWORD*)(a1 + 208) == (_DWORD)v6)
		goto LABEL_17;
	v11 = *(void(__fastcall**)(__int64))(a1 + 64);
	v42 = 1;
	if (v11)
		v11(a1);
	if ((unsigned int)v6 <= *(_DWORD*)(a1 + 208) || (unsigned int)v6 > *(_DWORD*)(a1 + 244))
	{
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v14 = *(_QWORD*)(a1 + 200);
		v15 = *(_QWORD*)(a1 + 192) + v6;
		v16 = *(StackBase - 1);
		*(StackBase - 1) = 1;
		if (v14)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v14 + 56i64))(v14, v15);
		*(StackBase - 1) = v16;
		*(_DWORD*)(a1 + 244) = v6;
		*(_DWORD*)(a1 + 208) = v6;
		v8 = 0;
		*(_DWORD*)(a1 + 248) = *(_DWORD*)(a1 + 160);
		*(_DWORD*)(a1 + 172) = 0;
		v17 = *(_QWORD*)(a1 + 216);
		*(_DWORD*)(a1 + 240) = 0;
		*(_QWORD*)(a1 + 256) = v17;
	LABEL_17:
		v43 = (unsigned int)v47;
		goto LABEL_18;
	}
	v12 = v6 - *(_DWORD*)(a1 + 208);
	*(_DWORD*)(a1 + 208) = v6;
	*(_DWORD*)(a1 + 248) += v12;
	*(_DWORD*)(a1 + 172) -= v12;
	*(_DWORD*)(a1 + 240) += v12;
	v43 = v12;
	if (*(_DWORD*)(a1 + 240) >= *(_DWORD*)(a1 + 160))
		*(_DWORD*)(a1 + 240) -= *(_DWORD*)(a1 + 160);
LABEL_18:
	v19 = (unsigned int*)(a1 + 172);
	while (1)
	{
		v20 = *v19;
		if (*v19)
		{
			v21 = (_DWORD*)(a1 + 240);
			if (v20 > a5)
				v20 = a5;
			*(_DWORD*)(a1 + 208) += v20;
			a5 -= v20;
			v46 = v20 + v8;
			v22 = *(_DWORD*)(a1 + 160) - *v21;
			if (v22 > v20)
				goto LABEL_30;
			sub_1407DB590(v47, (int*)(*(_QWORD*)(a1 + 216) + (unsigned int)*v21), v22);
			v47 = (int*)((char*)v47 + v22);
			*v21 = 0;
			v23 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 120);
			v20 -= v22;
			if (v23)
				v23(a1 + 172, -v22);
			else
				*v19 -= v22;
			v24 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 120);
			if (v24)
				v24(a1 + 248, v22);
			else
				*(_DWORD*)(a1 + 248) += v22;
			if (v20)
			{
			LABEL_30:
				sub_1407DB590(v47, (int*)(*(_QWORD*)(a1 + 216) + (unsigned int)*v21), v20);
				v25 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 120);
				v47 = (int*)((char*)v47 + v20);
				if (v25)
					v25(a1 + 240, v20);
				else
					*v21 += v20;
				v26 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 120);
				if (v26)
					v26(a1 + 172, -v20);
				else
					*v19 -= v20;
				v27 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 120);
				if (v27)
					v27(a1 + 248, v20);
				else
					*(_DWORD*)(a1 + 248) += v20;
			}
		}
		if (!a5)
			break;
		if (!v42)
		{
			v28 = *(void(__fastcall**)(__int64))(a1 + 64);
			v42 = 1;
			if (v28)
				v28(a1);
			v8 = v46;
			if (*v19)
				continue;
		}
		v29 = *(__int64 (**)(void))(a1 + 104);
		if (v29)
			v30 = v29();
		else
			v30 = 0;
		if (*(_DWORD*)(a1 + 264))
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 56) + 32i64) &= ~0x80u;
			*(_DWORD*)(a1 + 264) = 0;
		}
		v31 = NtCurrentTeb()->NtTib.StackBase;
		v32 = *(_QWORD*)(a1 + 200);
		v33 = *(v31 - 1);
		*(v31 - 1) = 1;
		if (v32)
		{
			v34 = a5;
			if ((*(int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v32 + 64i64))(v32, v47, a5) < 0)
				v34 = 0;
		}
		else
		{
			v34 = v43;
		}
		*(v31 - 1) = v33;
		if (v34 != a5)
			*(_DWORD*)(a1 + 128) = 1;
		v35 = *(void(__fastcall**)(__int64, _QWORD, _QWORD))(a1 + 96);
		if (v35)
			v35(a1, v34, v30);
		*(_DWORD*)(a1 + 244) += v34;
		*(_DWORD*)(a1 + 208) += v34;
		*(_DWORD*)(a1 + 136) += v34;
		v36 = *(__int64 (**)(void))(a1 + 104);
		v37 = v34 + v46;
		if (v36)
			v5 = v36();
		*(_DWORD*)(a1 + 144) += v5 - v30;
		goto LABEL_64;
	}
	v38 = *(__int64 (**)(void))(a1 + 104);
	if (v38)
		v5 = v38();
	v37 = v46;
LABEL_64:
	*(_DWORD*)(a1 + 148) += v5 - v44;
	v39 = *(_DWORD*)(a1 + 236) - *(_DWORD*)(a1 + 208);
	if (v39 >= *(_DWORD*)(a1 + 160))
		v39 = *(_DWORD*)(a1 + 160);
	*(_DWORD*)(a1 + 168) = v39;
	if (*v19 + 0x20000 > *(_DWORD*)(a1 + 168))
		*(_DWORD*)(a1 + 168) = *v19;
	if (v42)
	{
		v40 = *(void(__fastcall**)(__int64))(a1 + 80);
		if (v40)
			v40(a1);
	}
	v41 = *(void(__fastcall**)(int*, _QWORD))(a1 + 112);
	if (v41)
		v41(a4, v37);
	return v37;
}

