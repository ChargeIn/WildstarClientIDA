#include "../winhttp.h"

//----- (00000001403C28F0) ----------------------------------------------------
__int64 __fastcall sub_1403C28F0(__int64 a1, int* a2, __int64* a3)
{
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // r8
	unsigned __int64 v11; // rbx
	__int64 v12; // rax
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]
	__int64 v16; // [rsp+30h] [rbp-18h]

	v6 = sub_1403D90D0(a1, *(_DWORD*)(a1 + 26176));
	if (!v6 || !*(_DWORD*)(v6 + 14040))
		return 2147500037i64;
	v7 = sub_1403AC780(qword_140C65898 + 160, a2);
	v8 = v7;
	if (!v7 || !(unsigned int)sub_140569F10(v7))
		return 2147500037i64;
	if (!a3)
	{
		v10 = *(_QWORD*)(v8 + 72);
		if (!v10)
			v10 = *(_QWORD*)(v8 + 64) + 8i64;
		v11 = *(_QWORD*)(a1 + 5624);
		if (sub_1403B54A0(v9, *(_QWORD*)(v8 + 64), v10, *(float*)(v8 + 132)) >= v11)
			return 2147500037i64;
	}
	v14 = 0i64;
	v15 = 0i64;
	v16 = 0i64;
	v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 48i64))(v8);
	if (a3)
		v12 = *a3;
	else
		v12 = 0i64;
	v15 = v12;
	v16 = 0i64;
	sub_1403F4900(a1, 0x14Cu, (__int64)&v14);
	return 0i64;
}
// 1403C2989: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

