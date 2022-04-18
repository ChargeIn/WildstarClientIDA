#include "../winhttp.h"

//----- (00000001405DF990) ----------------------------------------------------
void __fastcall sub_1405DF990(__int64 a1, int a2, int a3, __int64 a4)
{
	unsigned __int64 v7; // rdi
	_QWORD* v8; // rbx
	__int64* v9; // rbx
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // [rsp+30h] [rbp-38h] BYREF
	__int64 v13; // [rsp+38h] [rbp-30h]
	__int64 v14; // [rsp+40h] [rbp-28h]
	int v15; // [rsp+78h] [rbp+10h] BYREF

	v15 = a2;
	v7 = (*(__int64(__fastcall**)(int*))(a1 + 384))(&v15);
	v8 = *(_QWORD**)(*(_QWORD*)(a1 + 376) + 8 * (v7 % *(_QWORD*)(a1 + 368)));
	if (v8)
	{
		while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 392))(&v15, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				return;
		}
		v9 = v8 + 3;
		if (v9)
		{
			v10 = *v9;
			if (a3)
			{
				if ((unsigned int)sub_1403E1170(*(_WORD**)(a4 + 8), 0x13u))
				{
					v12 = 0i64;
					v13 = 0i64;
					v14 = 0i64;
					v11 = *(_QWORD*)(v10 + 24);
					LODWORD(v13) = a3;
					v12 = v11;
					v14 = *(_QWORD*)(a4 + 8);
					sub_1400161D0(qword_140C635F0, 0x39Du, (__int64)&v12);
				}
				else
				{
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, 10);
				}
			}
		}
	}
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

