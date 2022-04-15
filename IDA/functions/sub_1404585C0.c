//----- (00000001404585C0) ----------------------------------------------------
__m128 __fastcall sub_1404585C0(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // rbx
	__int64 v6; // rax
	__int64 v8; // rax
	__int128 v9; // xmm6
	unsigned int v10; // eax
	__int64 v11; // rbp
	__int64 v12; // rax
	float v13; // xmm0_4
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax

	v4 = a3;
	v6 = sub_1404825A0(a1, *(_DWORD*)a2, a3);
	if (v6)
	{
		return (__m128) * (unsigned int*)(v6 + 12);
	}
	else
	{
		v8 = sub_1402479C0(v4);
		if (v8)
		{
			v9 = *(unsigned int*)(v8 + 24);
			if ((*(_BYTE*)(v8 + 36) & 1) == 0)
			{
				v10 = *(_DWORD*)(a1 + 60);
				if (!v10)
					v10 = *(_DWORD*)(a1 + 56);
				v11 = (unsigned int)v4;
				if ((unsigned int)v4 >= 0x64)
				{
					v10 = sub_1401F9BD0();
					v11 = (unsigned int)(v4 - 100);
				}
				v12 = sub_1401F9C20(v10);
				if (v12)
				{
					v9 = *(unsigned int*)(v12 + 4 * v11 + 4);
					if ((int)v4 < 197)
					{
						v14 = sub_1401F60A0(*(_DWORD*)(a2 + 16));
						if (v14)
							v13 = *(float*)(v14 + 4 * v4 + 16);
						else
							v13 = 1.0;
					}
					else
					{
						v13 = 1.0;
					}
					*(float*)&v9 = *(float*)&v9 * v13;
					v15 = sub_1401F64E0(*(_DWORD*)(a2 + 20));
					if (v15)
						*(float*)&v9 = *(float*)&v9 * *(float*)(v15 + 4i64 * (unsigned int)v4 + 24);
					v16 = sub_1401F6920(*(_DWORD*)(a2 + 24));
					if (v16)
						*(float*)&v9 = *(float*)&v9 * *(float*)(v16 + 4i64 * (unsigned int)v4 + 4);
				}
			}
			return (__m128)v9;
		}
		else
		{
			return (__m128)0i64;
		}
	}
}

