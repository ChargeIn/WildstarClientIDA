//----- (00000001406B4CF0) ----------------------------------------------------
__int64 sub_1406B4CF0()
{
	unsigned int v0; // ebx
	__int64 v1; // rax
	__int64 v2; // r9
	__m128* v3; // rdi
	__int64 v4; // rax
	int v5; // xmm2_4

	v0 = 0;
	v1 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(qword_140C65898 + 27592));
	v3 = (__m128*)v1;
	if (v1 && *(_DWORD*)(v1 + 128) == 12)
	{
		if ((dword_140DC4B90 & 1) != 0)
		{
			v5 = dword_140DC4B94;
		}
		else
		{
			dword_140DC4B90 |= 1u;
			v4 = sub_140200220(0xEDu);
			if (v4)
			{
				v5 = *(_DWORD*)(v4 + 24);
				dword_140DC4B94 = v5;
			}
			else
			{
				v5 = 1112014848;
				dword_140DC4B94 = 1112014848;
			}
		}
		if (sub_14062B670(*(__m128**)(qword_140C65898 + 120), v3, *(float*)&v5, v2, 0i64))
			return 1;
	}
	return v0;
}
// 1406B4D7D: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4B90: using guessed type int dword_140DC4B90;
// 140DC4B94: using guessed type int dword_140DC4B94;

