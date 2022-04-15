//----- (00000001403FEDF0) ----------------------------------------------------
__int64 __fastcall sub_1403FEDF0(__int64 a1, __int64 a2, float* a3)
{
	__int64 v4; // rdx
	__int64 v6; // r8
	char v8; // al
	__int64 v9; // r10
	float v10; // xmm2_4
	float v11; // xmm0_4
	float v12; // xmm0_4
	float v13; // xmm1_4
	float v14; // xmm0_4
	float v15; // xmm1_4
	__int64 v16; // rcx
	__int64 i; // rax
	__int64 v18; // rax
	float v19; // xmm0_4
	float v20; // xmm0_4
	float v21; // xmm1_4
	float v22; // xmm0_4
	float v23; // xmm1_4
	__int64 result; // rax
	int* v25; // rcx
	int* v26; // [rsp+40h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v4 + 8);
	v8 = 1;
	v9 = v4;
	if (v6)
	{
		v10 = *a3;
		do
		{
			v11 = *(float*)(v6 + 32);
			v9 = v6;
			if (v10 >= v11)
			{
				if (v10 != v11)
					goto LABEL_14;
				v12 = a3[1];
				v13 = *(float*)(v6 + 36);
				if (v12 >= v13)
				{
					if (v12 != v13)
						goto LABEL_14;
					v14 = a3[2];
					v15 = *(float*)(v6 + 40);
					if (v14 >= v15)
					{
						if (v14 != v15 || *(float*)(v6 + 44) <= a3[3])
						{
						LABEL_14:
							v8 = 0;
							goto LABEL_15;
						}
						v8 = 1;
					}
					else
					{
						v8 = 1;
					}
				}
				else
				{
					v8 = 1;
				}
			}
			else
			{
				v8 = 1;
			}
		LABEL_15:
			if (v8)
				v6 = *(_QWORD*)(v6 + 16);
			else
				v6 = *(_QWORD*)(v6 + 24);
		} while (v6);
	}
	v16 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v4 + 16))
			goto LABEL_38;
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v16 = *(_QWORD*)(v9 + 16);
			if (v16)
			{
				for (i = *(_QWORD*)(v16 + 24); i; i = *(_QWORD*)(i + 24))
					v16 = i;
			}
			else
			{
				v16 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v16 + 16))
				{
					do
					{
						v18 = v16;
						v16 = *(_QWORD*)(v16 + 8);
					} while (v18 == *(_QWORD*)(v16 + 16));
				}
			}
		}
		else
		{
			v16 = *(_QWORD*)(v9 + 24);
		}
	}
	v19 = *(float*)(v16 + 32);
	if (v19 >= *a3)
	{
		if (v19 != *a3
			|| (v20 = *(float*)(v16 + 36), v21 = a3[1], v20 >= v21)
			&& (v20 != v21
				|| (v22 = *(float*)(v16 + 40), v23 = a3[2], v22 >= v23) && (v22 != v23 || a3[3] <= *(float*)(v16 + 44))))
		{
			*(_QWORD*)a2 = v16;
			result = a2;
			*(_BYTE*)(a2 + 8) = 0;
			return result;
		}
	}
LABEL_38:
	v25 = *sub_1403FECE0(a1, &v26, v6, v9, (int*)a3);
	result = a2;
	*(_QWORD*)a2 = v25;
	*(_BYTE*)(a2 + 8) = 1;
	return result;
}

