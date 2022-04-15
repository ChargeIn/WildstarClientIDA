//----- (0000000140719510) ----------------------------------------------------
__int64 __fastcall sub_140719510(__int64* a1, __int64 a2, _DWORD* a3, __int64 a4, __int64 a5)
{
	_DWORD* v8; // rbx
	int v9; // r15d
	_DWORD* v10; // rcx
	unsigned __int64 i; // rax
	int* v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rbp
	__int64 v15; // r14
	unsigned __int64 v16; // rax
	_QWORD* v17; // rcx
	void(__fastcall * **v18)(_QWORD); // rbx
	__int64 v19; // rcx
	__int64 v20; // rbp
	__int64 v21; // rcx
	__int64 v22; // rcx
	int v23; // eax
	int* v24; // rax
	__int64 v25; // rbx
	int* v26; // rbp
	int* v27; // rax
	unsigned __int64 v28; // rcx
	_QWORD* v29; // rax
	unsigned __int64 v30; // rcx
	_QWORD* v31; // rax
	__int64 v32; // rax
	unsigned int v35; // [rsp+78h] [rbp+20h] BYREF
	int v36; // [rsp+7Ch] [rbp+24h]

	if (!a4 && !a5 && !a2)
		return 2147500037i64;
	v8 = a3 + 21;
	v9 = 0;
	v10 = a3 + 21;
	for (i = 0i64; i < 6; ++i)
	{
		if (*v10)
			goto LABEL_12;
		++v10;
	}
	if (!a3[33])
		return 2147500037i64;
LABEL_12:
	v12 = sub_14018B280(720i64, 8u);
	if (v12)
		v13 = sub_140718CC0((__int64)v12);
	else
		v13 = 0i64;
	v14 = v13 + 536;
	v15 = 6i64;
	do
	{
		if (*v8)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 24i64))(qword_140C65848, v14);
		++v8;
		v14 += 8i64;
		--v15;
	} while (v15);
	if (a3[33])
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 24i64))(qword_140C65848, v13 + 632);
	v16 = 0i64;
	v17 = (_QWORD*)(v13 + 536);
	do
	{
		if (*v17)
			goto LABEL_27;
		++v16;
		++v17;
	} while (v16 < 6);
	if (!*(_QWORD*)(v13 + 632))
	{
	LABEL_56:
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 16i64))(v13, 1i64);
		return 2147500037i64;
	}
LABEL_27:
	if (a4)
	{
		v18 = *(void(__fastcall****)(_QWORD))(a4 + 5512);
		if (*(void(__fastcall****)(_QWORD))(v13 + 528) != v18)
		{
			if (v18)
				(**v18)(*(_QWORD*)(a4 + 5512));
			v19 = *(_QWORD*)(v13 + 528);
			if (v19)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
			*(_QWORD*)(v13 + 528) = v18;
		}
	}
	if (!*(_QWORD*)(v13 + 528))
	{
		v20 = a5;
		if (a5)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
				qword_140C65848,
				v13 + 528,
				0i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v13 + 528) + 88i64))(*(_QWORD*)(v13 + 528), v20);
			*(_DWORD*)(v13 + 684) = 1;
		}
	}
	v21 = *(_QWORD*)(v13 + 528);
	if (!v21)
		goto LABEL_56;
	if (a3[6] && *(_QWORD*)(v13 + 536) && *(_QWORD*)(v13 + 632))
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v21 + 40i64))(v21, v13 + 640);
	*(_DWORD*)(v13 + 656) = *a3 + a3[27];
	*(_DWORD*)(v13 + 660) = *a3 + a3[28];
	*(_DWORD*)(v13 + 664) = *a3 + a3[29];
	*(_DWORD*)(v13 + 668) = *a3 + a3[30];
	*(_DWORD*)(v13 + 672) = *a3 + a3[31];
	*(_DWORD*)(v13 + 676) = *a3 + a3[32];
	if (!a3[7])
		goto LABEL_63;
	v22 = *(_QWORD*)(v13 + 632);
	if (!v22 || !a4)
		goto LABEL_63;
	*(_DWORD*)(v13 + 696) = *(_DWORD*)(a4 + 8);
	v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 96i64))(v22);
	v35 = *(_DWORD*)(a4 + 8);
	v36 = v23;
	v24 = sub_14071FF40(v35, &v35);
	v25 = *((_QWORD*)v24 + 1);
	v26 = v24;
	v27 = sub_14018B280(24i64, 0);
	if (v27 != (int*)-16i64)
		*((_QWORD*)v27 + 2) = v13;
	*(_QWORD*)v27 = v25;
	*((_QWORD*)v27 + 1) = *(_QWORD*)(v25 + 8);
	**(_QWORD**)(v25 + 8) = v27;
	*(_QWORD*)(v25 + 8) = v27;
	*(_DWORD*)(v13 + 700) = 1;
	if (*(_QWORD*)(**((_QWORD**)v26 + 1) + 16i64) == v13)
	{
	LABEL_63:
		sub_1407198E0(v13);
		if (!*(_DWORD*)(v13 + 680) && !*(_QWORD*)(v13 + 640))
		{
			v28 = 0i64;
			v29 = (_QWORD*)(v13 + 40);
			while (!*v29)
			{
				++v28;
				v29 += 9;
				if (v28 >= 6)
				{
					v30 = 0i64;
					v31 = (_QWORD*)(v13 + 584);
					while (!*v31)
					{
						++v30;
						++v31;
						if (v30 >= 6)
							goto LABEL_56;
					}
					break;
				}
			}
		}
	}
	(**(void(__fastcall***)(__int64))v13)(v13);
	if (!*(_QWORD*)(v13 + 704))
	{
		*(_QWORD*)(v13 + 704) = &qword_140C7F0E0;
		*(_QWORD*)(v13 + 712) = qword_140C7F0E0;
		qword_140C7F0E0 = v13;
		v32 = *(_QWORD*)(v13 + 712);
		if (v32)
			*(_QWORD*)(v32 + 704) = v13 + 712;
	}
	*(_QWORD*)(v13 + 16) = a2;
	LOBYTE(v9) = a3[20] != 0;
	*(_DWORD*)(v13 + 692) = v9;
	*a1 = v13;
	return 0i64;
}
// 140719578: conditional instruction was optimized away because rax.8<6u
// 14071964C: conditional instruction was optimized away because rax.8<6u
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C7F0E0: using guessed type __int64 qword_140C7F0E0;

