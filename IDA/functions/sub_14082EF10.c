//----- (000000014082EF10) ----------------------------------------------------
__int64 __fastcall sub_14082EF10(__int64 a1, int a2, int a3)
{
	_QWORD* v3; // rdi
	_QWORD* v7; // r14
	__int64 v8; // rsi
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rax
	int v12; // edi
	_QWORD* v13; // rdi
	_QWORD* v14; // r14
	__int64 v15; // rsi
	__int64 v16; // rcx
	int v17; // eax
	__int64 v18; // rax
	int v19; // edi
	_QWORD* v21; // [rsp+20h] [rbp-88h]
	_QWORD* v22; // [rsp+30h] [rbp-78h]
	int v23[20]; // [rsp+40h] [rbp-68h] BYREF

	v3 = *(_QWORD**)(a1 + 96);
	v7 = 0i64;
	if (v3)
	{
		while (1)
		{
			v8 = v3[2];
			v9 = *(_QWORD*)(v8 + 8);
			if (*(_DWORD*)(v9 + 24) == a2 && (!a3 || *(_DWORD*)(v8 + 56) == a3))
				break;
			v7 = v3;
			v3 = (_QWORD*)*v3;
		LABEL_16:
			if (!v3)
				goto LABEL_17;
		}
		v23[0] = 0;
		v10 = *(unsigned __int16*)(v9 + 60);
		if (v10 != 1027)
		{
			if (v10 != 1283)
			{
			LABEL_9:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(v8 + 56));
				v11 = *v3;
				v21 = (_QWORD*)*v3;
				if (v3 == *(_QWORD**)(a1 + 96))
					*(_QWORD*)(a1 + 96) = v11;
				else
					*v7 = v11;
				if (v3 == *(_QWORD**)(a1 + 104))
					*(_QWORD*)(a1 + 104) = v7;
				*v3 = *(_QWORD*)(a1 + 112);
				--* (_DWORD*)(a1 + 128);
				*(_QWORD*)(a1 + 112) = v3;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v8 + 8) + 16i64))(*(_QWORD*)(v8 + 8));
				v12 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 8i64))(v8, 0i64);
				sub_140881720(v12, v8);
				v3 = v21;
				goto LABEL_16;
			}
			sub_1408570E0(v9);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v8 + 8) + 88i64))(*(_QWORD*)(v8 + 8), v23);
		goto LABEL_9;
	}
LABEL_17:
	v13 = *(_QWORD**)(a1 + 144);
	v14 = 0i64;
	if (v13)
	{
		while (1)
		{
			v15 = v13[2];
			v16 = *(_QWORD*)(v15 + 8);
			if (*(_DWORD*)(v16 + 24) == a2 && (!a3 || *(_DWORD*)(v15 + 56) == a3))
				break;
			v14 = v13;
			v13 = (_QWORD*)*v13;
		LABEL_32:
			if (!v13)
				return 1i64;
		}
		v23[0] = 0;
		v17 = *(unsigned __int16*)(v16 + 60);
		if (v17 != 1027)
		{
			if (v17 != 1283)
			{
			LABEL_25:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(v15 + 56));
				v18 = *v13;
				v22 = (_QWORD*)*v13;
				if (v13 == *(_QWORD**)(a1 + 144))
					*(_QWORD*)(a1 + 144) = v18;
				else
					*v14 = v18;
				if (v13 == *(_QWORD**)(a1 + 152))
					*(_QWORD*)(a1 + 152) = v14;
				*v13 = *(_QWORD*)(a1 + 160);
				--* (_DWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 160) = v13;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v15 + 8) + 16i64))(*(_QWORD*)(v15 + 8));
				v19 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v15 + 8i64))(v15, 0i64);
				sub_140881720(v19, v15);
				v13 = v22;
				goto LABEL_32;
			}
			sub_1408570E0(v16);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v15 + 8) + 88i64))(*(_QWORD*)(v15 + 8), v23);
		goto LABEL_25;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;

