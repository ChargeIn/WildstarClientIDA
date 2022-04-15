#include "../winhttp.h"

//----- (00000001404964C0) ----------------------------------------------------
int* sub_1404964C0()
{
	int* v0; // rbx
	int* v1; // rax

	v0 = sub_14018B280(112i64, 0);
	if (!v0)
		return 0i64;
	*(_QWORD*)v0 = off_140B675B8;
	v1 = sub_14018B280(48i64, 0);
	*((_QWORD*)v0 + 3) = v1;
	*((_QWORD*)v0 + 4) = 0i64;
	*(_BYTE*)v1 = 0;
	*(_QWORD*)(*((_QWORD*)v0 + 3) + 8i64) = 0i64;
	*(_QWORD*)(*((_QWORD*)v0 + 3) + 16i64) = *((_QWORD*)v0 + 3);
	*(_QWORD*)(*((_QWORD*)v0 + 3) + 24i64) = *((_QWORD*)v0 + 3);
	*((_QWORD*)v0 + 7) = 0i64;
	*((_QWORD*)v0 + 8) = 0i64;
	*((_QWORD*)v0 + 9) = 0i64;
	*((_QWORD*)v0 + 11) = 0i64;
	*((_QWORD*)v0 + 12) = 0i64;
	*((_QWORD*)v0 + 13) = 0i64;
	*(_QWORD*)v0 = off_140B675B8;
	return v0;
}
// 140B675B8: using guessed type __int64 (__fastcall *off_140B675B8[10])();

