#include "../winhttp.h"

//----- (0000000140510AC0) ----------------------------------------------------
__int64 __fastcall sub_140510AC0(__int64 a1, __int64 a2, unsigned __int64* a3)
{
	unsigned __int64 v5; // r8
	void* v6; // rax
	__int64 v7; // rax
	int v8; // ecx
	__int64* v9; // rax
	__int64 result; // rax
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]
	__int64 v13; // [rsp+40h] [rbp+8h] BYREF

	if (a3)
	{
		v5 = -1i64;
		do
			++v5;
		while (*((_BYTE*)a3 + v5));
		sub_140058710(a1, a3, v5);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v6 = sub_1400580E0(a1, -2);
	sub_14005E8E0(a1, (__int64)v6, (int*)(*(_QWORD*)(a1 + 16) - 16i64), *(_QWORD*)(a1 + 16) - 16i64);
	v7 = *(_QWORD*)(a1 + 16);
	v8 = *(_DWORD*)(v7 - 8);
	v9 = (__int64*)(v7 - 16);
	if (v8 == 3)
		goto LABEL_10;
	if (v8 == 4 && sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v13))
	{
		v12 = 3;
		v9 = &v11;
		v11 = v13;
	LABEL_10:
		result = (unsigned int)(int)*(double*)v9;
		*(_QWORD*)(a1 + 16) -= 16i64;
		return result;
	}
	*(_QWORD*)(a1 + 16) -= 16i64;
	return 0i64;
}

