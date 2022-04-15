#include "../winhttp.h"

//----- (00000001406B4BE0) ----------------------------------------------------
__int64 __fastcall sub_1406B4BE0(_QWORD* a1)
{
	__int64* v1; // rax
	__int64 v2; // rbx
	int* v3; // rax
	__int64 v4; // rcx
	__int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

	v1 = (__int64*)sub_140056AB0(a1, 1u);
	if (v1)
		v2 = *v1;
	else
		v2 = 0i64;
	v6[1] = 1i64;
	v3 = sub_14018B280(24i64, 0);
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 1i64;
		*(_QWORD*)v3 = off_140B55060;
	}
	v4 = qword_140C65898 + 27592;
	v6[0] = (__int64)(v3 + 4);
	*((_QWORD*)v3 + 2) = v2;
	sub_14062B0B0(v4, v6);
	if (v6[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6[0] - 16) + 8i64))(v6[0] - 16);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

