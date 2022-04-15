#include "../winhttp.h"

//----- (00000001406DE650) ----------------------------------------------------
void __fastcall sub_1406DE650(__int64 a1, unsigned __int64 a2)
{
	__int64 v3; // rcx
	unsigned int v4; // ebx
	__int64 v5; // r14
	__int64 v6; // rsi
	unsigned __int64 v7; // rbp
	__int64 v8; // rdi
	_QWORD* v9; // rax
	__int64* v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // [rsp+20h] [rbp-38h] BYREF
	__int64 v13; // [rsp+28h] [rbp-30h]
	__int64 v14; // [rsp+30h] [rbp-28h]
	__int64 v15; // [rsp+38h] [rbp-20h]
	__int64 v16; // [rsp+60h] [rbp+8h] BYREF

	if ((*(_BYTE*)(a1 + 28) & 1) != 0)
	{
		*(_QWORD*)(a1 + 1024) = a2;
		v3 = *(_QWORD*)(a1 + 1176);
		v4 = 0;
		v13 = 0i64;
		v14 = 0i64;
		v15 = 0i64;
		sub_140505590(v3, (__int64)&v12, a2);
		v5 = v14;
		v6 = v13;
		v7 = (v14 - v13) / 88;
		if (v7)
		{
			v8 = 0i64;
			do
			{
				v9 = sub_14018D540(&v16, (__int64)L"%d", *(_QWORD*)(88 * v8 + v6));
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(32 * (v8 + 33) + a1) + 80i64))(
					*(_QWORD*)(32 * (v8 + 33) + a1),
					*v9);
				if (v16)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
				v8 = ++v4;
			} while (v4 < v7);
		}
		if (v6 != v5)
		{
			v10 = (__int64*)(v6 + 24);
			do
			{
				v11 = v10[5];
				if (v11)
					sub_14018B900(v11, 0);
				if (*v10)
					sub_14018B900(*v10, 0);
				v10 += 11;
			} while (v10 - 3 != (__int64*)v5);
		}
		if (v6)
			sub_14018B900(v6, 0);
	}
}
// 140B3E058: using guessed type wchar_t aD_72[3];

