#include "../winhttp.h"

//----- (00000001404B77D0) ----------------------------------------------------
void __fastcall sub_1404B77D0(
	__int64 a1,
	unsigned int a2,
	unsigned int a3,
	unsigned int a4,
	unsigned int a5,
	unsigned int a6,
	unsigned int a7,
	int a8)
{
	__int64 v11; // rax
	__int64 v12; // r10
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // rax
	__int64 v16; // [rsp+20h] [rbp-38h] BYREF
	__int64 v17; // [rsp+28h] [rbp-30h]
	unsigned __int64 v18; // [rsp+30h] [rbp-28h]
	unsigned __int64 v19; // [rsp+38h] [rbp-20h]
	unsigned __int64 v20; // [rsp+40h] [rbp-18h]
	__int64 v21; // [rsp+48h] [rbp-10h]

	v11 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	v12 = v11;
	if (v11)
	{
		v13 = *(_QWORD*)(v11 + 232);
		if (!v13 || !*(_DWORD*)(v11 + 272))
			v13 = 0i64;
		v14 = *(_DWORD*)(v13 + 184);
		if ((v14 & 0xFFFFFFFA) == 0 && v14 != 4)
		{
			v21 = 0x100000000i64;
			v18 = 0i64;
			v19 = 0i64;
			v20 = 0i64;
			v16 = 0i64;
			v17 = 0i64;
			v16 = *(_QWORD*)(v12 + 8);
			v15 = *(_QWORD*)(v12 + 16);
			v18 = __PAIR64__(a2, a3);
			v17 = v15;
			v19 = __PAIR64__(a5, a4);
			v20 = __PAIR64__(a7, a6);
			LODWORD(v21) = a8;
			sub_1403F4900(qword_140C65898, 0x50Au, (__int64)&v16);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

