#include "../winhttp.h"

//----- (0000000140692D20) ----------------------------------------------------
__int64 __fastcall sub_140692D20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	char* v5; // rax
	int* v6; // rax
	__int64 v7; // rbx
	int v8; // ecx
	__int64 v10; // [rsp+20h] [rbp-48h] BYREF
	__int64 v11; // [rsp+28h] [rbp-40h]
	__int64 v12; // [rsp+30h] [rbp-38h]
	__int64 v13; // [rsp+38h] [rbp-30h] BYREF
	__int64 v14; // [rsp+40h] [rbp-28h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
			if (v4)
			{
				v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
				sub_14018F2D0(&v13, v5);
				v10 = 0i64;
				v11 = 0i64;
				v12 = 0i64;
				v11 = *(_QWORD*)(v4 + 16);
				v6 = *(int**)(v4 + 8);
				v7 = v14;
				v8 = *v6;
				v12 = v14;
				LODWORD(v10) = v8;
				sub_1403F4740(qword_140C65898, 0x1D0u, (__int64)&v10);
				if (v7)
					sub_14018B900(v7, 0);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

