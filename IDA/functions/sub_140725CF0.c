//----- (0000000140725CF0) ----------------------------------------------------
void __fastcall sub_140725CF0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	bool v5; // cf
	__int64 v6; // rax
	int* v7; // rax
	int v8; // ecx
	int* v9; // rdi
	int* v10; // rax
	unsigned int v11; // eax
	unsigned __int64 v12; // rbx
	__int64 v13; // rcx

	if (a2 == *(_DWORD*)a1)
		return;
	if (a2)
	{
		v4 = 296i64 * a2;
		if (!is_mul_ok(a2, 0x128ui64))
			v4 = -1i64;
		v5 = __CFADD__(v4, 8i64);
		v6 = v4 + 8;
		if (v5)
			v6 = -1i64;
		v7 = sub_14018B280(v6, 2u);
		if (v7)
		{
			v8 = a2 - 1;
			*v7 = a2;
			v9 = v7 + 2;
			if ((int)(a2 - 1) >= 0)
			{
				v10 = v7 + 14;
				do
				{
					--v8;
					v10 += 74;
					*((_QWORD*)v10 - 40) = 0i64;
					*((_QWORD*)v10 - 39) = 0i64;
					*((_QWORD*)v10 - 38) = 0i64;
					*((_QWORD*)v10 - 37) = 0i64;
					*((_QWORD*)v10 - 36) = 0i64;
					*((_QWORD*)v10 - 35) = 0i64;
					*((_QWORD*)v10 - 34) = 0i64;
					*((_QWORD*)v10 - 33) = 0i64;
					*((_QWORD*)v10 - 32) = 0i64;
					*((_QWORD*)v10 - 31) = 0i64;
					*((_QWORD*)v10 - 30) = 0i64;
					*((_QWORD*)v10 - 29) = 0i64;
					*((_QWORD*)v10 - 28) = 0i64;
					*((_QWORD*)v10 - 27) = 0i64;
					*((_QWORD*)v10 - 26) = 0i64;
					*((_QWORD*)v10 - 22) = 0i64;
					*((_QWORD*)v10 - 21) = 0i64;
					*((_QWORD*)v10 - 20) = 0i64;
					*((_QWORD*)v10 - 19) = 0i64;
					*((_QWORD*)v10 - 18) = 0i64;
					*((_QWORD*)v10 - 17) = 0i64;
					*((_QWORD*)v10 - 16) = 0i64;
					*((_QWORD*)v10 - 15) = 0i64;
					*((_QWORD*)v10 - 14) = 0i64;
					*((_QWORD*)v10 - 13) = 0i64;
					*((_QWORD*)v10 - 12) = 0i64;
					*((_QWORD*)v10 - 11) = 0i64;
					*((_QWORD*)v10 - 10) = 0i64;
					*((_QWORD*)v10 - 9) = 0i64;
					*((_QWORD*)v10 - 8) = 0i64;
				} while (v8 >= 0);
			}
		}
		else
		{
			v9 = 0i64;
		}
		v11 = *(_DWORD*)a1;
		if (*(_DWORD*)a1 < a2)
			goto LABEL_17;
	}
	else
	{
		v9 = 0i64;
	}
	v11 = a2;
LABEL_17:
	v12 = 296i64 * v11;
	sub_1407DB590(v9, *(int**)(a1 + 8), v12);
	sub_1407E4830(*(int**)(a1 + 8), 0i64, v12);
	v13 = *(_QWORD*)(a1 + 8);
	if (v13)
		sub_1402EE640(v13);
	*(_QWORD*)(a1 + 8) = v9;
	*(_DWORD*)a1 = a2;
}

