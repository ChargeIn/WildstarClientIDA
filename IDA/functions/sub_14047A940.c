//----- (000000014047A940) ----------------------------------------------------
float __fastcall sub_14047A940(_QWORD* a1)
{
	__int64 v1; // rsi
	float v3; // xmm6_4
	unsigned __int64 v4; // rdx
	int v5; // r8d
	unsigned __int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v12; // rax

	v1 = a1[408];
	if (v1)
	{
		v3 = 1.0;
		if (a1[23])
		{
			v4 = a1[51];
			v5 = 0;
			v6 = 0i64;
			if (v4)
			{
				v7 = a1[50];
				while (*(_DWORD*)v7 || *(_BYTE*)(v7 + 4))
				{
					++v6;
					v7 += 12i64;
					if (v6 >= v4)
						goto LABEL_10;
				}
				v5 = *(_DWORD*)(a1[50] + 12 * v6 + 8);
			}
		LABEL_10:
			v8 = sub_1403D90D0(qword_140C65898, v5);
			v9 = a1[23];
			if (v8)
			{
				if ((*(_DWORD*)(v9 + 96) & 0x8000) == 0)
					goto LABEL_15;
			}
			else if ((*(_DWORD*)(v9 + 96) & 0x2000) != 0 && a1[51])
			{
				v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1[50] + 8i64));
			LABEL_15:
				if (v8)
				{
					if (*(_QWORD**)(v8 + 3840) == a1)
					{
						v10 = sub_14022D500(*(_DWORD*)(v8 + 216));
						if (v10)
						{
							if (*(_DWORD*)(v8 + 52))
								v3 = *(float*)(v10 + 116);
							else
								v3 = *(float*)(v10 + 112);
						}
					}
				}
			}
		}
		return v3 * *(float*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 16i64))(v1) + 24);
	}
	v12 = a1[3];
	if (v12)
		return *(float*)(v12 + 104);
	else
		return 1.0;
}
// 140C65898: using guessed type __int64 qword_140C65898;

