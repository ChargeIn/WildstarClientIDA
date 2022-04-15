#include "../winhttp.h"

//----- (00000001400F0090) ----------------------------------------------------
__int64 __fastcall sub_1400F0090(__int64 a1, __int64 a2, unsigned __int64* a3, unsigned __int16* a4)
{
	unsigned __int64 v4; // rbx
	unsigned __int64 v8; // r8
	unsigned __int16* v9; // rdx
	unsigned __int64* v10; // rdx
	__int64* v11; // rax
	__int64 result; // rax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v4 = -1i64;
	if (a3)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)a3 + v8));
		sub_140058710(a1, a3, v8);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v9 = (unsigned __int16*)&unk_1409D3EB4;
	if (a4)
		v9 = a4;
	v10 = (unsigned __int64*)sub_14018F0E0(&v13, v9)[1];
	if (v10)
	{
		do
			++v4;
		while (*((_BYTE*)v10 + v4));
		sub_140058710(a1, v10, v4);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v14)
		sub_14018B900(v14, 0);
	v11 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v11, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

