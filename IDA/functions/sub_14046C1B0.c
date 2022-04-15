//----- (000000014046C1B0) ----------------------------------------------------
void __fastcall sub_14046C1B0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // rax
	__int64* v5; // rdx
	int v6; // eax
	float v7; // xmm1_4
	float v8; // xmm1_4
	__int64 v9; // rcx
	int i; // r8d
	int v11; // r9d
	__int64 v12; // [rsp+18h] [rbp+18h]

	if (a2 < 0x46)
	{
		v2 = *(_QWORD*)(a1 + 5824);
		v3 = v2;
		v4 = *(_QWORD*)(v2 + 8);
		while (v4)
		{
			if (*(_DWORD*)(v4 + 32) < a2)
			{
				v4 = *(_QWORD*)(v4 + 24);
			}
			else
			{
				v3 = v4;
				v4 = *(_QWORD*)(v4 + 16);
			}
		}
		if (v3 == v2 || (v12 = v3, a2 < *(_DWORD*)(v3 + 32)))
			v12 = *(_QWORD*)(a1 + 5824);
		if (v12 != v2)
		{
			v5 = *(__int64**)(v12 + 40);
			if (v5)
			{
				v6 = *((_DWORD*)v5 + 2);
				if (v6)
				{
					v7 = *((float*)v5 + 7);
					*((_DWORD*)v5 + 2) = v6 - 1;
					if (v7 != 0.0)
						*((float*)v5 + 6) = *((float*)v5 + 6) / v7;
					v8 = *((float*)v5 + 8);
					if (v8 != 0.0)
						*((float*)v5 + 4) = *((float*)v5 + 4) / v8;
				}
				v9 = *v5;
				for (i = 0; v9; v9 = *(_QWORD*)(v9 + 24))
				{
					*(_DWORD*)(v9 + 1480) = i;
					v11 = *((_DWORD*)v5 + 2);
					++i;
					if (v11)
						*(float*)(v9 + 1488) = (float)((float)*(int*)(v9 + 1480) * 6.2831855) / (float)v11;
					else
						*(_DWORD*)(v9 + 1488) = 0;
				}
			}
		}
	}
}

