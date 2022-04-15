#include "../winhttp.h"

//----- (0000000140634390) ----------------------------------------------------
void __fastcall sub_140634390(__int64 a1)
{
	int v2; // eax
	_QWORD* v3; // rdx
	_QWORD* v4; // rbx
	int v5; // esi
	int* v6; // rdx
	__int64 v7; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	int v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v12)(); // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]
	int v14; // [rsp+50h] [rbp+8h] BYREF

	v2 = sub_14018CDF0();
	v3 = *(_QWORD**)(a1 + 31424);
	v4 = (_QWORD*)v3[2];
	v5 = v2;
	if (v4 != v3)
	{
		do
		{
			v6 = (int*)v4[5];
			if ((unsigned int)(v5 - v6[1]) >= 0xDBBA0)
			{
				v14 = 0;
				v14 = *v6;
				sub_1403F4900(a1, 0x81Du, (__int64)&v14);
			}
			v7 = v4[3];
			if (v7)
			{
				v4 = (_QWORD*)v4[3];
				for (i = *(_QWORD**)(v7 + 16); i; i = (_QWORD*)i[2])
					v4 = i;
			}
			else
			{
				for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = (_QWORD*)j;
				if (v4[3] != j)
					v4 = (_QWORD*)j;
			}
		} while (v4 != *(_QWORD**)(a1 + 31424));
	}
	v10 = 0;
	v11 = sub_14001C280(a1);
	v13 = 0i64;
	v12 = sub_140634390;
	sub_140195960(a1 + 31448, 600000, (__int64)&v10, 4);
}

