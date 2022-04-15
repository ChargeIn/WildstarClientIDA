//----- (00000001401E0060) ----------------------------------------------------
__int64 __fastcall sub_1401E0060(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rsi
	__int64 v5; // r15
	__int64 v7; // r9
	__int64 v8; // rbx
	int v9; // r14d
	_DWORD* v10; // rcx
	bool v11; // zf
	unsigned int v12; // ecx
	__int64 v13; // rax
	__int64 v14; // rcx
	int* v15; // rax
	int* v16; // rbx
	int v17; // esi
	__int128 v18; // [rsp+20h] [rbp-28h] BYREF
	__int128 v19; // [rsp+30h] [rbp-18h]

	v3 = (int)a2;
	v5 = (int)a2;
	if ((unsigned __int64)(int)a2 >= 0x48)
		return 2147500037i64;
	v7 = *((unsigned int*)a3 + 2);
	v8 = *a3;
	*(_QWORD*)&v18 = v8;
	DWORD2(v18) = v7;
	v9 = 0;
	if (!v8)
	{
		v10 = *(_DWORD**)(a1 + 272);
		if (v10)
		{
			a2 = *(unsigned int*)(a1 + 40);
			if ((_DWORD)a2)
			{
				a2 = (unsigned int)(a2 - 1);
				if ((_DWORD)a2)
					goto LABEL_20;
				if ((_DWORD)v3 == 1)
				{
					v12 = v10[26];
				}
				else
				{
					a2 = (unsigned int)(v3 - 2);
					if ((_DWORD)v3 != 2)
					{
						v11 = (_DWORD)a2 == 4;
						goto LABEL_10;
					}
					v12 = v10[25];
				}
			}
			else
			{
				if ((_DWORD)v3 != 2)
				{
					v11 = (_DWORD)v3 == 6;
				LABEL_10:
					if (!v11 || !*(_DWORD*)(a1 + 44))
						goto LABEL_20;
					v12 = v10[27];
					goto LABEL_18;
				}
				v12 = v10[24];
			}
		LABEL_18:
			DWORD2(v19) = 0;
			*(_QWORD*)&v19 = sub_14020BD20(v12);
			v18 = v19;
			v8 = v19;
			v7 = 0i64;
			if ((_QWORD)v19)
				v9 = 1;
		}
	}
LABEL_20:
	v13 = *(_QWORD*)(a1 + 8 * v3 + 328);
	if (v13)
	{
		if (*(_QWORD*)(v13 + 24) == v8 && *(_DWORD*)(v13 + 32) == (_DWORD)v7)
			return 0i64;
		if (*(_DWORD*)(v13 + 100))
			*(_DWORD*)(a1 + 3168) &= ~4u;
	}
	else if (!v8)
	{
		return 0i64;
	}
	v14 = *(_QWORD*)(a1 + 8 * v3 + 328);
	if (v14)
	{
		(*(void(__fastcall**)(__int64, __int64, __int64*, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v14 + 8i64))(
			v14,
			a2,
			a3,
			v7,
			v18,
			*((_QWORD*)&v18 + 1),
			v19);
		*(_QWORD*)(a1 + 8 * v3 + 328) = 0i64;
	}
	*(_DWORD*)(a1 + 3168) &= 0xFFFFFF94;
	++* (_DWORD*)(a1 + 264);
	if (v8)
	{
		v15 = sub_14018B280(120i64, 0);
		v16 = v15;
		if (v15)
		{
			*(_QWORD*)v15 = off_140B55048;
			v15[2] = 1;
			*(_QWORD*)v15 = off_140B60300;
			*((_QWORD*)v15 + 6) = 0i64;
			*((_QWORD*)v15 + 7) = 0i64;
			*((_QWORD*)v15 + 9) = 0i64;
			*((_QWORD*)v15 + 10) = 0i64;
			*((_QWORD*)v15 + 11) = 0i64;
			*(_QWORD*)(v15 + 27) = 0i64;
			*((_QWORD*)v15 + 2) = a1;
		}
		else
		{
			v16 = 0i64;
		}
		v17 = sub_1401E6820((__int64)v16, v3, &v18, v9);
		if (v17 < 0)
		{
			(*(void(__fastcall**)(int*))(*(_QWORD*)v16 + 8i64))(v16);
			return (unsigned int)v17;
		}
		if (v16[25])
			*(_DWORD*)(a1 + 3168) &= ~4u;
		*(_QWORD*)(a1 + 8 * v5 + 328) = v16;
	}
	return 0i64;
}
// 1401E0173: variable 'a2' is possibly undefined
// 1401E0173: variable 'a3' is possibly undefined
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B60300: using guessed type __int64 (__fastcall *off_140B60300[3])();

