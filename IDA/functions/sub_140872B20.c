//----- (0000000140872B20) ----------------------------------------------------
void __fastcall sub_140872B20(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	__int64 v5; // rcx
	unsigned __int16 v9; // di
	unsigned int* v10; // rcx
	__int64 v11; // r8
	int* v12; // rax
	int* v13; // r15
	int* v14; // rdx
	__int64* v15; // rcx
	unsigned int v16; // r8d
	int* v17; // r10
	int* v18; // r9
	unsigned int v19; // edx
	__int64 v20; // rax

	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
	{
		v9 = 0;
		if (*(_WORD*)(a1 + 24))
		{
			v10 = (unsigned int*)(v5 + 8);
			v11 = *(unsigned __int16*)(a1 + 24);
			do
			{
				if (*v10 >= a3 && *v10 < a3 + a4)
					++v9;
				v10 += 8;
				--v11;
			} while (v11);
			if (v9)
			{
				v12 = (int*)sub_1408819F0(dword_140C10F28, 32i64 * (*(unsigned __int16*)(a2 + 24) + v9));
				v13 = v12;
				if (v12)
				{
					v14 = *(int**)(a2 + 32);
					if (v14)
						sub_1407DB590(v12, v14, 32 * (unsigned int)*(unsigned __int16*)(a2 + 24));
					v15 = *(__int64**)(a1 + 32);
					v16 = 0;
					v17 = &v13[8 * *(unsigned __int16*)(a2 + 24)];
					if (*(_WORD*)(a1 + 24))
					{
						v18 = v17 + 4;
						do
						{
							v19 = *((_DWORD*)v15 + 2);
							if (v19 >= a3 && v19 < a3 + a4)
							{
								v20 = *v15;
								*(v18 - 2) = 0;
								v17 += 8;
								*((_QWORD*)v17 - 4) = v20;
								v18 += 8;
								*((_QWORD*)v18 - 4) = v15[2];
								*((_QWORD*)v18 - 3) = v15[3];
							}
							++v16;
							v15 += 4;
						} while (v16 < *(unsigned __int16*)(a1 + 24));
					}
					sub_1408683D0(a2);
					*(_WORD*)(a2 + 24) += v9;
					*(_QWORD*)(a2 + 32) = v13;
				}
				else
				{
					sub_1408683D0(a2);
				}
			}
		}
	}
}
// 140C10F28: using guessed type int dword_140C10F28;

