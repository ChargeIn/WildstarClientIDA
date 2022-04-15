#include "../winhttp.h"

//----- (00000001404000C0) ----------------------------------------------------
void __fastcall sub_1404000C0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	char v5[16]; // [rsp+20h] [rbp-78h] BYREF
	__int64 v6; // [rsp+30h] [rbp-68h]
	__int64 v7; // [rsp+58h] [rbp-40h]
	__int64 v8; // [rsp+60h] [rbp-38h]

	sub_140474E10((__int64)v5, a1);
	sub_140474EC0(a1, a2);
	sub_140474EC0(a2, (__int64)v5);
	if (qword_140C65898)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v4)
			sub_1400EA3E0(v4, "MessageFinished", byte_1409EB834, v5);
	}
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		v7 = 0i64;
	}
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		v8 = 0i64;
	}
	if (v6)
		sub_14018B900(v6, 0);
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

