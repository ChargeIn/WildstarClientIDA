//----- (00000001402F7850) ----------------------------------------------------
int* __fastcall sub_1402F7850(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	int* result; // rax
	int* v6; // rcx
	int** v7; // rbx
	__int64 v8; // rax
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rdi
	__int64 v13; // rsi
	__int64 v14; // rcx
	int v16[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v16[0] = 0;
	if ((*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v16, 0i64))
	{
		if ((_DWORD)v3)
		{
			v10 = a1[8];
			if ((unsigned int)v3 >= *(_DWORD*)(v10 + 400))
				v9 = -1;
			else
				v9 = *(unsigned __int16*)(*(_QWORD*)(v10 + 408) + 2 * v3);
		}
		else
		{
			v9 = 0;
		}
		v11 = v9;
		result = (int*)a1[105];
		v12 = 88 * v11;
		v13 = *(_QWORD*)&result[v12 + 4];
		if (v13)
		{
			v14 = *(_QWORD*)(v13 + 8);
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
			sub_14018B900(v13, 0);
			result = (int*)a1[105];
			*(_QWORD*)&result[v12 + 4] = 0i64;
			if ((*((_DWORD*)a1 + 214))-- == 1)
				--* ((_DWORD*)a1 + 77);
		}
	}
	else
	{
		result = sub_14018B280(40i64, 0);
		v6 = result;
		if (result)
		{
			*(_QWORD*)result = &off_140B64078;
			*((_QWORD*)result + 2) = 0i64;
			*((_QWORD*)result + 3) = 0i64;
			*((_QWORD*)result + 1) = a1;
			v7 = (int**)(a1 + 9);
			if (!*((_QWORD*)result + 2))
			{
				*((_QWORD*)result + 2) = v7;
				*((_QWORD*)result + 3) = *v7;
				*v7 = result;
				v8 = *((_QWORD*)result + 3);
				if (v8)
					*(_QWORD*)(v8 + 16) = v6 + 6;
			}
			result = (int*)off_140B63FA8;
			v6[8] = v3;
			*(_QWORD*)v6 = off_140B63FA8;
		}
	}
	return result;
}
// 140B63FA8: using guessed type __int64 (__fastcall *off_140B63FA8[27])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402F7850: using guessed type int var_18[6];

