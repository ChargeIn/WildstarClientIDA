#include "../winhttp.h"

//----- (00000001404B8870) ----------------------------------------------------
void __fastcall sub_1404B8870(__int64 a1, int a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ecx
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9[4]; // [rsp+20h] [rbp-98h] BYREF
	int v10; // [rsp+40h] [rbp-78h] BYREF
	__int64 v11; // [rsp+48h] [rbp-70h]
	int v12[26]; // [rsp+50h] [rbp-68h] BYREF
	__int64 v13; // [rsp+C0h] [rbp+8h] BYREF

	v13 = a1;
	v3 = sub_1405B1510(&qword_140C7DFB0);
	v4 = v3;
	if (v3)
	{
		v5 = *(_QWORD*)(v3 + 232);
		if (!v5 || !*(_DWORD*)(v4 + 272))
			v5 = 0i64;
		v6 = *(_DWORD*)(v5 + 184);
		if ((v6 & 0xFFFFFFFA) == 0 && v6 != 4)
		{
			v7 = qword_140C4DF28;
			if (qword_140C4DF28)
			{
				*(_DWORD*)(qword_140C4DF28 + 100) = (unsigned __int16)*(_DWORD*)(qword_140C4DF28 + 100);
				*(_DWORD*)(v7 + 100) |= a2 << 16;
				v10 = 0;
				v11 = 0i64;
				sub_1407E4830(v12, 0i64, 0x58ui64);
				v9[0] = 0x100000001i64;
				v12[2] = 8;
				sub_1404B89A0(v8, (__int64)&v10, v7, (_QWORD*)(v4 + 8));
				v9[1] = (__int64)&v10;
				LODWORD(v13) = 0;
				v9[2] = (__int64)&v13;
				sub_1403F4900(qword_140C65898, 0x50Bu, (__int64)v9);
			}
		}
	}
}
// 1404B8941: variable 'v8' is possibly undefined
// 140C4DF28: using guessed type __int64 qword_140C4DF28;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

