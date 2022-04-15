#include "../winhttp.h"

//----- (00000001400B61B0) ----------------------------------------------------
void __fastcall sub_1400B61B0(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbp
	__int64 v3; // rax
	_QWORD* v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rsi
	_QWORD* v9; // [rsp+48h] [rbp+10h]

	if (a2)
	{
		v2 = a2;
		v3 = a1;
		do
		{
			sub_1400B61B0(v3, v2[3]);
			v4 = (_QWORD*)v2[2];
			v9 = v4;
			if (v2[7])
			{
				v5 = *(_QWORD*)(v2[6] + 8i64);
				if (v5)
				{
					do
					{
						sub_14001A270((__int64)(v2 + 5), *(_QWORD**)(v5 + 24));
						v6 = *(_QWORD*)(v5 + 40);
						v7 = *(_QWORD*)(v5 + 16);
						if (v6)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
						sub_14018B900(v5, 0);
						v5 = v7;
					} while (v7);
					v4 = v9;
				}
				*(_QWORD*)(v2[6] + 16i64) = v2[6];
				*(_QWORD*)(v2[6] + 8i64) = 0i64;
				*(_QWORD*)(v2[6] + 24i64) = v2[6];
				v2[7] = 0i64;
			}
			sub_14018B900(v2[6], 0);
			sub_14018B900((__int64)v2, 0);
			v3 = a1;
			v2 = v4;
		} while (v4);
	}
}

