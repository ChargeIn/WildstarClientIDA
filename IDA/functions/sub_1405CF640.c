//----- (00000001405CF640) ----------------------------------------------------
void __fastcall sub_1405CF640(__int64 a1, __int64 a2)
{
	int v3; // edx
	int v5; // eax
	bool v6; // zf
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v14; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v17; // rax
	__int64 v18; // rdx
	int v19; // eax
	char v20[24]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v21; // [rsp+48h] [rbp+10h] BYREF

	v3 = *(_DWORD*)(a2 + 8);
	if (v3)
	{
		v17 = sub_1403D90D0(qword_140C65898, v3);
		v18 = v17;
		if (v17)
		{
			if ((*(_DWORD*)(a2 + 8) & 0xC0000000) == 0x40000000)
			{
				*(_DWORD*)(v17 + 532) = *(unsigned __int8*)(a2 + 12);
			}
			else if (*(_BYTE*)(a2 + 12))
			{
				v19 = *(_DWORD*)(v17 + 8);
				*(_QWORD*)(v18 + 14072) = *(_QWORD*)(*(_QWORD*)a1 + 8i64);
				LODWORD(v21) = v19;
				sub_1400EE810(a1 + 160, &v21);
			}
			else
			{
				*(_QWORD*)(v17 + 14072) = 0i64;
				LODWORD(v21) = *(_DWORD*)(v17 + 8);
				sub_1400293C0(a1 + 160, (__int64)v20, (int*)&v21);
			}
		}
	}
	else
	{
		v5 = *(unsigned __int8*)(a2 + 12);
		v6 = *(_BYTE*)(a2 + 13) == 0;
		*(_DWORD*)(a1 + 48) = v5;
		if (v6)
		{
			*(_DWORD*)(a1 + 44) = v5;
			if (v5)
				sub_140008410(a1 + 160);
		}
		else
		{
			v7 = *(_QWORD*)(a1 + 168);
			v8 = *(_QWORD*)(v7 + 16);
			if (v8 != v7)
			{
				do
				{
					v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v8 + 32));
					if (v9 && *(_DWORD*)(v9 + 128) == 20)
					{
						v10 = *(_QWORD*)(v8 + 24);
						v11 = v8;
						if (v10)
						{
							v8 = *(_QWORD*)(v8 + 24);
							for (i = *(_QWORD*)(v10 + 16); i; i = *(_QWORD*)(i + 16))
								v8 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v8 = j;
							if (*(_QWORD*)(v8 + 24) != j)
								v8 = j;
						}
						v21 = v11;
						sub_1400EFCD0(a1 + 160, &v21);
					}
					else
					{
						v14 = *(_QWORD*)(v8 + 24);
						if (v14)
						{
							v8 = *(_QWORD*)(v8 + 24);
							for (k = *(_QWORD*)(v14 + 16); k; k = *(_QWORD*)(k + 16))
								v8 = k;
						}
						else
						{
							for (m = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
								v8 = m;
							if (*(_QWORD*)(v8 + 24) != m)
								v8 = m;
						}
					}
				} while (v8 != *(_QWORD*)(a1 + 168));
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405CF640: using guessed type char var_18[24];

