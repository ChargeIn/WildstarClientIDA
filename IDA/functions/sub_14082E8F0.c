#include "../winhttp.h"

//----- (000000014082E8F0) ----------------------------------------------------
void __fastcall sub_14082E8F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
	_QWORD* v5; // rsi
	__int64 v8; // rbp
	__int64 v9; // r14
	__int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rdx
	__int64 v13; // rcx

	v5 = *(_QWORD**)(a1 + 96);
	while (v5)
	{
		v8 = v5[2];
		v9 = *(_QWORD*)(v8 + 8);
		v10 = sub_140855940(v9);
		v11 = v10;
		if (!a2)
			goto LABEL_14;
		if (v10)
		{
			if (a2 == v10)
				goto LABEL_14;
			v12 = *(_QWORD*)(v10 + 64);
			v13 = *(_QWORD*)(v10 + 72);
			if (v12)
			{
				while (a2 != v12)
				{
					if (!v13)
						v13 = *(_QWORD*)(v12 + 72);
					v12 = *(_QWORD*)(v12 + 64);
					if (!v12)
						goto LABEL_10;
				}
				goto LABEL_14;
			}
		LABEL_10:
			if (v13)
			{
				while (a2 != v13)
				{
					v13 = *(_QWORD*)(v13 + 72);
					if (!v13)
						goto LABEL_20;
				}
			LABEL_14:
				if ((!a3 || a3 == *(_QWORD*)(v8 + 72)) && (!a5 || a5 == *(_DWORD*)(v8 + 56)) && *(_WORD*)(v9 + 60) == 1283)
					sub_1408570F0(v9);
			}
		}
	LABEL_20:
		v5 = (_QWORD*)*v5;
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
	}
}

