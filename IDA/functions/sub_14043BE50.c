#include "../winhttp.h"

//----- (000000014043BE50) ----------------------------------------------------
void __fastcall sub_14043BE50(__int64 a1, int a2)
{
	__int64 v2; // rax
	unsigned int v3; // ecx
	_DWORD* v4; // rax
	_DWORD* v5; // rbx
	__int64 v6; // rcx
	int* v7; // rax
	char v8[24]; // [rsp+20h] [rbp-68h] BYREF
	int* v9; // [rsp+38h] [rbp-50h]
	int* v10; // [rsp+40h] [rbp-48h]
	int* v11; // [rsp+48h] [rbp-40h]

	v2 = sub_14043CF90(a1, a2);
	if (v2)
	{
		v3 = *(_DWORD*)(v2 + 96);
		if (v3)
		{
			v4 = (_DWORD*)sub_1401F4FA0(v3);
			v5 = v4;
			if ((_DWORD)qword_140C7CD60)
			{
				if (v4 && !(unsigned int)sub_14043D3D0((__int64)dword_140C7CC70, v4))
				{
					if (v5[2])
					{
						sub_14043BD20(v6, (__int64)v5);
					}
					else
					{
						v7 = sub_14018B280(16i64, 0);
						v9 = v7;
						v10 = v7;
						v11 = v7 + 4;
						if (v7)
							*(_WORD*)v7 = 0;
						sub_14043CC10(v5, (__int64)v8);
						sub_14043BF30(dword_140C7CC70, (__int64)v8);
						if (v9)
							sub_14018B900((__int64)v9, 0);
					}
				}
			}
		}
	}
}
// 14043BEC0: variable 'v6' is possibly undefined
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CD60: using guessed type __int64 qword_140C7CD60;

