//----- (00000001407ACDF0) ----------------------------------------------------
int __fastcall sub_1407ACDF0(__int64 a1)
{
	int v2; // ebx
	HWND ForegroundWindow; // rax
	HWND v4; // rdx
	bool v5; // zf
	int v6; // eax
	__int64 v7; // rax
	__int64 v8; // rbx
	int v9; // eax
	int v10; // esi
	__int64 v11; // rbp
	unsigned int v12; // r14d
	__int64 v13; // rax
	__int64 v14; // rdx
	int v15; // eax
	__int64 v16; // rbx
	int v17; // r8d
	__int64 v18; // r12
	int v19; // esi
	unsigned int v20; // r14d
	unsigned int v21; // r15d
	int v22; // ebp
	__int64 v23; // rdx
	int v24; // eax
	__int64* v25; // rcx
	__int64 v26; // rcx
	int v28; // [rsp+30h] [rbp-58h] BYREF
	unsigned int v29; // [rsp+34h] [rbp-54h]
	unsigned int v30; // [rsp+38h] [rbp-50h]
	int v31; // [rsp+3Ch] [rbp-4Ch]
	int v32; // [rsp+40h] [rbp-48h]
	int v33; // [rsp+44h] [rbp-44h]

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 184i64))(a1);
	ForegroundWindow = GetForegroundWindow();
	v4 = *(HWND*)(a1 + 16);
	if (ForegroundWindow == v4 || (v5 = !IsChild(ForegroundWindow, v4), v6 = 0, !v5))
		v6 = 1;
	*(_DWORD*)(a1 + 88) = v6;
	LODWORD(v7) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 184i64))(a1);
	if (v2 != (_DWORD)v7)
		LODWORD(v7) = sub_1407AC000(a1);
	v8 = *(_QWORD*)(a1 + 436120);
	if (v8)
	{
		while (1)
		{
			if (*(_DWORD*)(v8 + 12) != 1)
				goto LABEL_17;
			v9 = dword_140C54A60;
			if (*(_DWORD*)qword_140C63750 < dword_140C54A60)
				v9 = *(_DWORD*)qword_140C63750;
			if (*(_DWORD*)(a1 + 436352) - *(_DWORD*)(v8 + 28) <= (unsigned int)dword_140C54A70[v9])
				goto LABEL_17;
			v10 = *(_DWORD*)v8;
			if (*(_DWORD*)v8 == 1)
				break;
			if (*(_DWORD*)v8 == 2)
			{
				v11 = *(unsigned int*)(v8 + 8);
				v12 = *(_DWORD*)(v8 + 4);
				v13 = sub_1407ABE40(a1, v12, *(_DWORD*)(v8 + 8), 2, *(_DWORD*)(a1 + 4 * v11 + 436092), 0);
				goto LABEL_15;
			}
		LABEL_17:
			LODWORD(v7) = sub_1400035B0();
			v8 = *(_QWORD*)(v8 + 64);
			if (!v8)
				goto LABEL_18;
		}
		v11 = *(unsigned int*)(v8 + 8);
		v12 = *(_DWORD*)(v8 + 4);
		v13 = sub_1407ABD10(a1, v12, *(_DWORD*)(v8 + 8), 2, *(_DWORD*)(a1 + 4 * v11 + 434044), 0);
	LABEL_15:
		v14 = v13;
		if (v13)
		{
			v15 = *(_DWORD*)(v8 + 20);
			*(_DWORD*)(v8 + 12) = 2;
			v28 = v10;
			v32 = v15;
			v29 = v12;
			v30 = v11;
			v31 = 2;
			v33 = -1;
			sub_1407AC2C0((_QWORD*)a1, v14, (__int64)&v28, 1, 1);
		}
		goto LABEL_17;
	}
LABEL_18:
	v16 = *(_QWORD*)(a1 + 436128);
	if (v16)
	{
		v17 = dword_140C549C0;
		while (1)
		{
			v18 = *(_QWORD*)(v16 + 80);
			LODWORD(v7) = v17;
			if (*(_DWORD*)qword_140C63750 < v17)
				LODWORD(v7) = *(_DWORD*)qword_140C63750;
			if (*(_DWORD*)(a1 + 436352) - *(_DWORD*)(v16 + 28) <= (unsigned int)dword_140C549D0[(int)v7])
				goto LABEL_34;
			v19 = *(_DWORD*)v16;
			if (*(_DWORD*)v16 == 1)
				break;
			if (*(_DWORD*)v16 == 2)
			{
				v20 = *(_DWORD*)(v16 + 8);
				v21 = *(_DWORD*)(v16 + 4);
				v22 = *(_DWORD*)(v16 + 20);
				v7 = sub_1407ABE40(a1, v21, v20, 5, v22, 0);
				goto LABEL_27;
			}
		LABEL_29:
			v25 = *(__int64**)(v16 + 72);
			if (v25)
			{
				v7 = *(_QWORD*)(v16 + 80);
				*v25 = v7;
			}
			v26 = *(_QWORD*)(v16 + 80);
			if (v26)
			{
				v7 = *(_QWORD*)(v16 + 72);
				*(_QWORD*)(v26 + 72) = v7;
			}
			*(_QWORD*)(v16 + 72) = 0i64;
			*(_QWORD*)(v16 + 80) = 0i64;
			v17 = dword_140C549C0;
		LABEL_34:
			v16 = v18;
			if (!v18)
				return v7;
		}
		v20 = *(_DWORD*)(v16 + 8);
		v21 = *(_DWORD*)(v16 + 4);
		v22 = *(_DWORD*)(v16 + 20);
		v7 = sub_1407ABD10(a1, v21, v20, 5, v22, 0);
	LABEL_27:
		v23 = v7;
		if (v7)
		{
			v24 = *(_DWORD*)(v16 + 12);
			v28 = v19;
			v29 = v21;
			v31 = v24;
			v30 = v20;
			v32 = v22;
			v33 = -1;
			LODWORD(v7) = sub_1407AC430(a1, v23, (__int64)&v28, 1);
		}
		goto LABEL_29;
	}
	return v7;
}
// 140C549C0: using guessed type int dword_140C549C0;
// 140C549D0: using guessed type int dword_140C549D0[];
// 140C54A60: using guessed type int dword_140C54A60;
// 140C54A70: using guessed type int dword_140C54A70[];
// 140C63750: using guessed type __int64 qword_140C63750;

