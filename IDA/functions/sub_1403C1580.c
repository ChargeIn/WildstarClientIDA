//----- (00000001403C1580) ----------------------------------------------------
__int64 __fastcall sub_1403C1580(__int64 a1, int* a2)
{
	__int64 v2; // rbx
	unsigned int v5; // edx
	int* v6; // rcx
	unsigned int v7; // r8d
	int v8; // esi
	char v9[16]; // [rsp+20h] [rbp-48h] BYREF
	int v10; // [rsp+30h] [rbp-38h]
	int v11[8]; // [rsp+38h] [rbp-30h] BYREF

	v2 = qword_140C65898;
	if (a2)
	{
		v5 = 0;
		v6 = a2;
		do
		{
			if (*v6 >= 300 || (v7 = v6[1], v7 == -1) || !*v6 && v7 >= 0x1F)
			{
				sub_1403CC530(qword_140C65898, 0x88u);
				return 2147500037i64;
			}
			++v5;
			v6 += 2;
		} while (v5 < 4);
		v8 = sub_1403D3800(a2, 4u, qword_140C65898 + 160, (__int64)v9);
		if (v8 >= 0)
		{
			if (v10)
			{
				v11[0] = *a2;
				v11[1] = a2[1];
				v11[2] = a2[2];
				v11[3] = a2[3];
				v11[4] = a2[4];
				v11[5] = a2[5];
				v11[6] = a2[6];
				v11[7] = a2[7];
				sub_1403F4900(v2, 0x59Fu, (__int64)v11);
				*(_DWORD*)(qword_140C65898 + 28568) = 1;
				return 0i64;
			}
			else
			{
				sub_1403CC530(v2, 0x88u);
				return 2147500037i64;
			}
		}
		else
		{
			sub_1403CC530(v2, 1u);
			return (unsigned int)v8;
		}
	}
	else
	{
		sub_1403CC530(qword_140C65898, 1u);
		return 2147500037i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403C1580: using guessed type char var_48[16];

