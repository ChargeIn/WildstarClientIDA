//----- (00000001404D3630) ----------------------------------------------------
__int64 __fastcall sub_1404D3630(__int64 a1, __int64 a2)
{
	int* v4; // rsi
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx
	__int64 v9; // rax
	unsigned __int64 v10; // r14
	__int64 v11; // r15
	__int64 v12; // r13
	int* v13; // rsi
	__int64 v14; // rbx
	int* v15; // rax
	__int64 v16; // rdi
	unsigned __int64 v17; // rbx
	__int64 v19; // [rsp+20h] [rbp-48h] BYREF
	int v20; // [rsp+28h] [rbp-40h]
	__int64* v22; // [rsp+78h] [rbp+10h]

	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 32);
	v4 = *(int**)(a2 + 40);
	if (v4)
	{
		v5 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v5;
			while (*((_WORD*)v4 + v5));
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*(_QWORD*)v6 = off_140B55060;
			*((_QWORD*)v6 + 1) = v5;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, v4, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*(_QWORD*)(a1 + 48) = v7;
	}
	else
	{
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	v22 = (__int64*)(a1 + 56);
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	v9 = sub_140215240(*(_DWORD*)(a1 + 16));
	if (v9)
		*(_DWORD*)(a1 + 12) = *(_DWORD*)(v9 + 20);
	v10 = 0i64;
	if (!*(_DWORD*)(a2 + 48))
		return a1;
	v11 = 0i64;
	do
	{
		v12 = *(_QWORD*)(a2 + 56);
		v13 = *(int**)(v12 + v11);
		if (v13)
		{
			v14 = 0i64;
			if (*(_WORD*)v13)
			{
				do
					++v14;
				while (*((_WORD*)v13 + v14));
			}
			v15 = sub_14018B280(2 * v14 + 18, 0);
			if (v15)
			{
				*(_QWORD*)v15 = off_140B55060;
				*((_QWORD*)v15 + 1) = v14;
			}
			else
			{
				v15 = 0i64;
			}
			v16 = (__int64)(v15 + 4);
			v17 = 2 * v14;
			sub_1407DB590(v15 + 4, v13, v17);
			*(_WORD*)(v17 + v16) = 0;
			v19 = v16;
		}
		else
		{
			v19 = 0i64;
		}
		v20 = *(_DWORD*)(v12 + v11 + 8);
		sub_1404D4C70(v22, (__int64)&v19);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
		++v10;
		v11 += 16i64;
	} while (v10 < *(unsigned int*)(a2 + 48));
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

