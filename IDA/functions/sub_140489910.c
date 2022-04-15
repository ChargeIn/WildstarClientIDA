#include "../winhttp.h"

//----- (0000000140489910) ----------------------------------------------------
__int64 sub_140489910()
{
	int* v0; // rax
	int* v1; // rbx
	int* v2; // rax
	__int64 v3; // rax

	if (qword_140C65930)
		return 0i64;
	v0 = sub_14018B280(304i64, 0);
	v1 = v0;
	if (v0)
	{
		sub_140488890(v0);
		*(_QWORD*)v1 = off_140B671E8;
		v2 = sub_14018B280(48i64, 0);
		*((_QWORD*)v1 + 34) = 0i64;
		*((_QWORD*)v1 + 33) = v2;
		*(_BYTE*)v2 = 0;
		*(_QWORD*)(*((_QWORD*)v1 + 33) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v1 + 33) + 16i64) = *((_QWORD*)v1 + 33);
		*(_QWORD*)(*((_QWORD*)v1 + 33) + 24i64) = *((_QWORD*)v1 + 33);
	}
	else
	{
		v1 = 0i64;
	}
	v3 = *(_QWORD*)v1;
	qword_140C65930 = (__int64)v1;
	if ((*(int(__fastcall**)(int*))(v3 + 8))(v1) >= 0)
		return 0i64;
	if (qword_140C65930)
		(**(void(__fastcall***)(__int64, __int64))qword_140C65930)(qword_140C65930, 1i64);
	qword_140C65930 = 0i64;
	return 2147500037i64;
}
// 140B671E8: using guessed type __int64 (__fastcall *off_140B671E8[20])();
// 140C65930: using guessed type __int64 qword_140C65930;

