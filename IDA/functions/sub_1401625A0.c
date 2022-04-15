//----- (00000001401625A0) ----------------------------------------------------
char __fastcall sub_1401625A0(_QWORD* a1, int a2, int a3)
{
	__int64 v3; // rsi
	__int64 v4; // rdi
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v8; // rcx
	unsigned int v9; // edx
	__int64 v10; // rax
	__int64 v11; // rcx
	_WORD* v12; // rax
	char result; // al
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rcx
	_WORD* v17; // rax
	__int64 v18; // rbp
	__int64 v19; // rcx
	_QWORD* v20; // r14
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // [rsp+50h] [rbp+8h]

	v3 = a2;
	v4 = a3;
	v5 = a1[147];
	v6 = *(_QWORD*)(v5 + 8);
	v8 = v5;
	v9 = v4 + 32 * (a2 + 1);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v9)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v8 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v8 == v5 || (v23 = v8, v9 < *(_DWORD*)(v8 + 32)))
		v23 = v5;
	if (v23 == v5 || !*(_BYTE*)(v23 + 36))
	{
		if (*((_DWORD*)a1 + 264))
		{
			(*(void(__fastcall**)(_QWORD*))(*a1 + 536i64))(a1);
			v18 = a1[85];
			if (v18)
			{
				v19 = *(_QWORD*)(v18 + 8);
				if (v19)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
					*(_QWORD*)(v18 + 8) = 0i64;
				}
			}
			v20 = (_QWORD*)a1[85];
			if (v20 && *v20)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v20 + 8i64))(*v20);
				*v20 = 0i64;
			}
			(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1 + 488i64))(a1, 0i64);
			(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1 + 496i64))(a1, 0i64);
		}
		goto LABEL_41;
	}
	if ((int)v3 < 0)
	{
		if ((int)v4 < 0)
			goto LABEL_41;
		if ((int)v4 < *((_DWORD*)a1 + 286))
		{
			v10 = a1[142];
			*((_DWORD*)a1 + 262) = v3;
			*((_DWORD*)a1 + 263) = v4;
			v11 = *(_QWORD*)(*(_QWORD*)(v10 + 8 * v4) + 16i64);
			if (v11)
				v12 = (_WORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 64i64))(v11);
			else
				v12 = &unk_1409DC3CC;
			result = sub_1400CCD40(a1, v12);
			*((_DWORD*)a1 + 264) = 1;
			return result;
		}
	}
	if ((int)v4 >= 0 && (int)v4 < *((_DWORD*)a1 + 286) && (int)v3 >= 0 && (int)v3 < *((_DWORD*)a1 + 290))
	{
		v14 = *(_QWORD*)(a1[144] + 8 * v3);
		v15 = (int)v4 >= *(_DWORD*)(v14 + 24) ? 0i64 : *(_QWORD*)(*(_QWORD*)(v14 + 16) + 8 * v4);
		if (v15)
		{
			if (*(_QWORD*)(v15 + 184))
			{
				result = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 488i64))(a1, *(_QWORD*)(v15 + 184));
			}
			else
			{
				v16 = *(_QWORD*)(v15 + 192);
				if (v16)
					v17 = (_WORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 64i64))(v16);
				else
					v17 = &unk_1409DC2EC;
				result = sub_1400CCD40(a1, v17);
			}
			*((_DWORD*)a1 + 262) = v3;
			*((_DWORD*)a1 + 263) = v4;
			*((_DWORD*)a1 + 264) = 1;
			return result;
		}
	}
LABEL_41:
	*((_DWORD*)a1 + 264) = 0;
	if ((_DWORD)v3 == -1 || (result = *((_BYTE*)a1 + 664) >> 3, (a1[83] & 8) == 0) && (_DWORD)v4 == -1)
	{
		v22 = *a1;
		a1[131] = -1i64;
		(*(void(__fastcall**)(_QWORD*, _QWORD))(v22 + 488))(a1, 0i64);
		return (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 496i64))(a1, 0i64);
	}
	else if (*((_DWORD*)a1 + 262) != (_DWORD)v3 || *((_DWORD*)a1 + 263) != (_DWORD)v4)
	{
		v21 = *a1;
		*((_DWORD*)a1 + 262) = v3;
		*((_DWORD*)a1 + 263) = v4;
		return (*(__int64(__fastcall**)(_QWORD*, void*, __int64, _QWORD, _DWORD))(v21 + 120))(
			a1,
			&unk_1409DC8CC,
			1i64,
			(unsigned int)v3,
			v4);
	}
	return result;
}

