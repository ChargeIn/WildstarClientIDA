#include "../winhttp.h"

//----- (0000000140608D00) ----------------------------------------------------
__int64 __fastcall sub_140608D00(_DWORD* a1)
{
	bool v1; // zf
	BOOL v2; // eax
	BOOL v3; // eax
	BOOL v4; // eax
	BOOL v5; // eax
	BOOL v6; // eax
	BOOL v7; // eax
	BOOL v8; // eax
	BOOL v9; // eax
	BOOL v10; // eax

	v1 = a1[41] == 0;
	a1[40] = a1[40] == 0;
	v2 = v1;
	v1 = a1[42] == 0;
	a1[41] = v2;
	v3 = v1;
	v1 = a1[43] == 0;
	a1[42] = v3;
	v4 = v1;
	v1 = a1[44] == 0;
	a1[43] = v4;
	v5 = v1;
	v1 = a1[45] == 0;
	a1[44] = v5;
	v6 = v1;
	v1 = a1[46] == 0;
	a1[45] = v6;
	v7 = v1;
	v1 = a1[47] == 0;
	a1[46] = v7;
	v8 = v1;
	v1 = a1[48] == 0;
	a1[47] = v8;
	v9 = v1;
	v1 = a1[49] == 0;
	a1[48] = v9;
	v10 = v1;
	v1 = a1[50] == 0;
	a1[49] = v10;
	a1[50] = v1;
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "QuestCalloutToggle", &unk_1409D0B5B);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

