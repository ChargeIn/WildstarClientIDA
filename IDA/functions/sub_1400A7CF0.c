//----- (00000001400A7CF0) ----------------------------------------------------
__int64 __fastcall sub_1400A7CF0(__int64 a1, __int64 a2)
{
	int* v4; // r14
	__int64 v5; // r13
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	int* v10; // r14
	__int64 v11; // r15
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 result; // rax

	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 60);
	*(_QWORD*)(a1 + 72) = *(_QWORD*)(a2 + 72);
	v4 = *(int**)(a2 + 8);
	v5 = *(_QWORD*)(a1 + 88);
	if (v4)
	{
		v6 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v6;
			while (*((_WORD*)v4 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*(_QWORD*)v7 = off_140B55060;
			*((_QWORD*)v7 + 1) = v6;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v4, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 88) = v8;
	}
	else
	{
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a1 + 88);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	v10 = *(int**)(a2 + 64);
	v11 = *(_QWORD*)(a1 + 96);
	if (v10)
	{
		v12 = 0i64;
		if (*(_WORD*)v10)
		{
			do
				++v12;
			while (*((_WORD*)v10 + v12));
		}
		v13 = sub_14018B280(2 * v12 + 18, 0);
		if (v13)
		{
			*(_QWORD*)v13 = off_140B55060;
			*((_QWORD*)v13 + 1) = v12;
		}
		else
		{
			v13 = 0i64;
		}
		v14 = v13 + 4;
		v15 = 2 * v12;
		sub_1407DB590(v13 + 4, v10, v15);
		*(_WORD*)((char*)v14 + v15) = 0;
		*(_QWORD*)(a1 + 96) = v14;
	}
	else
	{
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	result = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a1 + 64) = result;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

