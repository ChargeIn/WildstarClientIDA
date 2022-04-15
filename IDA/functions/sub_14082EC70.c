#include "../winhttp.h"

//----- (000000014082EC70) ----------------------------------------------------
void __fastcall sub_14082EC70(__int64 a1, __int64 a2, __int64* a3, unsigned __int8 a4, int a5)
{
	_QWORD* v5; // rbx
	_QWORD* v6; // r14
	__int64 v11; // rsi
	int v12; // eax
	_QWORD* v13; // rax
	_QWORD* v14; // [rsp+30h] [rbp-48h]

	v5 = *(_QWORD**)(a1 + 144);
	v6 = 0i64;
	while (v5)
	{
		v11 = v5[2];
		if ((!a2 || a2 == *(_QWORD*)(v11 + 72))
			&& (!a5 || a5 == *(_DWORD*)(v11 + 56))
			&& !sub_14082BFE0(a1, *(_QWORD*)(v11 + 8), a3))
		{
			if (a4 || (v12 = *(_DWORD*)(v11 + 64)) == 0)
			{
				sub_14082FA40(a1, v11);
				v13 = (_QWORD*)*v5;
				v14 = (_QWORD*)*v5;
				if (v5 == *(_QWORD**)(a1 + 144))
					*(_QWORD*)(a1 + 144) = v13;
				else
					*v6 = v13;
				if (v5 == *(_QWORD**)(a1 + 152))
					*(_QWORD*)(a1 + 152) = v6;
				*v5 = *(_QWORD*)(a1 + 160);
				--* (_DWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 160) = v5;
				v5 = v14;
				continue;
			}
			*(_DWORD*)(v11 + 64) = v12 - 1;
		}
		v6 = v5;
		v5 = (_QWORD*)*v5;
	}
	sub_14082EA00((__int64)qword_140C61B68, a2, a3, a4, a5);
}

