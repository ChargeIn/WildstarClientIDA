#include "../winhttp.h"

//----- (00000001407163D0) ----------------------------------------------------
__int64 __fastcall sub_1407163D0(__int64 a1, unsigned int a2, _DWORD* a3)
{
	__int64 v3; // rax
	int* v4; // rbx
	int** v5; // rdi
	__int64 i; // rax
	bool v9; // zf

	v3 = *(_QWORD*)(a1 + 16);
	v4 = *(int**)(a1 + 8);
	v5 = (int**)(a1 + 16);
	if (v3)
	{
		v4 = *(int**)(a1 + 16);
		for (i = *(_QWORD*)(v3 + 48); i; i = *(_QWORD*)(i + 48))
			v4 = (int*)i;
	}
	if (!v4 || (*(unsigned int(__fastcall**)(int*))(*(_QWORD*)v4 + 8i64))(v4) != 23)
	{
		v4 = sub_14018B280(96i64, 0);
		if (v4)
		{
			*((_QWORD*)v4 + 3) = 0i64;
			*((_QWORD*)v4 + 4) = 0i64;
			*((_QWORD*)v4 + 5) = 0i64;
			*((_QWORD*)v4 + 6) = 0i64;
			*(_QWORD*)v4 = off_140B73B80;
			*((_QWORD*)v4 + 7) = 0i64;
			v4[16] = 0;
			*((_QWORD*)v4 + 9) = 0i64;
			*((_QWORD*)v4 + 10) = 0i64;
		}
		else
		{
			v4 = 0i64;
		}
		v9 = *((_QWORD*)v4 + 5) == 0i64;
		v4[2] = a2;
		v4[3] = 0;
		*((_QWORD*)v4 + 2) = 0i64;
		if (v9)
		{
			for (; *v5; v5 = (int**)(*v5 + 12))
				;
			*((_QWORD*)v4 + 5) = v5;
			*((_QWORD*)v4 + 6) = 0i64;
			*v5 = v4;
		}
	}
	sub_140783300((unsigned int*)v4 + 14, a2, a3);
	return 0i64;
}
// 140B73B80: using guessed type __int64 (__fastcall *off_140B73B80[41])();

