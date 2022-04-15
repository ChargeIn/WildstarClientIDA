#include "../winhttp.h"

//----- (00000001400C3930) ----------------------------------------------------
int* __fastcall sub_1400C3930(_QWORD** a1, int* a2)
{
	int* v2; // rbx
	int* v3; // r10
	_QWORD** v4; // r9
	int v5; // r11d
	__int64 v6; // rdi
	int v7; // ecx
	bool v8; // cc
	int* v9; // rax
	int v10; // ecx
	int* v11; // rax
	int v13; // [rsp+48h] [rbp+10h] BYREF
	int v14; // [rsp+50h] [rbp+18h] BYREF
	int v15; // [rsp+54h] [rbp+1Ch]
	int v16; // [rsp+58h] [rbp+20h] BYREF
	int v17; // [rsp+5Ch] [rbp+24h]

	v2 = a2 + 1;
	v3 = a2;
	a2[1] = 0;
	v4 = a1;
	*a2 = 0;
	v5 = 0;
	v6 = 6i64;
	do
	{
		if (*v4)
		{
			sub_140101470(*v4, &v14);
			v7 = v14;
		}
		else
		{
			v7 = 0;
			v15 = 0;
			v14 = 0;
		}
		v8 = *v3 < v7;
		v13 = v7;
		v9 = &v13;
		if (!v8)
			v9 = v3;
		*v3 = *v9;
		if (*v4)
		{
			sub_140101470(*v4, &v16);
			v10 = v17;
		}
		else
		{
			v10 = 0;
			v16 = 0;
			v17 = 0;
		}
		v11 = &v13;
		v13 = v10;
		if (v5 >= v10)
			v11 = v2;
		v4 += 6;
		v5 = *v11;
		*v2 = *v11;
		--v6;
	} while (v6);
	return v3;
}
// 1400C3972: variable 'v3' is possibly undefined
// 1400C3987: variable 'v4' is possibly undefined
// 1400C39B5: variable 'v5' is possibly undefined

