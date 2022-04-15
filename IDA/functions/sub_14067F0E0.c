#include "../winhttp.h"

//----- (000000014067F0E0) ----------------------------------------------------
__int64 __fastcall sub_14067F0E0(_QWORD* a1)
{
	__int64** v2; // rax
	__int64** v3; // rdi
	_QWORD* v4; // rsi
	_DWORD* v5; // rcx
	unsigned int v6; // eax
	__int64 v7; // rax
	_DWORD* v8; // rax
	int v10; // eax
	_DWORD* v11; // rcx
	_DWORD* v12; // rax

	v2 = (__int64**)sub_14067B760(a1);
	v3 = v2;
	if (v2 && *(_DWORD*)(*v2[6] + 12) == 13 && ((int(__fastcall*)(__int64**))(*v2)[26])(v2) >= 3)
	{
		v4 = (_QWORD*)sub_140721F50(*v3[6], *(_DWORD*)(*v3[6] + 20));
		if (v4)
		{
			v6 = sub_1400584E0((__int64)a1, 2);
			if (v6 < (unsigned int)((__int64)(v4[4] - v4[3]) >> 3) && (v7 = sub_1407209F0(v4, v6)) != 0)
			{
				v10 = ((__int64(__fastcall*)(__int64**, _QWORD))(*v3)[10])(v3, *(unsigned int*)(v7 + 8));
				v11 = (_DWORD*)a1[2];
				*v11 = v10 != 0;
				v11[2] = 1;
			}
			else
			{
				v8 = (_DWORD*)a1[2];
				*v8 = 0;
				v8[2] = 1;
			}
		}
		else
		{
			v5 = (_DWORD*)a1[2];
			*v5 = 0;
			v5[2] = 1;
		}
	}
	else
	{
		v12 = (_DWORD*)a1[2];
		*v12 = 0;
		v12[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

