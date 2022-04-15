#include "../winhttp.h"

//----- (000000014054DDC0) ----------------------------------------------------
int* __fastcall sub_14054DDC0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r11
	__int64 v3; // r8
	int* v4; // rax
	unsigned int v5; // r10d
	unsigned int v6; // r9d
	unsigned int v7; // r8d
	__int64 v9[2]; // [rsp+20h] [rbp-38h] BYREF
	int v10; // [rsp+30h] [rbp-28h]
	int v11; // [rsp+34h] [rbp-24h]
	int v12; // [rsp+38h] [rbp-20h]
	int v13; // [rsp+3Ch] [rbp-1Ch]
	int v14; // [rsp+40h] [rbp-18h]
	int v15; // [rsp+44h] [rbp-14h]
	int* v16; // [rsp+60h] [rbp+8h] BYREF
	int* v17; // [rsp+70h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = (int*)v2;
	if (v3)
	{
		v5 = *a2;
		do
		{
			v6 = *(_DWORD*)(v3 + 32);
			if (v6 < v5 || v5 >= v6 && *(_DWORD*)(v3 + 36) < a2[1])
			{
				v3 = *(_QWORD*)(v3 + 24);
			}
			else
			{
				v4 = (int*)v3;
				v3 = *(_QWORD*)(v3 + 16);
			}
		} while (v3);
	}
	if (v4 == (int*)v2 || (v7 = v4[8], *a2 < v7) || v7 >= *a2 && a2[1] < v4[9])
	{
		v9[0] = *(_QWORD*)a2;
		v9[1] = v9[0];
		v16 = v4;
		LOBYTE(v10) = v9[0];
		v11 = HIDWORD(v9[0]);
		v13 = HIDWORD(v9[0]);
		v15 = HIDWORD(v9[0]);
		v12 = v10;
		v14 = v10;
		sub_14054E0E0(a1, &v17, (__int64*)&v16, (unsigned int*)v9);
		v4 = v17;
	}
	return v4 + 10;
}

