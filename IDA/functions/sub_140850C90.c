//----- (0000000140850C90) ----------------------------------------------------
__int64 __fastcall sub_140850C90(_QWORD* a1, __int64 a2, _BYTE* a3)
{
	__int64 v3; // rdi
	int v5; // r10d
	int v6; // r9d
	int v7; // r8d
	__int64 v8; // rdx
	float v9; // xmm0_4
	bool v10; // al
	bool v11; // cf
	bool v12; // zf

	v3 = 0i64;
	v5 = 0;
	v6 = ((__int64)(a1[1] - *a1) >> 3) - 1;
	if (v6 >= 0)
	{
		do
		{
			v7 = v5 + (v6 - v5) / 2;
			v8 = *(_QWORD*)(*a1 + 8i64 * v7);
			v9 = *(float*)(v8 + 388);
			if (*(float*)&a2 == v9)
				v10 = HIDWORD(a2) < *(_DWORD*)(v8 + 392);
			else
				v10 = *(float*)&a2 > v9;
			if (v10)
			{
				v6 = v7 - 1;
			}
			else
			{
				if (*(float*)&a2 == v9)
				{
					v11 = HIDWORD(a2) < *(_DWORD*)(v8 + 392);
					v12 = HIDWORD(a2) == *(_DWORD*)(v8 + 392);
				}
				else
				{
					v11 = v9 < *(float*)&a2;
					v12 = v9 == *(float*)&a2;
				}
				if (v11 || v12)
				{
					*a3 = 1;
					return *a1 + 8i64 * v7;
				}
				v5 = v7 + 1;
			}
		} while (v5 <= v6);
	}
	*a3 = 0;
	if (*a1)
		return *a1 + 8i64 * v5;
	return v3;
}

