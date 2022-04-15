#include "../winhttp.h"

//----- (00000001407138F0) ----------------------------------------------------
__int64 __fastcall sub_1407138F0(__int64 a1, unsigned int a2, _DWORD* a3, _DWORD* a4)
{
	int* v4; // rbx
	int** v5; // rdi
	__int64 v7; // rax
	__int64 i; // rax
	int* v11; // rax
	bool v12; // zf
	int v13; // eax
	__int64 result; // rax

	v4 = *(int**)(a1 + 128);
	v5 = (int**)(a1 + 136);
	v7 = *(_QWORD*)(a1 + 136);
	if (v7)
	{
		v4 = *(int**)(a1 + 136);
		for (i = *(_QWORD*)(v7 + 48); i; i = *(_QWORD*)(i + 48))
			v4 = (int*)i;
	}
	if (!a3[3] || !v4 || (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v4 + 8i64))(v4) != 1)
	{
		v11 = sub_14018B280(104i64, 0);
		v4 = v11;
		if (v11)
		{
			*((_QWORD*)v11 + 3) = 0i64;
			*((_QWORD*)v11 + 4) = 0i64;
			*((_QWORD*)v11 + 5) = 0i64;
			*((_QWORD*)v11 + 6) = 0i64;
			*(_QWORD*)v11 = off_140B73D00;
			*((_QWORD*)v11 + 7) = 0i64;
			v11[16] = 0;
			*((_QWORD*)v11 + 9) = 0i64;
			*((_QWORD*)v11 + 10) = 0i64;
		}
		else
		{
			v4 = 0i64;
		}
		v12 = *((_QWORD*)v4 + 5) == 0i64;
		v13 = a3[3];
		v4[2] = a2;
		v4[3] = v13;
		*((_QWORD*)v4 + 2) = 0i64;
		if (v12)
		{
			for (; *v5; v5 = (int**)(*v5 + 12))
				;
			*((_QWORD*)v4 + 5) = v5;
			*((_QWORD*)v4 + 6) = 0i64;
			*v5 = v4;
		}
	}
	sub_1407834B0((unsigned int*)v4 + 14, a2, a3);
	result = 0i64;
	if (a4)
	{
		if (a3[3])
			*a4 = 1;
	}
	return result;
}
// 140B73D00: using guessed type __int64 (__fastcall *off_140B73D00[2])();

