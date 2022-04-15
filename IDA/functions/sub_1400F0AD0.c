#include "../winhttp.h"

//----- (00000001400F0AD0) ----------------------------------------------------
char __fastcall sub_1400F0AD0(__int64 a1, __int64 a2, unsigned __int16* a3, int* a4)
{
	__int64 v6; // rcx
	int v7; // edx
	__int64 v9; // rax
	int v10; // ecx
	__int64* v11; // rax
	int v12; // eax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+50h] [rbp+8h] BYREF

	sub_14018F0E0(&v13, a3);
	sub_140058890(a1, 3);
	if (v14)
		sub_14018B900(v14, 0);
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
			v12 = 0;
			goto LABEL_12;
		}
		LODWORD(v14) = 3;
		v11 = &v13;
		v13 = v15;
	}
	v12 = (int)*(double*)v11;
LABEL_12:
	*(_QWORD*)(a1 + 16) -= 16i64;
	*a4 = v12;
	return 1;
}

