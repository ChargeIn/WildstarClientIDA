//----- (000000014037AA70) ----------------------------------------------------
__int64 __fastcall sub_14037AA70(__int64 a1)
{
	bool v1; // zf
	__int64 result; // rax
	int i; // ebp
	int j; // ebx
	__int64 v6; // r10
	__int64 v7; // rdi
	float v8; // xmm5_4
	float v9; // xmm6_4
	unsigned int v10; // xmm4_4
	unsigned int v11; // xmm1_4
	int v12[4]; // [rsp+20h] [rbp-38h] BYREF

	v1 = *(_QWORD*)(a1 + 16) == 0i64;
	result = qword_140C79888;
	*(_QWORD*)(a1 + 80) = qword_140C79888;
	if (!v1)
	{
		for (i = *(_DWORD*)(a1 + 28); i < *(_DWORD*)(a1 + 36); ++i)
		{
			for (j = *(_DWORD*)(a1 + 24); j < *(_DWORD*)(a1 + 32); ++j)
			{
				v6 = *(_QWORD*)(a1 + 16);
				if (j >= *(_DWORD*)(v6 + 2188)
					&& j < *(_DWORD*)(v6 + 2196)
					&& i >= *(_DWORD*)(v6 + 2192)
					&& i < *(_DWORD*)(v6 + 2200))
				{
					result = *(_QWORD*)(v6 + 2272);
					v7 = *(_QWORD*)(result
						+ 8i64
						* (j % *(_DWORD*)(v6 + 2204)
							+ *(_DWORD*)(v6 + 2204)
							* (i % *(_DWORD*)(v6 + 2208) + *(_DWORD*)(v6 + 2208) * (i % *(_DWORD*)(v6 + 2208) < 0))
							+ *(_DWORD*)(v6 + 2204) * (unsigned int)(j % *(_DWORD*)(v6 + 2204) < 0)));
					if (v7)
					{
						v12[0] = 0;
						if (!*(_QWORD*)(v7 + 1448) || (result = sub_14037CC30(v7, (__int64)v12), (_DWORD)result))
						{
							v8 = *(float*)&dword_140C7AC84;
							v9 = *(float*)(v7 + 1076);
							if ((*(_BYTE*)(v7 + 1120) & 1) != 0)
							{
								v8 = fmaxf(*(float*)&dword_140C7AC84, *(float*)(v7 + 1188));
								v9 = fmaxf(v9, *(float*)(v7 + 1204));
							}
							*(float*)&v10 = fmaxf(*(float*)(a1 + 84), v9);
							*(float*)&v11 = fminf(*(float*)(a1 + 80), v8);
							result = __PAIR64__(v10, v11);
							*(_QWORD*)(a1 + 80) = __PAIR64__(v10, v11);
						}
					}
				}
			}
		}
	}
	return result;
}
// 140C79888: using guessed type __int64 qword_140C79888;
// 140C7AC84: using guessed type int dword_140C7AC84;
// 14037AA70: using guessed type int var_38[4];

