//----- (00000001402F9990) ----------------------------------------------------
void __fastcall sub_1402F9990(_QWORD* a1, int a2, int a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // rbp
	int v6; // ebx
	int* v8; // rcx
	int** v9; // rdi
	__int64 v10; // rax
	BOOL v11; // ecx
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v4 = a2;
	v6 = 0;
	v12[0] = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(v3 + 16))(a1, v12, 0i64))
	{
		v11 = v4 >> 3 < a1[131] && ((unsigned __int8)(1 << (v4 & 7)) & *(_BYTE*)(a1[130] + (v4 >> 3))) != 0;
		LOBYTE(v6) = a3 == 0;
		if (v6 != !v11)
		{
			sub_1407B0810(a1 + 130, v4, a3);
			sub_1402F5DF0((__int64)a1);
		}
	}
	else
	{
		v8 = sub_14018B280(40i64, 0);
		if (v8)
		{
			*(_QWORD*)v8 = &off_140B64078;
			*((_QWORD*)v8 + 2) = 0i64;
			*((_QWORD*)v8 + 3) = 0i64;
			*((_QWORD*)v8 + 1) = a1;
			v9 = (int**)(a1 + 9);
			if (!*((_QWORD*)v8 + 2))
			{
				*((_QWORD*)v8 + 2) = v9;
				*((_QWORD*)v8 + 3) = *v9;
				*v9 = v8;
				v10 = *((_QWORD*)v8 + 3);
				if (v10)
					*(_QWORD*)(v10 + 16) = v8 + 6;
			}
			v8[8] = v4;
			v8[9] = a3;
			*(_QWORD*)v8 = off_140B63FD8;
		}
	}
}
// 140B63FD8: using guessed type __int64 (__fastcall *off_140B63FD8[21])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402F9990: using guessed type int var_18[6];

