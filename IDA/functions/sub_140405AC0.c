//----- (0000000140405AC0) ----------------------------------------------------
__int64 __fastcall sub_140405AC0(__int64 a1, struct _FILETIME a2, int* a3, int* a4)
{
	_QWORD* v4; // rdi
	unsigned __int64 v5; // rbx
	__int64 v9; // r13
	__int64 v10; // r12
	__int64 v11; // rax
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // rcx
	__int64 v17; // r12
	__int64 v18; // r14
	__int64 v19; // rbx
	int* v20; // rax
	int* v21; // rdi
	unsigned __int64 v22; // rbx
	__int64 v24; // [rsp+60h] [rbp+8h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+68h] [rbp+10h] BYREF

	SystemTimeAsFileTime = a2;
	++* (_DWORD*)(a1 + 224);
	v4 = (_QWORD*)a2;
	v5 = (unsigned __int64)*(unsigned int*)(a1 + 224) % *(_QWORD*)(a1 + 216);
	if (*(_QWORD*)(a1 + 240) < v5 + 1)
		sub_14040B0A0((__int64*)(a1 + 232), v5 + 1);
	v9 = 6 * v5;
	*(_DWORD*)(*(_QWORD*)(a1 + 232) + 48 * v5) = *(_DWORD*)(a1 + 224);
	v10 = *(_QWORD*)(a1 + 232);
	v11 = *(_QWORD*)(v10 + 48 * v5 + 40);
	v24 = v11;
	if (a4)
	{
		v12 = 0i64;
		if (*(_WORD*)a4)
		{
			do
				++v12;
			while (*((_WORD*)a4 + v12));
		}
		v13 = sub_14018B280(2 * v12 + 18, 0);
		if (v13)
		{
			*((_QWORD*)v13 + 1) = v12;
			*(_QWORD*)v13 = off_140B55060;
		}
		else
		{
			v13 = 0i64;
		}
		v14 = v13 + 4;
		v15 = 2 * v12;
		sub_1407DB590(v13 + 4, a4, v15);
		v11 = v24;
		*(_WORD*)((char*)v14 + v15) = 0;
		*(_QWORD*)(v10 + 8 * v9 + 40) = v14;
		v4 = (_QWORD*)SystemTimeAsFileTime;
	}
	else
	{
		*(_QWORD*)(v10 + 48 * v5 + 40) = 0i64;
	}
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	v16 = *(_QWORD*)(a1 + 232);
	*(_QWORD*)(v16 + 8 * v9 + 8) = *v4;
	*(_QWORD*)(v16 + 8 * v9 + 16) = v4[1];
	v17 = *(_QWORD*)(a1 + 232);
	v18 = *(_QWORD*)(v17 + 8 * v9 + 32);
	if (a3)
	{
		v19 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v19;
			while (*((_WORD*)a3 + v19));
		}
		v20 = sub_14018B280(2 * v19 + 18, 0);
		if (v20)
		{
			*((_QWORD*)v20 + 1) = v19;
			*(_QWORD*)v20 = off_140B55060;
		}
		else
		{
			v20 = 0i64;
		}
		v21 = v20 + 4;
		v22 = 2 * v19;
		sub_1407DB590(v20 + 4, a3, v22);
		*(_WORD*)((char*)v21 + v22) = 0;
		*(_QWORD*)(v17 + 8 * v9 + 32) = v21;
	}
	else
	{
		*(_QWORD*)(v17 + 8 * v9 + 32) = 0i64;
	}
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	*(struct _FILETIME*)(*(_QWORD*)(a1 + 232) + 8 * v9 + 24) = SystemTimeAsFileTime;
	return *(unsigned int*)(a1 + 224);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

