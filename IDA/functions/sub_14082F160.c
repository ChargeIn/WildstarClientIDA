//----- (000000014082F160) ----------------------------------------------------
__int64 __fastcall sub_14082F160(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rbx
	_QWORD* v5; // r14
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rax
	int v9; // ebx
	_QWORD* v10; // rbx
	_QWORD* v11; // r14
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rax
	int v15; // ebx
	int v17[22]; // [rsp+20h] [rbp-58h] BYREF

	if (!a2)
		return 1i64;
	v4 = *(_QWORD**)(a1 + 144);
	v5 = 0i64;
	if (v4)
	{
		while (a2 != v4[2])
		{
			v5 = v4;
			v4 = (_QWORD*)*v4;
			if (!v4)
				goto LABEL_16;
		}
		v6 = *(_QWORD*)(a2 + 8);
		v17[0] = 0;
		v7 = *(unsigned __int16*)(v6 + 60);
		if (v7 != 1027)
		{
			if (v7 != 1283)
			{
			LABEL_10:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(a2 + 56));
				v8 = *v4;
				if (v4 == *(_QWORD**)(a1 + 144))
					*(_QWORD*)(a1 + 144) = v8;
				else
					*v5 = v8;
				if (v4 == *(_QWORD**)(a1 + 152))
					*(_QWORD*)(a1 + 152) = v5;
				*v4 = *(_QWORD*)(a1 + 160);
				--* (_DWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 160) = v4;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16i64))(*(_QWORD*)(a2 + 8));
				v9 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 0i64);
				sub_140881720(v9, a2);
				goto LABEL_16;
			}
			sub_1408570E0(v6);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a2 + 8) + 88i64))(*(_QWORD*)(a2 + 8), v17);
		goto LABEL_10;
	}
LABEL_16:
	v10 = *(_QWORD**)(a1 + 96);
	v11 = 0i64;
	if (!v10)
		return 1i64;
	while (a2 != v10[2])
	{
		v11 = v10;
		v10 = (_QWORD*)*v10;
		if (!v10)
			return 1i64;
	}
	v12 = *(_QWORD*)(a2 + 8);
	v17[0] = 0;
	v13 = *(unsigned __int16*)(v12 + 60);
	if (v13 == 1027)
		goto LABEL_23;
	if (v13 == 1283)
	{
		sub_1408570E0(v12);
	LABEL_23:
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a2 + 8) + 88i64))(*(_QWORD*)(a2 + 8), v17);
	}
	sub_14083C260(qword_140C61B80, *(_DWORD*)(a2 + 56));
	v14 = *v10;
	if (v10 == *(_QWORD**)(a1 + 96))
		*(_QWORD*)(a1 + 96) = v14;
	else
		*v11 = v14;
	if (v10 == *(_QWORD**)(a1 + 104))
		*(_QWORD*)(a1 + 104) = v11;
	*v10 = *(_QWORD*)(a1 + 112);
	--* (_DWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 112) = v10;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16i64))(*(_QWORD*)(a2 + 8));
	v15 = dword_140C10F20;
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 0i64);
	sub_140881720(v15, a2);
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;

