#include "../winhttp.h"

//----- (00000001400F06F0) ----------------------------------------------------
__int64 __fastcall sub_1400F06F0(__int64 a1, __int64 a2, unsigned __int16* a3, int a4)
{
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	__int64* v9; // rax
	__int64 result; // rax
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	v6 = (unsigned __int64*)sub_14018F0E0(&v11, a3)[1];
	if (v6)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)v6 + v7));
		sub_140058710(a1, v6, v7);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v12)
		sub_14018B900(v12, 0);
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)a4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v9, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

