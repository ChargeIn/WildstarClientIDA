#include "../winhttp.h"

//----- (00000001401DD2B0) ----------------------------------------------------
int* __fastcall sub_1401DD2B0(unsigned int* a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	int v6; // eax
	int* v7; // rax
	unsigned int v9; // ecx
	__int64 v10; // rax
	__int64 v11; // rcx
	int* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rcx
	bool v15; // zf
	int* v16; // rax
	unsigned int v17; // [rsp+40h] [rbp+18h] BYREF
	unsigned int v18; // [rsp+48h] [rbp+20h] BYREF

	v4 = sub_1401F53E0(a2);
	if (!v4)
		return (int*)&qword_140C784C0;
	v6 = *(_DWORD*)(v4 + 16);
	switch (v6)
	{
	case 1:
		v17 = 10;
	LABEL_4:
		v18 = a2;
		v7 = sub_1401DDD50(v5, (int*)&v17);
		return sub_1401DDF30((__int64)v7, (int*)&v18);
	case 2:
		v17 = 1;
		goto LABEL_4;
	case 3:
		v17 = 13;
		goto LABEL_4;
	}
	v9 = a1[3];
	if (v9)
	{
		v10 = sub_1401F5C60(v9);
		if (v10)
		{
			v17 = a2;
			v12 = sub_1401DDD50(v11, (int*)(v10 + 4));
			return sub_1401DDF30((__int64)v12, (int*)&v17);
		}
		return (int*)&qword_140C784C0;
	}
	v13 = sub_14022D500(a1[1]);
	if (!v13)
		return (int*)&qword_140C784C0;
	v15 = a1[2] == 1;
	v17 = a2;
	if (v15)
		v16 = sub_1401DDD50(v14, (int*)(v13 + 128));
	else
		v16 = sub_1401DDD50(v14, (int*)(v13 + 124));
	return sub_1401DDF30((__int64)v16, (int*)&v17);
}
// 1401DD2E8: variable 'v5' is possibly undefined
// 1401DD340: variable 'v11' is possibly undefined
// 1401DD37B: variable 'v14' is possibly undefined
// 140C784C0: using guessed type __int64 qword_140C784C0;

