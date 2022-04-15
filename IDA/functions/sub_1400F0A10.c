#include "../winhttp.h"

//----- (00000001400F0A10) ----------------------------------------------------
char __fastcall sub_1400F0A10(__int64 a1, int a2, __int64 a3, float* a4)
{
	__int64 v6; // rcx
	int v7; // edx
	char result; // al
	__int64 v9; // rax
	int v10; // ecx
	__int64* v11; // rax
	double v12; // xmm0_8
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]
	__int64 v15; // [rsp+40h] [rbp+8h] BYREF

	sub_140058890(a1, a2);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = *(_DWORD*)(v6 - 8);
	if (v7 != 3 && (v7 != 4 || !sub_14005AC80((char*)(*(_QWORD*)(v6 - 16) + 32i64), (unsigned __int64*)&v15)))
	{
		*(_QWORD*)(a1 + 16) -= 16i64;
		return 0;
	}
	v9 = *(_QWORD*)(a1 + 16);
	v10 = *(_DWORD*)(v9 - 8);
	v11 = (__int64*)(v9 - 16);
	if (v10 != 3)
	{
		if (v10 != 4 || !sub_14005AC80((char*)(*v11 + 32), (unsigned __int64*)&v15))
		{
			v12 = 0.0;
			goto LABEL_10;
		}
		v14 = 3;
		v11 = &v13;
		v13 = v15;
	}
	v12 = *(double*)v11;
LABEL_10:
	result = 1;
	*a4 = v12;
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}

