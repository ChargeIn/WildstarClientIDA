#include "../winhttp.h"

//----- (00000001405E16C0) ----------------------------------------------------
__int64 __fastcall sub_1405E16C0(__int64 a1, __int64 a2)
{
	__int64 v2; // r13
	int* v3; // rbp
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	int* v10; // rbp
	__int64 v11; // r13
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // rcx

	v2 = *(_QWORD*)(a1 + 664);
	v3 = *(int**)a2;
	if (*(_QWORD*)a2)
	{
		v6 = 0i64;
		if (*(_WORD*)v3)
		{
			do
				++v6;
			while (*((_WORD*)v3 + v6));
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
		sub_1407DB590(v7 + 4, v3, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 664) = v8;
	}
	else
	{
		*(_QWORD*)(a1 + 664) = 0i64;
	}
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v10 = *(int**)(a2 + 8);
	v11 = *(_QWORD*)(a1 + 672);
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
		*(_QWORD*)(a1 + 672) = v14;
	}
	else
	{
		*(_QWORD*)(a1 + 672) = 0i64;
	}
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	v16 = qword_140C65898;
	*(_DWORD*)(a1 + 656) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 752) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 680) = *(_DWORD*)(a2 + 20);
	Apollo_LUAEvent(*(_QWORD*)(v16 + 29504), "FriendshipAccountPersonalStatusUpdate", &unk_1409D0EFD);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

