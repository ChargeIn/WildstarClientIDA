#include "../winhttp.h"

//----- (00000001403B6D10) ----------------------------------------------------
__int64 __fastcall sub_1403B6D10(__int64 a1, int* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rdi
	_QWORD* v7; // rcx
	void* v8; // rbx
	__int64 v9; // rax
	void* v10; // rdx

	sub_1403FA730(a1);
	sub_1403FA3D0(a1);
	sub_140016480(qword_140C635F0);
	v4 = *(_QWORD*)(a1 + 31016);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 31016) = 0i64;
	}
	sub_1400168A0(v4, *a2);
	v5 = *(_QWORD*)(a1 + 25592);
	if (!v5)
		return sub_1400481B0(a1, *(_QWORD*)(qword_140C635F0 + 5888), 0i64);
	v7 = *(_QWORD**)(v5 + 88);
	v8 = *(void**)(qword_140C635F0 + 5888);
	if (v7)
	{
		v9 = sub_1400E9080(v7, L"ErrorMessageText");
		if (v9)
		{
			v10 = &unk_1409D0DCC;
			if (v8)
				v10 = v8;
			(*(void(__fastcall**)(__int64, void*))(*(_QWORD*)v9 + 80i64))(v9, v10);
		}
	}
	*(_QWORD*)(v5 + 128) = 0i64;
	return 0i64;
}
// 1403B6D58: variable 'v4' is possibly undefined
// 1409EEF28: using guessed type wchar_t aErrormessagete_0[17];
// 140C635F0: using guessed type __int64 qword_140C635F0;

