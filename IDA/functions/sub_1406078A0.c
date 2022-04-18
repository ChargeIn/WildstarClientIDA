#include "../winhttp.h"

//----- (00000001406078A0) ----------------------------------------------------
void __fastcall sub_1406078A0(int* a1)
{
	int v1; // eax
	int v3; // eax
	__int16* v4; // rax
	__int64 v5; // rcx
	__int16* v6; // rax
	__int64 v7; // rcx
	int v8; // edx
	int v9; // [rsp+20h] [rbp-28h] BYREF
	int* v10; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v11)(); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	v1 = a1[22];
	if (v1 > 0)
	{
		v3 = v1 - a1[23];
		a1[22] = v3;
		if (v3 > 0)
		{
			v6 = sub_14034BDD0((__int64)a1, a1[1]);
			if (v6 && *v6)
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "CountdownTick", L"S", v6);
			else
				sub_140607990(v7, a1[22] / 1000);
			v8 = a1[23];
			v9 = 0;
			v12 = 0i64;
			v10 = a1;
			v11 = sub_1406078A0;
			sub_140195960((__int64)(a1 + 4), v8, (__int64)&v9, 4);
		}
		else
		{
			v4 = sub_14034BDD0((__int64)a1, a1[2]);
			if (v4 && *v4)
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "CountdownTick", L"S", v4);
			else
				sub_140607990(v5, 0);
		}
	}
}
// 140607901: variable 'v5' is possibly undefined
// 140607951: variable 'v7' is possibly undefined
// 1409EED2C: using guessed type wchar_t aS_56[2];
// 140C65898: using guessed type __int64 qword_140C65898;

