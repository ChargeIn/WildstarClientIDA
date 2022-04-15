#include "../winhttp.h"

//----- (00000001403BF2C0) ----------------------------------------------------
void __fastcall sub_1403BF2C0(__int64* a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v5; // rbp
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // r8
	unsigned int v10; // edx
	__int64 v11; // rax
	__int64 v12; // [rsp+38h] [rbp+10h]

	if (a2)
	{
		v2 = a1[15];
		if (v2)
		{
			v5 = sub_1403ACD90(qword_140C65B70, a2, v2);
			if (v5)
			{
				v6 = a1[689];
				v7 = v6;
				v8 = *(_QWORD*)(v6 + 8);
				while (v8)
				{
					if (*(_DWORD*)(v8 + 32) < a2)
					{
						v8 = *(_QWORD*)(v8 + 24);
					}
					else
					{
						v7 = v8;
						v8 = *(_QWORD*)(v8 + 16);
					}
				}
				if (v7 == v6 || (v12 = v7, a2 < *(_DWORD*)(v7 + 32)))
					v12 = a1[689];
				if (v12 != v6)
				{
					v9 = *(_QWORD*)(v12 + 40);
					*(_DWORD*)(v9 + 8) = 1;
					switch (*(_DWORD*)(*(_QWORD*)(v5 + 112) + 24i64))
					{
					case 2:
						v11 = sub_140469B00(v2, a2, *(_DWORD*)(v2 + 8));
						sub_14046B1E0(v2, v5, v11);
						sub_1403BDAC0((__int64)a1);
						sub_1403BDB30((__int64)a1, a2);
						break;
					case 6:
						v10 = *(_DWORD*)(v9 + 20);
						if (v10)
							v5 = sub_1403ACD90(qword_140C65B70, v10, v2);
						sub_14046B1E0(v2, v5, 0i64);
						break;
					case 7:
						return;
					}
					sub_1403BF4E0(a1, a2, 0);
				}
			}
		}
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

