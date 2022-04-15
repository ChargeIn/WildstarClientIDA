//----- (00000001400B19C0) ----------------------------------------------------
__int64 __fastcall sub_1400B19C0(_QWORD* a1, __int64 a2, int a3)
{
	__int64 v4; // rcx
	__int64 v7; // rax
	__int64 v8; // rsi
	__int64 v9; // rdx
	__int64* v10; // r14
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // r9
	__int64 v14; // rbx
	unsigned __int64 v15; // r8
	void(__fastcall * **v17)(_QWORD, __int64); // rcx
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF
	__int64 v19; // [rsp+58h] [rbp+10h] BYREF
	__int64 v20; // [rsp+68h] [rbp+20h] BYREF

	v19 = a2;
	v4 = a1[34];
	if (!v4)
		goto LABEL_19;
	if (!a2)
		return 2147500037i64;
	v7 = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v4 + 224i64))(v4, a1 + 1);
	v8 = v7;
	if (!v7)
	{
	LABEL_19:
		if (a2)
			(**(void(__fastcall***)(__int64, __int64))a2)(a2, 1i64);
		return 2147500037i64;
	}
	*(_QWORD*)(a2 + 8) = v7;
	v9 = (__int64)(a1 + 40);
	if (a3)
	{
		++* (_DWORD*)(a2 + 68);
		sub_14003D8F0(&v18, v9);
		sub_1400B4E90(a1 + 38);
		sub_14003D880(&v18);
		goto LABEL_15;
	}
	sub_14003D8F0(&v20, v9);
	v10 = a1 + 38;
	v11 = 0i64;
	v12 = a1[39];
	if (!v12)
	{
	LABEL_13:
		v14 = v11;
		goto LABEL_14;
	}
	v13 = *(_QWORD*)(a2 + 8);
	while (1)
	{
		v14 = v11 + ((v12 - v11) >> 1);
		v15 = *(_QWORD*)(*(_QWORD*)(*v10 + 8 * v14) + 8i64);
		if (v13 < v15)
		{
			v12 = v11 + ((v12 - v11) >> 1);
			goto LABEL_12;
		}
		if (v13 <= v15)
			break;
		v11 = v14 + 1;
	LABEL_12:
		if (v11 >= v12)
			goto LABEL_13;
	}
	v18 = 0x141D0DAB0i64;
	sub_1401A3130(114, 0, &v18);
	v17 = *(void(__fastcall****)(_QWORD, __int64))(*v10 + 8 * v14);
	if (v17)
		(**v17)(v17, 1i64);
	sub_140007270((__int64)v10, v14);
LABEL_14:
	sub_1400B4DE0(v10, v14, &v19);
	sub_14003D880(&v20);
LABEL_15:
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 48i64))(v8, *(_QWORD*)(a2 + 40));
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 56i64))(v8, *(_QWORD*)(a2 + 48));
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 80i64))(v8, *(unsigned int*)(a2 + 64));
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 72i64))(v8, *(_QWORD*)(a2 + 56));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	return 0i64;
}

