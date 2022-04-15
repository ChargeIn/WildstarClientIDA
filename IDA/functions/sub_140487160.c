#include "../winhttp.h"

//----- (0000000140487160) ----------------------------------------------------
__int64 __fastcall sub_140487160(__int64 a1, __int64 a2, _DWORD* a3, __int64* a4)
{
	__int64 v4; // rdi
	int* v9; // rax
	int* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rcx
	int** v13; // rdx
	__int64 v14; // rcx

	v4 = qword_140C65920;
	if (!*(_DWORD*)qword_140C65920)
		return 0i64;
	v9 = sub_14018B280(104i64, 0);
	v10 = v9;
	if (v9)
	{
		*((_QWORD*)v9 + 1) = 0i64;
		*((_QWORD*)v9 + 2) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 7) = 10i64;
		v9[16] = 0;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 6) = 0i64;
		v11 = qword_140C59420;
		*((_QWORD*)v10 + 9) = qword_140C59420;
		qword_140C59420 = v11 + 1;
		*(_QWORD*)v10 = off_140B67170;
		*((_QWORD*)v10 + 11) = 0i64;
		*((_QWORD*)v10 + 10) = 0i64;
		v10[24] = 0;
	}
	else
	{
		v10 = 0i64;
	}
	sub_140486C10(v10, a2, a3);
	v12 = *a4;
	if (!v10[24])
	{
		*((_QWORD*)v10 + 11) = a4[1];
		*((_QWORD*)v10 + 10) = v12;
	}
	v13 = (int**)(v4 + 8);
	if (!*((_QWORD*)v10 + 3))
	{
		*((_QWORD*)v10 + 3) = v13;
		*((_QWORD*)v10 + 4) = *v13;
		*v13 = v10;
		v14 = *((_QWORD*)v10 + 4);
		if (v14)
			*(_QWORD*)(v14 + 24) = v10 + 8;
	}
	return *((_QWORD*)v10 + 9);
}
// 140B67170: using guessed type __int64 (__fastcall *off_140B67170[6])();
// 140C59420: using guessed type __int64 qword_140C59420;
// 140C65920: using guessed type __int64 qword_140C65920;

