//----- (000000014077E2C0) ----------------------------------------------------
void __fastcall sub_14077E2C0(__int64 a1, int a2)
{
	__m128* v2; // rcx
	unsigned int* v3; // rbx
	int v4; // edi
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // rax

	if (!a2)
	{
		v2 = (__m128*)qword_140C65898;
		v3 = *(unsigned int**)(qword_140C65898 + 25744);
		v4 = 0;
		if (v3)
		{
			v5 = v3[66];
			v6 = sub_1403D90D0(qword_140C65898, v5);
			if (v6)
			{
				if (*(_DWORD*)(v6 + 128) == 20 && !v3[171])
				{
					if (*(_DWORD*)(v6 + 592))
					{
						if ((unsigned int)sub_14045A950((__int64)v3, v5) == 2)
						{
							v7 = sub_1401F31E0(v3[55]);
							if (v7)
							{
								if (sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v7 + 84), (__int64)v3))
								{
									sub_140397CE0(qword_140C65898);
									return;
								}
							}
						}
					}
				}
			}
			v2 = (__m128*)qword_140C65898;
		}
		v8 = v2[1609].m128_u64[0];
		if (v8)
			v4 = *(_DWORD*)(v8 + 264);
		sub_14039D2C0(v2, v4);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

