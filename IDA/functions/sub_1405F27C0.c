#include "../winhttp.h"

//----- (00000001405F27C0) ----------------------------------------------------
__int64 __fastcall sub_1405F27C0(__int64 a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	unsigned int v4; // esi
	__int64 v5; // rbx
	int v6; // eax
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // rcx
	int v11[48]; // [rsp+20h] [rbp-79h] BYREF

	v2 = sub_1405F8340((_QWORD*)a1);
	v3 = *(_QWORD*)(qword_140C65920 + 8);
	v4 = v2;
	if (v3)
	{
		do
		{
			v5 = *(_QWORD*)(v3 + 32);
			if (*(_DWORD*)(v3 + 56) == 3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			v3 = v5;
		} while (v5);
	}
	v6 = dword_140C636A8;
	*(_QWORD*)(a1 + 468) = 0i64;
	*(_DWORD*)(a1 + 184) = 0;
	v11[1] = v6;
	v11[3] = v6;
	v11[5] = v6;
	v11[7] = v6;
	v11[9] = v6;
	v11[11] = v6;
	v11[13] = v6;
	v11[15] = v6;
	v11[17] = v6;
	v11[19] = v6;
	v11[21] = v6;
	v11[23] = v6;
	v11[25] = v6;
	v11[27] = v6;
	v11[29] = v6;
	v11[31] = v6;
	v11[33] = v6;
	v11[35] = v6;
	v11[37] = v6;
	v11[39] = v6;
	v11[41] = v6;
	v11[43] = v6;
	v11[45] = v6;
	v11[47] = v6;
	v11[0] = 0;
	v11[2] = 0;
	v11[4] = 0;
	v11[6] = 0;
	v11[8] = 0;
	v11[10] = 0;
	v11[12] = 0;
	v11[14] = 0;
	v11[16] = 0;
	v11[18] = 0;
	v11[20] = 0;
	v11[22] = 0;
	v11[24] = 0;
	v11[26] = 0;
	v11[28] = 0;
	v11[30] = 0;
	v11[32] = 0;
	v11[34] = 0;
	v11[36] = 0;
	v11[38] = 0;
	v11[40] = 0;
	v11[42] = 0;
	v11[44] = 0;
	v11[46] = 0;
	sub_1405F2950((_DWORD*)(a1 + 236), v11);
	v7 = qword_140C65898;
	*(_QWORD*)(a1 + 440) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_DWORD*)(v7 + 28568) = 1;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	sub_1405F62C0(v9, v8);
	sub_140008410(a1 + 200);
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	return v4;
}
// 1405F28FB: variable 'v9' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

