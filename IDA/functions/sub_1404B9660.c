#include "../winhttp.h"

//----- (00000001404B9660) ----------------------------------------------------
__int64 __fastcall sub_1404B9660(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	__int64 result; // rax
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8[4]; // [rsp+20h] [rbp-98h] BYREF
	int v9; // [rsp+40h] [rbp-78h] BYREF
	__int64 v10; // [rsp+48h] [rbp-70h]
	int v11[26]; // [rsp+50h] [rbp-68h] BYREF
	__int64 v12; // [rsp+C0h] [rbp+8h] BYREF
	unsigned int v13; // [rsp+C8h] [rbp+10h]

	v13 = a2;
	v12 = a1;
	v2 = qword_140C659F0;
	result = sub_1405B1510(&qword_140C7DFB0);
	v4 = result;
	if (result)
	{
		v5 = *(_QWORD*)(result + 232);
		if (!v5 || !*(_DWORD*)(result + 272))
			v5 = 0i64;
		result = *(unsigned int*)(v5 + 184);
		if ((result & 0xFFFFFFFA) == 0 && (_DWORD)result != 4)
		{
			result = sub_1404C9B90(v5, v13);
			v6 = result;
			if (result)
			{
				if ((unsigned int)(*(_DWORD*)(result + 128) - 1) > 2)
				{
					v9 = 0;
					v10 = 0i64;
					sub_1407E4830(v11, 0i64, 0x58ui64);
					v8[0] = 0x100000002i64;
					sub_1404B89A0(v7, (__int64)&v9, v6, (_QWORD*)(v4 + 8));
					v8[1] = (__int64)&v9;
					LODWORD(v12) = 0;
					v8[2] = (__int64)&v12;
					sub_1403F4900(qword_140C65898, 0x50Bu, (__int64)v8);
					return (__int64)sub_1404B8440(v2, *(_DWORD*)(v6 + 496), 0);
				}
			}
		}
	}
	return result;
}
// 1404B973D: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 1404B9660: using guessed type int var_68[26];

