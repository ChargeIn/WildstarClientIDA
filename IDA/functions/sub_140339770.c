#include "../winhttp.h"

//----- (0000000140339770) ----------------------------------------------------
__int64 __fastcall sub_140339770(__int64 a1, __int64 a2)
{
	__int64* v2; // rax
	__int64* v6; // rdi
	void(__fastcall * **v7)(_QWORD); // rcx
	__int64 v8; // rcx
	__int64* v9; // rbx
	__int64 v10; // rcx
	__int64* v11; // rax
	__int64 v12; // rcx

	v2 = *(__int64**)(a1 + 16);
	if ((__int64*)*v2 == v2)
		return 1i64;
	v6 = (__int64*)*v2;
	*(_DWORD*)a2 = *(_DWORD*)(*v2 + 16);
	v7 = (void(__fastcall***)(_QWORD))v6[3];
	if (*(void(__fastcall****)(_QWORD))(a2 + 8) != v7)
	{
		if (v7)
			(**v7)(v7);
		v8 = *(_QWORD*)(a2 + 8);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(a2 + 8) = v6[3];
	}
	v9 = **(__int64***)(a1 + 16);
	v10 = *v9;
	v11 = (__int64*)v9[1];
	*v11 = *v9;
	*(_QWORD*)(v10 + 8) = v11;
	v12 = v9[3];
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	sub_14018B900((__int64)v9, 0);
	return 0i64;
}

