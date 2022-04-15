#include "../winhttp.h"

//----- (000000014040B570) ----------------------------------------------------
__int64 __fastcall sub_14040B570(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rbx
	int* v11; // rax
	int* v12; // rdi
	unsigned __int64 v13; // rbx

	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 24);
	v4 = *(_QWORD*)(a2 + 32);
	if (v4)
	{
		v5 = *(_QWORD*)(v4 - 8);
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
		sub_1407DB590(v6 + 4, *(int**)(a2 + 32), v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*(_QWORD*)(a1 + 32) = v7;
	}
	else
	{
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v9 = *(_QWORD*)(a2 + 40);
	if (v9)
	{
		v10 = *(_QWORD*)(v9 - 8);
		v11 = sub_14018B280(2 * v10 + 18, 0);
		if (v11)
		{
			*(_QWORD*)v11 = off_140B55060;
			*((_QWORD*)v11 + 1) = v10;
		}
		else
		{
			v11 = 0i64;
		}
		v12 = v11 + 4;
		v13 = 2 * v10;
		sub_1407DB590(v11 + 4, *(int**)(a2 + 40), v13);
		*(_WORD*)((char*)v12 + v13) = 0;
		*(_QWORD*)(a1 + 40) = v12;
	}
	else
	{
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

