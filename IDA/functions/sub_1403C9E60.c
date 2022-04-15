#include "../winhttp.h"

//----- (00000001403C9E60) ----------------------------------------------------
void __fastcall sub_1403C9E60(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	int* v3; // rax
	int v4; // edi
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64* v7; // rsi
	__int64 v8; // rax
	bool v9; // zf
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v10 = a1;
	v2 = a2;
	v3 = sub_14018B280(56i64, 0);
	v4 = 0;
	v5 = (__int64)v3;
	if (v3)
	{
		*(_QWORD*)v3 = 0i64;
		*((_QWORD*)v3 + 2) = 0i64;
		v3[6] = 0;
		v3[10] = 0;
		*((_QWORD*)v3 + 4) = sub_1403C9DF0;
		*((_QWORD*)v3 + 6) = v2;
		v6 = sub_140225140(1u);
		if (v6)
			*(_QWORD*)(v5 + 16) = v6;
	}
	else
	{
		v5 = 0i64;
	}
	v7 = (__int64*)qword_140C65A28;
	v8 = *(_QWORD*)qword_140C65A28;
	v10 = v5;
	v9 = *(_QWORD*)(v8 + 16) == 0i64;
	*(_DWORD*)(v5 + 24) = dword_140C636A8;
	LOBYTE(v4) = v9;
	sub_1404CFC10(*v7, (__int64*)v5, &v10);
	if (v4)
	{
		if (!v7[12])
			sub_1404CF990(v7);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65A28: using guessed type __int64 qword_140C65A28;

