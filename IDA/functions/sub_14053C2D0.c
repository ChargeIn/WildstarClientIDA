//----- (000000014053C2D0) ----------------------------------------------------
__int64 __fastcall sub_14053C2D0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // r15
	__int64 v5; // rdx
	int** v6; // rdi
	__int64 v7; // rbp
	int* v8; // rax
	int* v9; // rbx
	__int64 v10; // rsi
	int* v11; // rax
	__int64 i; // [rsp+50h] [rbp+8h]

	v4 = a1;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x4924924924924925i64) >> 64;
	for (i = ((unsigned __int64)v5 >> 63) + (v5 >> 5); i > 0; --i)
	{
		if (v4 != a3)
			sub_14001C480(a3, *(int**)(v4 + 8), *(int**)(v4 + 16));
		v6 = (int**)(a3 + 32);
		v7 = 10i64;
		do
		{
			v8 = sub_14018B280(48i64, 0);
			v9 = v8;
			if (v8)
			{
				v10 = *(__int64*)((char*)v6 + v4 - a3);
				*((_QWORD*)v8 + 3) = 0i64;
				*((_QWORD*)v8 + 4) = 0i64;
				*((_QWORD*)v8 + 5) = 0i64;
				v11 = sub_14018B280(16i64, 0);
				*((_QWORD*)v9 + 3) = v11;
				*((_QWORD*)v9 + 4) = v11;
				*((_QWORD*)v9 + 5) = v11 + 4;
				if (v11)
					*(_WORD*)v11 = 0;
				if (*(_QWORD*)v10)
					(***(void(__fastcall****)(_QWORD))v10)(*(_QWORD*)v10);
				*(_QWORD*)v9 = *(_QWORD*)v10;
				v9[2] = *(_DWORD*)(v10 + 8);
			}
			else
			{
				v9 = 0i64;
			}
			*v6++ = v9;
			--v7;
		} while (v7);
		v4 += 112i64;
		a3 += 112i64;
	}
	return a3;
}

