//----- (00000001408527D0) ----------------------------------------------------
void __fastcall sub_1408527D0(__int64 a1, float* a2, char a3)
{
	__int64 v4; // rax
	int v5; // edi
	int v6; // esi
	int v7; // ebp
	int v8; // ebx
	unsigned __int8* v9; // r9
	unsigned int v10; // r10d
	int v11; // edx
	__int64 v12; // r8
	float* v13; // r8
	unsigned __int8* v14; // r9
	unsigned int v15; // r10d
	int v16; // edx
	__int64 v17; // r8
	float* v18; // r8
	unsigned __int8* v19; // r9
	unsigned int v20; // r10d
	int v21; // edx
	__int64 v22; // r8
	float* v23; // r8
	unsigned __int8* v24; // r9
	unsigned int v25; // r10d
	int v26; // edx
	__int64 v27; // r8
	float* v28; // r8

	if (*(char*)(a1 + 90) < 0)
	{
		v4 = *(_QWORD*)(a1 + 32);
		if (v4)
		{
			v5 = a3 & 1;
			v6 = a3 & 2;
			v7 = a3 & 4;
			v8 = a3 & 8;
			do
			{
				if (v5)
				{
					v9 = *(unsigned __int8**)(v4 + 32);
					if (v9)
					{
						v10 = *v9;
						v11 = 0;
						while (1)
						{
							v12 = (unsigned int)(v11 + 1);
							if (!v9[v12])
								break;
							++v11;
							if ((unsigned int)v12 >= v10)
								goto LABEL_12;
						}
						v13 = (float*)&v9[16 * v11 + ((v10 + 4) & 0xFFFFFFFC)];
						if (v13)
							*a2 = *v13 + *a2;
					}
				}
			LABEL_12:
				if (v6)
				{
					v14 = *(unsigned __int8**)(v4 + 32);
					if (v14)
					{
						v15 = *v14;
						v16 = 0;
						while (1)
						{
							v17 = (unsigned int)(v16 + 1);
							if (v14[v17] == 2)
								break;
							++v16;
							if ((unsigned int)v17 >= v15)
								goto LABEL_20;
						}
						v18 = (float*)&v14[16 * v16 + ((v15 + 4) & 0xFFFFFFFC)];
						if (v18)
							a2[2] = a2[2] + *v18;
					}
				}
			LABEL_20:
				if (v7)
				{
					v19 = *(unsigned __int8**)(v4 + 32);
					if (v19)
					{
						v20 = *v19;
						v21 = 0;
						while (1)
						{
							v22 = (unsigned int)(v21 + 1);
							if (v19[v22] == 3)
								break;
							++v21;
							if ((unsigned int)v22 >= v20)
								goto LABEL_28;
						}
						v23 = (float*)&v19[16 * v21 + ((v20 + 4) & 0xFFFFFFFC)];
						if (v23)
							a2[3] = a2[3] + *v23;
					}
				}
			LABEL_28:
				if (v8)
				{
					v24 = *(unsigned __int8**)(v4 + 32);
					if (v24)
					{
						v25 = *v24;
						v26 = 0;
						while (1)
						{
							v27 = (unsigned int)(v26 + 1);
							if (v24[v27] == 4)
								break;
							++v26;
							if ((unsigned int)v27 >= v25)
								goto LABEL_36;
						}
						v28 = (float*)&v24[16 * v26 + ((v25 + 4) & 0xFFFFFFFC)];
						if (v28)
							a2[4] = a2[4] + *v28;
					}
				}
			LABEL_36:
				v4 = *(_QWORD*)(v4 + 16);
			} while (v4);
		}
	}
}

