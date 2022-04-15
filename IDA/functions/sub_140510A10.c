#include "../winhttp.h"

//----- (0000000140510A10) ----------------------------------------------------
__int64 __fastcall sub_140510A10(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
	void* v6; // rax
	__int64 v7; // rax
	int v8; // ecx
	__int64* v9; // rax
	int v10; // eax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]
	__int64 v14; // [rsp+50h] [rbp+18h] BYREF

	v14 = a3;
	sub_140058710(a1, (unsigned __int64*)"fontSize", 8ui64);
	v6 = sub_1400580E0(a1, -2);
	sub_14005E8E0(a1, (__int64)v6, (int*)(*(_QWORD*)(a1 + 16) - 16i64), *(_QWORD*)(a1 + 16) - 16i64);
	v7 = *(_QWORD*)(a1 + 16);
	v8 = *(_DWORD*)(v7 - 8);
	v9 = (__int64*)(v7 - 16);
	if (v8 != 3)
	{
		if (v8 != 4 || !sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v14))
		{
			v10 = 0;
			goto LABEL_6;
		}
		v13 = 3;
		v9 = &v12;
		v12 = v14;
	}
	v10 = (int)*(double*)v9;
LABEL_6:
	*a4 = v10;
	*(_QWORD*)(a1 + 16) -= 16i64;
	return (unsigned int)*a4;
}

