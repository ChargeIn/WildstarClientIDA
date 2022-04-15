#include "../winhttp.h"

//----- (00000001408282B0) ----------------------------------------------------
__int64 __fastcall sub_1408282B0(int a1, __int64 a2, __int64 a3, int* a4, unsigned int a5, char a6)
{
	__int64 v8; // rbx
	int* v9; // rax
	unsigned int v10; // esi
	__int128 v11; // [rsp+20h] [rbp-88h]
	__int128 v12; // [rsp+30h] [rbp-78h]
	__int128 v13; // [rsp+40h] [rbp-68h]
	__int64 v14; // [rsp+50h] [rbp-58h]
	__int128 v15[3]; // [rsp+60h] [rbp-48h] BYREF
	__int64 v16; // [rsp+90h] [rbp-18h]

	if (!a5)
		return 31i64;
	DWORD2(v12) = 0;
	*(_QWORD*)&v12 = a3;
	*((_QWORD*)&v11 + 1) = a2;
	LODWORD(v13) = a5;
	LODWORD(v11) = (a1 != 0) + 2;
	if (a5 == 1)
	{
		DWORD2(v13) = *a4;
		v8 = *((_QWORD*)&v13 + 1);
	}
	else if (a6)
	{
		v9 = (int*)sub_1408819F0(dword_140C10F20, 4i64 * a5);
		v8 = (__int64)v9;
		*((_QWORD*)&v13 + 1) = v9;
		if (!v9)
			return 52i64;
		sub_1407DB590(v9, a4, 4i64 * a5);
	}
	else
	{
		v8 = (__int64)a4;
		*((_QWORD*)&v13 + 1) = a4;
	}
	v15[0] = v11;
	v15[1] = v12;
	v15[2] = v13;
	v16 = v14;
	v10 = sub_140841990((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, v15);
	if (v10 != 1 && a5 != 1)
		sub_140881720(dword_140C10F20, v8);
	return v10;
}
// 140828321: variable 'v13' is possibly undefined
// 140828387: variable 'v11' is possibly undefined
// 14082838C: variable 'v12' is possibly undefined
// 1408283A4: variable 'v14' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B58: using guessed type __int64 qword_140C61B58;

