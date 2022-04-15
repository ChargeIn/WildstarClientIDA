#include "../winhttp.h"

//----- (0000000140415D60) ----------------------------------------------------
__int64 __fastcall sub_140415D60(_QWORD* a1, void(__fastcall*** a2)(_QWORD))
{
	_QWORD* v5; // r14
	int* v6; // rax
	_QWORD* v7; // rbx
	void(__fastcall * **v8)(_QWORD); // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]

	if (a2)
	{
		v5 = (_QWORD*)sub_140059170(a1, 8ui64);
		v6 = sub_14018B280(1216i64, 8u);
		if (v6)
			v7 = (_QWORD*)sub_14040FAE0((__int64)v6);
		else
			v7 = 0i64;
		*v5 = v7;
		v8 = (void(__fastcall***)(_QWORD)) * v7;
		if (a2 != (void(__fastcall***)(_QWORD)) * v7)
		{
			if (v8)
			{
				(*v8)[1](v8);
				*v7 = 0i64;
			}
			*v7 = a2;
			(**a2)(a2);
		}
		*(_QWORD*)((char*)v7 + 1204) = 0i64;
		sub_140412AD0((__int64)v7);
		v9 = a1[4];
		v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.ItemData", 0xDui64);
		v11 = a1[2];
		v12 = v10;
		v13 = 4;
		sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v12, v11);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

