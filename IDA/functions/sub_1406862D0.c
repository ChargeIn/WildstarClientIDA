//----- (00000001406862D0) ----------------------------------------------------
__int64 __fastcall sub_1406862D0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	float v10; // xmm0_4
	char v11; // r8
	__int64 v12; // rcx
	__int64 result; // rax
	__int64 v14; // [rsp+38h] [rbp+10h]

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v2 = sub_140056AB0(a1, 1u);
		if (v2)
		{
			v3 = *(_QWORD*)(v2 + 8);
			if (v3)
			{
				v4 = *(unsigned int**)(v3 + 8);
				if (v4)
				{
					v5 = *v4;
					v6 = *(_QWORD*)(qword_140C65948 + 48);
					v7 = v6;
					v8 = *(_QWORD*)(v6 + 8);
					while (v8)
					{
						if (*(_DWORD*)(v8 + 32) < v5)
						{
							v8 = *(_QWORD*)(v8 + 24);
						}
						else
						{
							v7 = v8;
							v8 = *(_QWORD*)(v8 + 16);
						}
					}
					if (v7 == v6 || (v14 = v7, v5 < *(_DWORD*)(v7 + 32)))
						v14 = *(_QWORD*)(qword_140C65948 + 48);
					if (v14 != v6)
					{
						v9 = *(_QWORD*)(v14 + 40);
						if (v9)
						{
							v10 = 0.0;
							if (*(_DWORD*)(v9 + 48))
							{
								v11 = 2;
							}
							else
							{
								if (!*(_DWORD*)(v9 + 52))
								{
								LABEL_20:
									v12 = a1[2];
									result = 1i64;
									*(_DWORD*)(v12 + 8) = 3;
									*(double*)v12 = v10;
									a1[2] += 16i64;
									return result;
								}
								v11 = 4;
							}
							LODWORD(v10) = sub_14048DD20(v9, v5, v11);
							goto LABEL_20;
						}
					}
				}
			}
		}
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

