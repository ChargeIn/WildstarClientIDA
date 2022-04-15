//----- (000000014082F330) ----------------------------------------------------
__int64 __fastcall sub_14082F330(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	_QWORD* v4; // rbx
	_QWORD* v5; // r15
	__int64 v9; // r14
	__int64 v10; // r12
	__int64 v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rdx
	__int64 v14; // rcx
	_QWORD* v15; // rbx
	_QWORD* v16; // r15
	__int64 v17; // r14
	__int64 v18; // r12
	__int64 v19; // rax
	__int64 v20; // rsi
	__int64 v21; // rdx
	__int64 v22; // rcx
	__int64 v24; // rcx
	int v25; // eax
	_QWORD* v26; // rax
	int v27; // ebx
	__int64 v28; // rcx
	int v29; // eax
	_QWORD* v30; // rax
	int v31; // ebx
	_QWORD* v32; // [rsp+20h] [rbp-98h]
	_QWORD* v33; // [rsp+30h] [rbp-88h]
	int v34[20]; // [rsp+40h] [rbp-78h] BYREF

	v4 = *(_QWORD**)(a1 + 96);
	v5 = 0i64;
	while (v4)
	{
		v9 = v4[2];
		v10 = *(_QWORD*)(v9 + 8);
		v11 = sub_140855940(v10);
		v12 = v11;
		if (a2)
		{
			if (!v11)
				goto LABEL_13;
			if (a2 != v11)
			{
				v13 = *(_QWORD*)(v11 + 64);
				v14 = *(_QWORD*)(v11 + 72);
				if (v13)
				{
					while (a2 != v13)
					{
						if (!v14)
							v14 = *(_QWORD*)(v13 + 72);
						v13 = *(_QWORD*)(v13 + 64);
						if (!v13)
							goto LABEL_10;
					}
				}
				else
				{
				LABEL_10:
					if (!v14)
						goto LABEL_13;
					while (a2 != v14)
					{
						v14 = *(_QWORD*)(v14 + 72);
						if (!v14)
							goto LABEL_13;
					}
				}
			}
		}
		if ((!a3 || a3 == *(_QWORD*)(v9 + 72)) && (!a4 || a4 == *(_DWORD*)(v9 + 56)) && *(_WORD*)(v10 + 60) != 6176)
		{
			v24 = *(_QWORD*)(v9 + 8);
			v34[0] = 0;
			v25 = *(unsigned __int16*)(v24 + 60);
			if (v25 == 1027)
				goto LABEL_42;
			if (v25 == 1283)
			{
				sub_1408570E0(v24);
			LABEL_42:
				(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v9 + 8) + 88i64))(*(_QWORD*)(v9 + 8), v34);
			}
			sub_14083C260(qword_140C61B80, *(_DWORD*)(v9 + 56));
			v26 = (_QWORD*)*v4;
			v32 = (_QWORD*)*v4;
			if (v4 == *(_QWORD**)(a1 + 96))
				*(_QWORD*)(a1 + 96) = v26;
			else
				*v5 = v26;
			if (v4 == *(_QWORD**)(a1 + 104))
				*(_QWORD*)(a1 + 104) = v5;
			*v4 = *(_QWORD*)(a1 + 112);
			--* (_DWORD*)(a1 + 128);
			*(_QWORD*)(a1 + 112) = v4;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 8) + 16i64))(*(_QWORD*)(v9 + 8));
			v27 = dword_140C10F20;
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 8i64))(v9, 0i64);
			sub_140881720(v27, v9);
			v4 = v32;
			goto LABEL_14;
		}
	LABEL_13:
		v5 = v4;
		v4 = (_QWORD*)*v4;
	LABEL_14:
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	}
	v15 = *(_QWORD**)(a1 + 144);
	v16 = 0i64;
	while (v15)
	{
		v17 = v15[2];
		v18 = *(_QWORD*)(v17 + 8);
		v19 = sub_140855940(v18);
		v20 = v19;
		if (a2)
		{
			if (!v19)
				goto LABEL_29;
			if (a2 != v19)
			{
				v21 = *(_QWORD*)(v19 + 64);
				v22 = *(_QWORD*)(v19 + 72);
				if (v21)
				{
					while (a2 != v21)
					{
						if (!v22)
							v22 = *(_QWORD*)(v21 + 72);
						v21 = *(_QWORD*)(v21 + 64);
						if (!v21)
							goto LABEL_26;
					}
				}
				else
				{
				LABEL_26:
					if (!v22)
						goto LABEL_29;
					while (a2 != v22)
					{
						v22 = *(_QWORD*)(v22 + 72);
						if (!v22)
							goto LABEL_29;
					}
				}
			}
		}
		if ((!a3 || a3 == *(_QWORD*)(v17 + 72)) && (!a4 || a4 == *(_DWORD*)(v17 + 56)) && *(_WORD*)(v18 + 60) != 6176)
		{
			v28 = *(_QWORD*)(v17 + 8);
			v34[0] = 0;
			v29 = *(unsigned __int16*)(v28 + 60);
			if (v29 == 1027)
				goto LABEL_57;
			if (v29 == 1283)
			{
				sub_1408570E0(v28);
			LABEL_57:
				(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v17 + 8) + 88i64))(*(_QWORD*)(v17 + 8), v34);
			}
			sub_14083C260(qword_140C61B80, *(_DWORD*)(v17 + 56));
			v30 = (_QWORD*)*v15;
			v33 = (_QWORD*)*v15;
			if (v15 == *(_QWORD**)(a1 + 144))
				*(_QWORD*)(a1 + 144) = v30;
			else
				*v16 = v30;
			if (v15 == *(_QWORD**)(a1 + 152))
				*(_QWORD*)(a1 + 152) = v16;
			*v15 = *(_QWORD*)(a1 + 160);
			--* (_DWORD*)(a1 + 176);
			*(_QWORD*)(a1 + 160) = v15;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v17 + 8) + 16i64))(*(_QWORD*)(v17 + 8));
			v31 = dword_140C10F20;
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v17 + 8i64))(v17, 0i64);
			sub_140881720(v31, v17);
			v15 = v33;
			goto LABEL_30;
		}
	LABEL_29:
		v16 = v15;
		v15 = (_QWORD*)*v15;
	LABEL_30:
		if (v20)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;

