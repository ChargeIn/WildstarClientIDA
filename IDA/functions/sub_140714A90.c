#include "../winhttp.h"

//----- (0000000140714A90) ----------------------------------------------------
__int64 __fastcall sub_140714A90(__int64 a1, unsigned int a2, __int64 a3, _DWORD* a4)
{
	__int64 v4; // rax
	int* v5; // rbx
	int** v6; // rdi
	__int64 i; // rax
	int* v11; // rax
	bool v12; // zf
	int v13; // eax
	__int64 result; // rax
	int v15[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 48);
	v5 = *(int**)(a1 + 40);
	v6 = (int**)(a1 + 48);
	if (v4)
	{
		v5 = *(int**)(a1 + 48);
		for (i = *(_QWORD*)(v4 + 48); i; i = *(_QWORD*)(i + 48))
			v5 = (int*)i;
	}
	if (!*(_DWORD*)(a3 + 8) || !v5 || (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v5 + 8i64))(v5) != 7)
	{
		v11 = sub_14018B280(104i64, 0);
		v5 = v11;
		if (v11)
		{
			*((_QWORD*)v11 + 3) = 0i64;
			*((_QWORD*)v11 + 4) = 0i64;
			*((_QWORD*)v11 + 5) = 0i64;
			*((_QWORD*)v11 + 6) = 0i64;
			*(_QWORD*)v11 = off_140B73CA0;
			*((_QWORD*)v11 + 7) = 0i64;
			v11[16] = 0;
			*((_QWORD*)v11 + 9) = 0i64;
			*((_QWORD*)v11 + 10) = 0i64;
		}
		else
		{
			v5 = 0i64;
		}
		v12 = *((_QWORD*)v5 + 5) == 0i64;
		v13 = *(_DWORD*)(a3 + 8);
		v5[2] = a2;
		v5[3] = v13;
		*((_QWORD*)v5 + 2) = 0i64;
		if (v12)
		{
			for (; *v6; v6 = (int**)(*v6 + 12))
				;
			*((_QWORD*)v5 + 5) = v6;
			*((_QWORD*)v5 + 6) = 0i64;
			*v6 = v5;
		}
	}
	v15[0] = sub_1401C9770((unsigned __int16*)a3);
	v15[1] = sub_1401C9770((unsigned __int16*)(a3 + 2));
	v15[2] = sub_1401C9770((unsigned __int16*)(a3 + 4));
	sub_1407834B0((unsigned int*)v5 + 14, a2, v15);
	result = 0i64;
	if (a4)
	{
		if (*(_DWORD*)(a3 + 8))
			*a4 = 1;
	}
	return result;
}
// 140B73CA0: using guessed type __int64 (__fastcall *off_140B73CA0[5])();

