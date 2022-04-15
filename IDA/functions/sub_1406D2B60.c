//----- (00000001406D2B60) ----------------------------------------------------
unsigned __int64 __fastcall sub_1406D2B60(__int64 a1)
{
	int v1; // edx
	__int64 v2; // r8
	int v3; // edx
	int v4; // edx
	unsigned __int64 v5; // r8
	__int64 v6; // rdx
	unsigned __int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v10; // [rsp+28h] [rbp-10h]

	v1 = *(_DWORD*)(a1 + 1100);
	v2 = qword_140C65898 + 160;
	v10 = 0i64;
	v9 = 0i64;
	if (v1)
	{
		v3 = v1 - 1;
		if (v3)
		{
			v4 = v3 - 1;
			if (!v4)
			{
				v2 = qword_140C65898 + 208;
				goto LABEL_8;
			}
			if (v4 == 8)
			{
				v2 = qword_140C65898 + 232;
				goto LABEL_8;
			}
		}
		v2 = qword_140C65898 + 184;
	}
LABEL_8:
	sub_1403D6710(v2, &v9);
	v5 = v10;
	v6 = v9;
	for (result = 0i64; result < v5; ++result)
	{
		v8 = *(_QWORD*)(v6 + 8 * result);
		if (*(_DWORD*)(v8 + 140))
			*(_DWORD*)(v8 + 140) = 0;
	}
	if (v6)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

